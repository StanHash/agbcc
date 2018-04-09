#include "config.h"
#include "options.h"

struct lang_opt documented_lang_options[] = {
  #include "common-options.c"
  { NULL, NULL } /* end */
};
