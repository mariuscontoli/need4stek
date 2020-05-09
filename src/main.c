/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main source file
*/

#include <my_tools.h>
#include <n4s.h>

<<<<<<< HEAD
int remov_space(char const *c)
{
    int i = 0;
    for (; (c[i] == ':' || c[i] == '\t') && c[i] != '\0'; i++);
    return i;
}

int main(void)
{
    char **tab = my_str_to_word_array("bili:bili:fasfsad:safsadf:f:sdfs", remov_space);
    my_show_word_array(tab);
=======
void start(char *str, size_t len)
{
    put_command(START"\n");
    str = get_next_line(0);
}

void stop(char *str, size_t len)
{
    put_command(STOP"\n");
    str = get_next_line(0);
}

void get_infos(char *str, size_t len)
{
    put_command(INFO"\n");
    str = get_next_line(0);
}

void car_forward(char *str, size_t len)
{
    put_command(FOR"0.3\n");
    str = get_next_line(0);;
}

int delim(char const *str)
{
    int i = 0;
    for (; str[i] == ':' && str[i] != '\0'; i++);
    return i;
} 

int is_track_cleared(char *str)
{
    char **tab = NULL;
    int i = 0;

    tab = my_str_to_word_array(str, delim);

    while (tab[i] != NULL) {
        if (strcmp("Track Cleared", tab[i]) == 0) {
            put_command(STOP"\n");
            return (0);
        }
        i += 1;
    }
    return (1);
}

int forward(dir_t *dir, char *str, size_t len)
{
    if (dir->mid < 2000) {
        put_command(WHEELS"0.0\n");
        str = get_next_line(0);
        if (is_track_cleared(str) == 0)
            return (0);
        put_command(FOR"1\n");
        str = get_next_line(0);
        if (is_track_cleared(str) == 0)
            return (0);
    }
    return (1);
}

int move_car(dir_t *dir, char *str, size_t len)
{
    if (forward(dir, str, len) == 0)
        return (0);

    return (1);
}

int main(void)
{
    char *str = NULL;
    size_t len = 0;
    char **infos = NULL;
    int offset = 1;
    float middle;
    dir_t dir;

    start(str, len);
    car_forward(str, len);
    while (offset)
    {
        put_command(INFO"\n");
        str = get_next_line(0);
        offset = is_track_cleared(str);
        infos = my_str_to_word_array(str, delim);
        dir.mid = atoi(infos[17]);
        offset = move_car(&dir, str, len);
    }
    stop(str, len);

>>>>>>> e03936ef4a8f432ad1069216c84fd3c5407c414a
    return (0);
}