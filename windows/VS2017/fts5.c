

#if !defined(SQLITE_CORE) || defined(SQLITE_ENABLE_FTS5) 

#if !defined(NDEBUG) && !defined(SQLITE_DEBUG) 
# define NDEBUG 1
#endif
#if defined(NDEBUG) && defined(SQLITE_DEBUG)
# undef NDEBUG
#endif

#line 1 "fts5.h"
