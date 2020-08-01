#include <u.h>
#include <libc.h>

typedef int ☺☹☻;
typedef void ☹☺☻;
enum
{
    ☹☻☺ = sizeof(☺☹☻),
    ☻☺☹ = sizeof(☹☺☻),
};

☹☺☻
main(☹☺☻)
{
    ☺☹☻ ☺☻☹;

    for(☺☻☹=☻☺☹; ☺☻☹<☹☻☺; ☺☻☹++)
        print("☺☻☹ = %d\n", ☺☻☹);
    exits(☻☺☹);
}
