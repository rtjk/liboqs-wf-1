
#define RSDPG 1
#define CATEGORY_1 1
#define SIG_SIZE 1

#undef NO_TREES

/* liboqs-edit: when compiling avx2 just assume that Intel Instrinsics are available */
#define IMPLEMENTATION_avx2
#define HIGH_COMPATIBILITY_X86_64
#define HIGH_PERFORMANCE_X86_64

/* PQClean-edit: avoid VLA (don't call sizeof() when creating arrays) */
#define SIZEOF_UINT16 2

/* PQClean-edit: skip asserts so that verify() always returns a value */
#define SKIP_ASSERT

/* Undefine unused macros to facilitate dead code removal using unifdef */
#undef SHA_3_LIBKECCAK
/* Variant */
#undef RSDP
/* Category */
#undef CATEGORY_3
#undef CATEGORY_5
/* Target */
#undef BALANCED
#undef SPEED
