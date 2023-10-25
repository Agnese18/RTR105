#include "foo.h"
#include <stdio.h>
int main(void)
{
    char *name_main = "bar";
    printf("name_main atrašanas vieta atmiņa: %p\n", name_main);
    printf("name_main vertiba pirms foo izplatišanas: %s\n", name_main);

int id_main = 42;
    printf("id_main atrašanas vieta atmiņa: %p\n", &id_main);
    printf("id_main vertiba pirms foo izplatisanas: %d\n\n", id_main);
    
   // foo(42, "bar");
foo(id_main, name_main);

    return 0;
}
