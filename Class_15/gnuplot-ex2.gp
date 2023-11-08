#!/usr/bin/gnuplot -persist
# set terminal pngcairo  background "#ffffff" enhanced fontscale 1.0 size 640, 480  dashlength 2
# set output 'lines_arrows.1.png'

set label 1 "set style line 1 lt 2 lc rgb \"red\" lw 3" at -0.400000, -0.250000, 0.00000 left norotate back textcolor rgb "black"  nopoint
set label 2 "set style line 2 lt 2 lc rgb \"orange\" lw 2" at -0.400000, -0.350000, 0.00000 left norotate back textcolor rgb "orange"  nopoint
set label 3 "set style line 3 lt 2 lc rgb \"yellow\" lw 3" at -0.400000, -0.450000, 0.00000 left norotate back textcolor rgb "yellow"  nopoint
set label 4 "set style line 4 lt 2 lc rgb \"green\" lw 2" at -0.400000, -0.550000, 0.00000 left norotate back textcolor rgb "green"  nopoint
set label 5 "plot ... lt 1 lc 3 " at -0.400000, -0.650000, 0.00000 left norotate back textcolor rgb "#56b4e9"  nopoint
set label 6 "plot ... lt 3 lc 3 " at -0.200000, -0.850000, 0.00000 left norotate back textcolor rgb "#56b4e9"  nopoint
set label 7 "plot ... lt 5 lc 3 " at -0.300000, -0.990000, 0.00000 left norotate back textcolor rgb "#56b4e9"  nopoint
set style line 1  linecolor rgb "grey"  linewidth 3.000 dashtype 2 pointtype 2 pointsize default
set style line 2  linecolor rgb "black"  linewidth 2.000 dashtype 2 pointtype 2 pointsize default
set style line 3  linecolor rgb "yellow"  linewidth 3.000 dashtype 2 pointtype 2 pointsize default
set style line 4  linecolor rgb "green"  linewidth 2.000 dashtype 2 pointtype 2 pointsize default
unset parametric
unset xtics
unset ytics
set title "Independent colors and dot/dash styles" 
set xlabel "You will only see dashed lines if your current terminal setting permits it" 
set xrange [ -0.500000 : 3.50000 ] noreverse nowriteback
set x2range [ * : * ] noreverse writeback
set yrange [ -1.00000 : 1.40000 ] noreverse nowriteback
set y2range [ * : * ] noreverse writeback
set zrange [ * : * ] noreverse writeback
set cbrange [ * : * ] noreverse writeback
set rrange [ * : * ] noreverse writeback
set bmargin  7
set colorbox vertical origin screen 0.7, 0.2 size screen 0.05, 0.6 front  noinvert bdefault
unset colorbox
NO_ANIMATION = 1
plot cos(x)     ls 1 title 'ls 1',        cos(x-.2)  ls 2 title 'ls 2',     cos(x-.4)  ls 3 title 'ls 3',     cos(x-.6)  ls 4 title 'ls 4',      cos(x-.8)  lt 1 lc 3 title 'lt 1 lc 3',       cos(x-1.)  lt 3 lc 3 title 'lt 3 lc 3',       cos(x-1.2) lt 5 lc 3 title 'lt 5 lc 3'
