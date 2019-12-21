#ifndef IO500_PHASE_IOR_EASY_H
#define IO500_PHASE_IOR_EASY_H

#include <ior.h>
#include <io500-util.h>

typedef struct{
  char * api;
  int odirect;

  int filePerProc;
  char * transferSize;
  char * blockSize;
  char * hintsFileName;
} opt_ior_easy;

opt_ior_easy ior_easy_o;

void ior_easy_add_params(u_argv_t * argv);

// Generic helpers
double ior_process_write(u_argv_t * argv, FILE * out, IOR_point_t ** res_out);
double ior_process_read(u_argv_t * argv, FILE * out, IOR_point_t ** res_out);

#endif