/*

This is to allow different compilers/languages (C or C++) to have their own option table
definition without having to resort to wierd configure/definition tricks.
 -Stan

*/

#ifndef _OPTIONS_H
#define _OPTIONS_H

struct lang_opt
{
    char *option;
    char *description;
};

/* Table of language-specific options.  */

extern struct lang_opt documented_lang_options[];

#endif // _OPTIONS_H
