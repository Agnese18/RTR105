#!/usr/bin/gnuplot -persist
# set terminal pngcairo  transparent enhanced font "italic,10" fontscale 1.0 size 600, 400 
# set output 'projection.1.png'
set dummy u, v
unset key
set wall y0  fc  rgb "bisque"  fillstyle  transparent solid 0.50 border lt -1
set wall x0  fc  rgb "forest-green"  fillstyle  transparent solid 0.50 border lt -1
set wall z0  fc  rgb "slategrey"  fillstyle  transparent solid 0.50 border lt -1
set parametric
set view map scale 1
set isosamples 75, 25
set style data lines
set xyplane relative 0
set xtics border in scale 0.5,0.5 nomirror norotate  autojustify
set xtics  norangelimit -4.00000,2,4.00000
set ytics border in scale 0.5,0.5 nomirror norotate  autojustify
set ytics  norangelimit -4.00000,2,4.00000
set ztics border in scale 0.5,0.5 nomirror norotate  center
set ztics  norangelimit 0.5
set cbtics border in scale 0.5,0.5 mirror norotate  autojustify
set rtics border in scale 0.5,0.5 nomirror norotate  autojustify
set title "set view map" 
set urange [ 0.00000 : 31.4159 ] noreverse nowriteback
set vrange [ 0.00000 : 6.28319 ] noreverse nowriteback
set xlabel "X-axis" 
set xrange [ -5.00000 : 5.00000 ] noreverse nowriteback
set x2range [ * : * ] noreverse writeback
set ylabel "Y-axis" 
set yrange [ -5.00000 : 5.00000 ] noreverse nowriteback
set y2range [ * : * ] noreverse writeback
set zlabel "Z-axis" 
set zrange [ * : * ] noreverse writeback
set cbrange [ * : * ] noreverse writeback
set rrange [ * : * ] noreverse writeback
set pm3d implicit at s
set pm3d depthorder 
set pm3d interpolate 1,1 flush begin noftriangles border linecolor rgb "black"  linewidth 0.500 dashtype solid corners2color mean
set palette cubehelix start 0.5 cycles -1.5 saturation 1
set colorbox vertical origin screen 0.9, 0.2 size screen 0.05, 0.6 front  noinvert bdefault
unset colorbox
NO_ANIMATION = 1
splot (1-0.1*u*cos(v))*cos(u),(1-0.1*u*cos(v))*sin(u),0.1*(sin(v)+u/1.7-10) with pm3d
