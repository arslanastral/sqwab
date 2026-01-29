#include "sqlite3.h"

// This is the entry point for SQLite3 Multiple Ciphers
extern int sqlite3mc_initialize(void);

int sqlite3_wasm_extra_init(const char *z) {
  // This registers the PRAGMAs and the VFS shim
  return sqlite3mc_initialize();
}
