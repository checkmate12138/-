#ifndef TOOLS_H
#define TOOLS_H
#include <stdio.h>
#include <stdbool.h>
#ifdef DEBUG
	#define debug(...) printf(__VA_ARGS__)
#else
	#define debug(...)
#endif
void rand_two(void);
void show_view(void);
bool is_die();
#endif//TOOLS_H
