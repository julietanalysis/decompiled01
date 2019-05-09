
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___0061aff8;
  if (PTR___gmon_start___0061aff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400940(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_0061b010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0061b018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0061b020)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_0061b028)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0061b030)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_0061b038)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0061b040)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_0061b048)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0061b050)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0061b058)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_0061b060)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0061b068)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_0061b070)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_0061b078)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_0061b080)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_0061b088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_0061b090)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0061b098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_0061b0a0)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_0061b0a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_0061b0b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0061b0b8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0061b0c0)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___0061aff8)();
  return;
}


void _start(undefined8 uParm1,undefined8 uParm2,undefined8 uParm3)

{
  undefined8 in_stack_00000000;
  undefined auStack8 [8];
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,__libc_csu_init,__libc_csu_fini,uParm3,
                    auStack8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* WARNING: Removing unreachable block (ram,0x00400b07) */
/* WARNING: Removing unreachable block (ram,0x00400b11) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400b44) */
/* WARNING: Removing unreachable block (ram,0x00400b4e) */

void register_tm_clones(void)

{
  return;
}


void __do_global_dtors_aux(void)

{
  if (completed_6355 == 0) {
    deregister_tm_clones();
    completed_6355 = 1;
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400b94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void frame_dummy(void)

{
  register_tm_clones();
  return;
}


undefined8 main(undefined4 uParm1,undefined8 uParm2)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  globalArgc = uParm1;
  globalArgv = uParm2;
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_31_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_31_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_12_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_12_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_32_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_32_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_66_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_66_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_32_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_32_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_51_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_51_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_14_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_14_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_42_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_42_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_06_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_06_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_52_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_52_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_65_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_65_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_61_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_61_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_42_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_42_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_17_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_17_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_22_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_22_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_63_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_63_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_68_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_68_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_41_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_41_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_52_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_52_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_53_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_53_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_01_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_01_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_53_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_53_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_52_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_52_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_52_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_52_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_21_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_21_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_15_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_15_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_51_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_51_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_07_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_07_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_63_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_63_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_54_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_54_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_68_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_68_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_04_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_04_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_65_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_65_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_10_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_10_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_02_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_02_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_08_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_08_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_01_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_01_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_15_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_15_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_21_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_21_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_31_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_31_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_61_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_61_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_51_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_51_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_03_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_03_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_65_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_65_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_17_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_17_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_09_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_09_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_64_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_64_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_11_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_11_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_17_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_17_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_67_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_67_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_07_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_07_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_04_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_04_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_18_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_18_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_13_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_13_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_04_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_04_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_09_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_09_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_15_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_15_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_41_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_41_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_16_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_16_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_16_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_16_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_22_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_22_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_03_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_03_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_64_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_64_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_18_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_18_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_68_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_68_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_32_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_32_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_67_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_67_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_61_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_61_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_66_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_66_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_64_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_64_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_44_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_44_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_03_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_03_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_34_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_34_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_63_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_63_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_44_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_44_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_42_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_42_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_54_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_54_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_22_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_22_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_08_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_08_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_34_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_34_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_07_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_07_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_17_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_17_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_11_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_11_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_32_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_32_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_44_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_44_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_06_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_06_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_54_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_54_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_11_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_11_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_08_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_08_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_45_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_45_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_21_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_21_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_01_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_01_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_01_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_01_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_05_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_05_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_65_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_65_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_09_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_09_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_31_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_31_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_41_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_41_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_09_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_09_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_67_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_67_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_44_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_44_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_13_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_13_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_45_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_45_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_22_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_22_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_15_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_15_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_53_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_53_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_45_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_45_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_67_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_67_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_68_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_68_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_13_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_13_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_42_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_42_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_61_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_61_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_31_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_31_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_54_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_54_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_64_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_64_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_11_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_11_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_63_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_63_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_02_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_02_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_16_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_16_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_18_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_18_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_02_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_02_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_14_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_14_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_34_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_34_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_21_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_21_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_12_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_12_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_06_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_06_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_05_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_05_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_45_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_45_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_07_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_07_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_41_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_41_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_03_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_03_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_12_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_12_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_10_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_10_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_14_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_14_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_06_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_06_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_05_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_05_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_66_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_66_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_16_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_16_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_18_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_18_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_02_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_02_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_05_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_05_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_10_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_10_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_66_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_66_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_08_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_08_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_04_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_04_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_34_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_34_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_14_good();");
  CWE690_NULL_Deref_From_Return__struct_realloc_14_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_12_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_12_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_13_good();");
  CWE690_NULL_Deref_From_Return__struct_malloc_13_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_10_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_10_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_51_good();");
  CWE690_NULL_Deref_From_Return__long_realloc_51_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_53_good();");
  CWE690_NULL_Deref_From_Return__struct_calloc_53_good();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_31_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_31_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_12_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_12_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_32_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_32_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_66_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_66_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_32_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_32_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_51_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_51_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_14_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_14_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_42_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_42_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_06_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_06_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_52_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_52_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_65_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_65_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_61_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_61_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_42_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_42_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_17_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_17_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_22_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_22_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_63_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_63_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_68_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_68_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_41_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_41_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_52_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_52_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_53_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_53_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_01_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_01_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_53_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_53_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_52_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_52_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_52_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_52_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_21_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_21_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_15_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_15_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_51_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_51_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_07_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_07_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_63_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_63_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_54_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_54_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_68_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_68_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_04_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_04_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_65_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_65_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_10_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_10_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_02_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_02_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_08_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_08_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_01_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_01_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_15_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_15_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_21_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_21_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_31_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_31_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_61_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_61_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_51_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_51_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_03_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_03_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_65_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_65_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_17_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_17_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_09_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_09_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_64_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_64_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_11_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_11_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_17_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_17_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_67_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_67_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_07_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_07_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_04_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_04_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_18_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_18_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_13_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_13_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_04_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_04_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_09_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_09_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_15_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_15_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_41_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_41_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_16_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_16_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_16_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_16_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_22_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_22_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_03_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_03_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_64_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_64_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_18_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_18_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_68_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_68_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_32_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_32_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_67_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_67_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_61_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_61_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_66_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_66_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_64_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_64_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_44_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_44_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_03_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_03_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_34_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_34_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_63_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_63_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_44_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_44_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_42_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_42_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_54_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_54_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_22_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_22_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_08_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_08_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_34_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_34_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_07_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_07_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_17_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_17_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_11_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_11_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_32_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_32_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_44_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_44_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_06_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_06_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_54_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_54_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_11_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_11_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_08_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_08_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_45_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_45_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_21_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_21_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_01_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_01_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_01_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_01_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_05_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_05_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_65_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_65_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_09_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_09_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_31_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_31_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_41_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_41_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_09_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_09_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_67_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_67_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_44_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_44_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_13_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_13_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_45_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_45_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_22_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_22_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_15_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_15_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_53_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_53_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_45_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_45_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_67_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_67_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_68_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_68_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_13_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_13_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_42_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_42_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_61_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_61_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_31_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_31_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_54_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_54_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_64_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_64_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_11_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_11_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_63_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_63_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_02_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_02_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_16_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_16_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_18_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_18_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_02_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_02_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_14_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_14_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_34_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_34_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_21_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_21_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_12_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_12_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_06_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_06_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_05_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_05_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_45_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_45_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_07_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_07_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_41_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_41_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_03_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_03_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_12_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_12_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_10_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_10_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_14_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_14_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_06_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_06_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_05_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_05_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_66_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_66_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_16_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_16_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_18_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_18_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_02_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_02_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_05_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_05_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_10_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_10_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_66_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_66_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_08_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_08_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_04_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_04_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_34_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_34_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_realloc_14_bad();");
  CWE690_NULL_Deref_From_Return__struct_realloc_14_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_12_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_12_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_malloc_13_bad();");
  CWE690_NULL_Deref_From_Return__struct_malloc_13_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_10_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_10_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__long_realloc_51_bad();");
  CWE690_NULL_Deref_From_Return__long_realloc_51_bad();
  printLine("Calling CWE690_NULL_Deref_From_Return__struct_calloc_53_bad();");
  CWE690_NULL_Deref_From_Return__struct_calloc_53_bad();
  return 0;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_66_bad(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_28 = calloc(1,8);
  local_10 = local_28;
  CWE690_NULL_Deref_From_Return__struct_calloc_66b_badSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_28 = calloc(1,8);
  local_10 = local_28;
  CWE690_NULL_Deref_From_Return__struct_calloc_66b_goodB2GSink(local_38);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_66_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_61_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)CWE690_NULL_Deref_From_Return__struct_malloc_61b_badSource(0);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)CWE690_NULL_Deref_From_Return__struct_malloc_61b_goodB2GSource(0);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_61_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_07_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (staticFive == 5) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (staticFive == 5) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if ((staticFive == 5) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_53_bad(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_53b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_53b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_53_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_54c_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_realloc_54d_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_54c_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_realloc_54d_goodB2GSink(uParm1);
  return;
}


void badSink(void)

{
  undefined4 *__ptr;
  
  __ptr = CWE690_NULL_Deref_From_Return__struct_malloc_45_badData;
  *CWE690_NULL_Deref_From_Return__struct_malloc_45_badData = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_45_bad(void)

{
  CWE690_NULL_Deref_From_Return__struct_malloc_45_badData = malloc(8);
  badSink();
  return;
}


void goodB2GSink(void)

{
  undefined4 *__ptr;
  
  __ptr = CWE690_NULL_Deref_From_Return__struct_malloc_45_goodB2GData;
  if (CWE690_NULL_Deref_From_Return__struct_malloc_45_goodB2GData != (undefined4 *)0x0) {
    *CWE690_NULL_Deref_From_Return__struct_malloc_45_goodB2GData = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G(void)

{
  CWE690_NULL_Deref_From_Return__struct_malloc_45_goodB2GData = malloc(8);
  goodB2GSink();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_45_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_01_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_01_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_53d_badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_53d_goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_52b_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_calloc_52c_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_52b_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_calloc_52c_goodB2GSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_09_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (GLOBAL_CONST_TRUE != 0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (GLOBAL_CONST_FALSE == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if ((GLOBAL_CONST_TRUE != 0) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_52b_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__long_realloc_52c_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_52b_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__long_realloc_52c_goodB2GSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_10_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (globalTrue != 0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (globalFalse == 0) {
    if (__ptr != (undefined8 *)0x0) {
      *__ptr = 5;
      printLongLine(*__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if ((globalTrue != 0) && (__ptr != (undefined8 *)0x0)) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_61_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)CWE690_NULL_Deref_From_Return__struct_realloc_61b_badSource(0);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)CWE690_NULL_Deref_From_Return__struct_realloc_61b_goodB2GSource(0);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_61_good(void)

{
  goodB2G();
  return;
}


void * CWE690_NULL_Deref_From_Return__struct_realloc_61b_badSource(void *pvParm1)

{
  void *pvVar1;
  
  pvVar1 = realloc(pvParm1,8);
  return pvVar1;
}


void * CWE690_NULL_Deref_From_Return__struct_realloc_61b_goodB2GSource(void *pvParm1)

{
  void *pvVar1;
  
  pvVar1 = realloc(pvParm1,8);
  return pvVar1;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_63_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_63b_badSink(&local_10);
  return;
}


void goodB2G(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_63b_goodB2GSink(&local_10);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_63_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_07_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (staticFive == 5) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (staticFive == 5) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if ((staticFive == 5) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_04_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402f40) */

void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_08_bad(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_08_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_54b_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_malloc_54c_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_54b_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_malloc_54c_goodB2GSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_52_bad(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_52b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_52b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_52_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_51b_badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_51b_goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_16_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_16_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_52_bad(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_52b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_52b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_52_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_51b_badSink(undefined8 *puParm1)

{
  *puParm1 = 5;
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_51b_goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 != (undefined8 *)0x0) {
    *puParm1 = 5;
    printLongLine(*puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_52c_badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_52c_goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_16_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_16_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_54_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_54b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_54b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_54_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_64b_badSink(undefined8 *puParm1)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)*puParm1;
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_64b_goodB2GSink(undefined8 *puParm1)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)*puParm1;
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_22_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_22_badGlobal = 1;
  CWE690_NULL_Deref_From_Return__struct_malloc_22_badSink(pvVar1);
  return;
}


void goodB2G1(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_22_goodB2G1Global = 0;
  CWE690_NULL_Deref_From_Return__struct_malloc_22_goodB2G1Sink(pvVar1);
  return;
}


void goodB2G2(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_22_goodB2G2Global = 1;
  CWE690_NULL_Deref_From_Return__struct_malloc_22_goodB2G2Sink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_54b_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__long_realloc_54c_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_54b_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__long_realloc_54c_goodB2GSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_52c_badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_52c_goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_54d_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_malloc_54e_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_54d_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_malloc_54e_goodB2GSink(uParm1);
  return;
}


void badSink(void)

{
  undefined4 *__ptr;
  
  __ptr = CWE690_NULL_Deref_From_Return__struct_calloc_45_badData;
  *CWE690_NULL_Deref_From_Return__struct_calloc_45_badData = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_45_bad(void)

{
  CWE690_NULL_Deref_From_Return__struct_calloc_45_badData = calloc(1,8);
  badSink();
  return;
}


void goodB2GSink(void)

{
  undefined4 *__ptr;
  
  __ptr = CWE690_NULL_Deref_From_Return__struct_calloc_45_goodB2GData;
  if (CWE690_NULL_Deref_From_Return__struct_calloc_45_goodB2GData != (undefined4 *)0x0) {
    *CWE690_NULL_Deref_From_Return__struct_calloc_45_goodB2GData = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G(void)

{
  CWE690_NULL_Deref_From_Return__struct_calloc_45_goodB2GData = calloc(1,8);
  goodB2GSink();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_45_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_22_bad(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_22_badGlobal = 1;
  CWE690_NULL_Deref_From_Return__struct_realloc_22_badSink(pvVar1);
  return;
}


void goodB2G1(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_22_goodB2G1Global = 0;
  CWE690_NULL_Deref_From_Return__struct_realloc_22_goodB2G1Sink(pvVar1);
  return;
}


void goodB2G2(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_22_goodB2G2Global = 1;
  CWE690_NULL_Deref_From_Return__struct_realloc_22_goodB2G2Sink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_68b_badSink(void)

{
  undefined4 *__ptr;
  
  __ptr = CWE690_NULL_Deref_From_Return__struct_malloc_68_badDataForBadSink;
  *CWE690_NULL_Deref_From_Return__struct_malloc_68_badDataForBadSink = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_68b_goodB2GSink(void)

{
  undefined4 *__ptr;
  
  __ptr = CWE690_NULL_Deref_From_Return__struct_malloc_68_badDataForGoodSink;
  if (CWE690_NULL_Deref_From_Return__struct_malloc_68_badDataForGoodSink != (undefined4 *)0x0) {
    *CWE690_NULL_Deref_From_Return__struct_malloc_68_badDataForGoodSink = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_65b_badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_65b_goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_54_bad(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_54b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_54b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_54_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_65b_badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_65b_goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_54d_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_realloc_54e_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_54d_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_realloc_54e_goodB2GSink(uParm1);
  return;
}


void badSink(undefined4 *puParm1)

{
  if (badStatic != 0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_21_bad(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  badStatic = 1;
  badSink(pvVar1);
  return;
}


void goodB2G1Sink(undefined4 *puParm1)

{
  if (goodB2G1Static == 0) {
    if (puParm1 != (undefined4 *)0x0) {
      *puParm1 = 1;
      puParm1[1] = 1;
      printStructLine(puParm1);
      free(puParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  goodB2G1Static = 0;
  goodB2G1Sink(pvVar1);
  return;
}


void goodB2G2Sink(undefined4 *puParm1)

{
  if ((goodB2G2Static != 0) && (puParm1 != (undefined4 *)0x0)) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void goodB2G2(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  goodB2G2Static = 1;
  goodB2G2Sink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_67b_badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_67b_goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_53b_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__long_realloc_53c_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_53b_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__long_realloc_53c_goodB2GSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_67b_badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_67b_goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_13_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (GLOBAL_CONST_FIVE == 5) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (GLOBAL_CONST_FIVE == 5) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if ((GLOBAL_CONST_FIVE == 5) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_65b_badSink(undefined8 *puParm1)

{
  *puParm1 = 5;
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_65b_goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 != (undefined8 *)0x0) {
    *puParm1 = 5;
    printLongLine(*puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_53_bad(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_53b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_53b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_53_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_63b_badSink(undefined8 *puParm1)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)*puParm1;
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_63b_goodB2GSink(undefined8 *puParm1)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)*puParm1;
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void badSink(undefined4 *puParm1)

{
  if (badStatic != 0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_21_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  badStatic = 1;
  badSink(pvVar1);
  return;
}


void goodB2G1Sink(undefined4 *puParm1)

{
  if (goodB2G1Static == 0) {
    if (puParm1 != (undefined4 *)0x0) {
      *puParm1 = 1;
      puParm1[1] = 1;
      printStructLine(puParm1);
      free(puParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  goodB2G1Static = 0;
  goodB2G1Sink(pvVar1);
  return;
}


void goodB2G2Sink(undefined4 *puParm1)

{
  if ((goodB2G2Static != 0) && (puParm1 != (undefined4 *)0x0)) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void goodB2G2(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  goodB2G2Static = 1;
  goodB2G2Sink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_03_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_12_bad(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_12_good(void)

{
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE690_NULL_Deref_From_Return__struct_realloc_32_bad(void)

{
  void *local_30;
  undefined4 *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = realloc((void *)0x0,8);
  *local_10 = local_20;
  local_28 = (undefined4 *)*local_18;
  *local_28 = 1;
  local_28[1] = 1;
  printStructLine(local_28);
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  void *local_30;
  undefined4 *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = realloc((void *)0x0,8);
  *local_10 = local_20;
  local_28 = (undefined4 *)*local_18;
  if (local_28 != (undefined4 *)0x0) {
    *local_28 = 1;
    local_28[1] = 1;
    printStructLine(local_28);
    free(local_28);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_32_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_63_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_63b_badSink(&local_10);
  return;
}


void goodB2G(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_63b_goodB2GSink(&local_10);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_63_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_65_bad(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_65b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_65b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_65_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_15_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_15_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_18_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_18_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_53c_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__long_realloc_53d_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_53c_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__long_realloc_53d_goodB2GSink(uParm1);
  return;
}


void badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  badSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  goodB2GSink(pvVar1,uParm2,pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_44_good(void)

{
  goodB2G();
  return;
}


void * badSource(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  return pvVar1;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_42_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)badSource(0);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void * goodB2GSource(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  return pvVar1;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)goodB2GSource(0);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_42_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_53b_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_calloc_53c_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_53b_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_calloc_53c_goodB2GSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_03_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_65_bad(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_65b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_65b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_65_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_68b_badSink(void)

{
  undefined4 *__ptr;
  
  __ptr = CWE690_NULL_Deref_From_Return__struct_calloc_68_badDataForBadSink;
  *CWE690_NULL_Deref_From_Return__struct_calloc_68_badDataForBadSink = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_68b_goodB2GSink(void)

{
  undefined4 *__ptr;
  
  __ptr = CWE690_NULL_Deref_From_Return__struct_calloc_68_badDataForGoodSink;
  if (CWE690_NULL_Deref_From_Return__struct_calloc_68_badDataForGoodSink != (undefined4 *)0x0) {
    *CWE690_NULL_Deref_From_Return__struct_calloc_68_badDataForGoodSink = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_63_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_63b_badSink(&local_10);
  return;
}


void goodB2G(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_63b_goodB2GSink(&local_10);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_63_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_54e_badSink(undefined8 *puParm1)

{
  *puParm1 = 5;
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_54e_goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 != (undefined8 *)0x0) {
    *puParm1 = 5;
    printLongLine(*puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_15_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_15_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_67b_badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_67b_goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_18_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_18_good(void)

{
  goodB2G();
  return;
}


void * badSource(void *pvParm1)

{
  void *pvVar1;
  
  pvVar1 = realloc(pvParm1,8);
  return pvVar1;
}


void CWE690_NULL_Deref_From_Return__long_realloc_42_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)badSource(0);
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void * goodB2GSource(void *pvParm1)

{
  void *pvVar1;
  
  pvVar1 = realloc(pvParm1,8);
  return pvVar1;
}


void goodB2G(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)goodB2GSource(0);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_42_good(void)

{
  goodB2G();
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_08_bad(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_08_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_05_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (staticTrue != 0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (staticFalse == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if ((staticTrue != 0) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_17_bad(void)

{
  undefined4 *__ptr;
  int local_c;
  
  __ptr = (undefined4 *)malloc(8);
  local_c = 0;
  while (local_c < 1) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
    local_c = local_c + 1;
  }
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  int local_c;
  
  __ptr = (undefined4 *)malloc(8);
  local_c = 0;
  while (local_c < 1) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_17_good(void)

{
  goodB2G();
  return;
}


void badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_41_bad(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  badSink(pvVar1);
  return;
}


void goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_41_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_12_bad(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_12_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_52c_badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_52c_goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_11_bad(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_02_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_34_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_34_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_34_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_34_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_66b_badSink(long lParm1)

{
  undefined4 *__ptr;
  
  __ptr = *(undefined4 **)(lParm1 + 0x10);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_66b_goodB2GSink(long lParm1)

{
  undefined4 *__ptr;
  
  __ptr = *(undefined4 **)(lParm1 + 0x10);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_05_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (staticTrue != 0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (staticFalse == 0) {
    if (__ptr != (undefined8 *)0x0) {
      *__ptr = 5;
      printLongLine(*__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if ((staticTrue != 0) && (__ptr != (undefined8 *)0x0)) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void badSink(undefined8 *puParm1)

{
  *puParm1 = 5;
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_41_bad(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  badSink(pvVar1);
  return;
}


void goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 != (undefined8 *)0x0) {
    *puParm1 = 5;
    printLongLine(*puParm1);
    free(puParm1);
  }
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_41_good(void)

{
  goodB2G();
  return;
}


void * CWE690_NULL_Deref_From_Return__struct_malloc_61b_badSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  return pvVar1;
}


void * CWE690_NULL_Deref_From_Return__struct_malloc_61b_goodB2GSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  return pvVar1;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_10_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (globalTrue != 0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (globalFalse == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if ((globalTrue != 0) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_17_bad(void)

{
  undefined4 *__ptr;
  int local_c;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  local_c = 0;
  while (local_c < 1) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
    local_c = local_c + 1;
  }
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  int local_c;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  local_c = 0;
  while (local_c < 1) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_17_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_52c_badSink(undefined8 *puParm1)

{
  *puParm1 = 5;
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_52c_goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 != (undefined8 *)0x0) {
    *puParm1 = 5;
    printLongLine(*puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_54e_badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_54e_goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_44_bad(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  badSink(pvVar1);
  return;
}


void goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_44_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_07_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (staticFive == 5) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (staticFive == 5) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if ((staticFive == 5) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_53_bad(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_53b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_53b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_53_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_54c_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_malloc_54d_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_54c_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_malloc_54d_goodB2GSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_11_bad(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_02_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_01_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_01_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_53d_badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_53d_goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_66b_badSink(long lParm1)

{
  undefined8 *__ptr;
  
  __ptr = *(undefined8 **)(lParm1 + 0x10);
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_66b_goodB2GSink(long lParm1)

{
  undefined8 *__ptr;
  
  __ptr = *(undefined8 **)(lParm1 + 0x10);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_66_bad(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_28 = realloc((void *)0x0,8);
  local_10 = local_28;
  CWE690_NULL_Deref_From_Return__long_realloc_66b_badSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_28 = realloc((void *)0x0,8);
  local_10 = local_28;
  CWE690_NULL_Deref_From_Return__long_realloc_66b_goodB2GSink(local_38);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_66_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_10_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (globalTrue != 0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (globalFalse == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if ((globalTrue != 0) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_51_bad(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_51b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_51b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_51_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_63b_badSink(undefined8 *puParm1)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)*puParm1;
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_63b_goodB2GSink(undefined8 *puParm1)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)*puParm1;
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_54_bad(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_54b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_54b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_54_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_06_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406dae) */

void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void * CWE690_NULL_Deref_From_Return__long_realloc_61b_badSource(void *pvParm1)

{
  void *pvVar1;
  
  pvVar1 = realloc(pvParm1,8);
  return pvVar1;
}


void * CWE690_NULL_Deref_From_Return__long_realloc_61b_goodB2GSource(void *pvParm1)

{
  void *pvVar1;
  
  pvVar1 = realloc(pvParm1,8);
  return pvVar1;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_31_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_31_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_68_bad(void)

{
  CWE690_NULL_Deref_From_Return__struct_malloc_68_badDataForBadSink = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_68b_badSink();
  return;
}


void goodB2G(void)

{
  CWE690_NULL_Deref_From_Return__struct_malloc_68_badDataForGoodSink = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_68b_goodB2GSink();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_68_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_53c_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_malloc_53d_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_53c_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_malloc_53d_goodB2GSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_65b_badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_65b_goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_54e_badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_54e_goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void badSink(void)

{
  undefined8 *__ptr;
  
  __ptr = CWE690_NULL_Deref_From_Return__long_realloc_45_badData;
  *CWE690_NULL_Deref_From_Return__long_realloc_45_badData = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_45_bad(void)

{
  CWE690_NULL_Deref_From_Return__long_realloc_45_badData = realloc((void *)0x0,8);
  badSink();
  return;
}


void goodB2GSink(void)

{
  undefined8 *__ptr;
  
  __ptr = CWE690_NULL_Deref_From_Return__long_realloc_45_goodB2GData;
  if (CWE690_NULL_Deref_From_Return__long_realloc_45_goodB2GData != (undefined8 *)0x0) {
    *CWE690_NULL_Deref_From_Return__long_realloc_45_goodB2GData = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G(void)

{
  CWE690_NULL_Deref_From_Return__long_realloc_45_goodB2GData = realloc((void *)0x0,8);
  goodB2GSink();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_45_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_65b_badSink(pvVar1,uParm2,pvVar1);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_65b_goodB2GSink(pvVar1,uParm2,pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_65_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_15_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_15_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_53c_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_realloc_53d_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_53c_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_realloc_53d_goodB2GSink(uParm1);
  return;
}


void * badSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  return pvVar1;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_42_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)badSource(0);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void * goodB2GSource(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  return pvVar1;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)goodB2GSource(0);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_42_good(void)

{
  goodB2G();
  return;
}


void badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_41_bad(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  badSink(pvVar1);
  return;
}


void goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_41_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_14_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (globalFive == 5) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (globalFive == 5) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if ((globalFive == 5) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_53d_badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_53d_goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE690_NULL_Deref_From_Return__struct_calloc_32_bad(void)

{
  void *local_30;
  undefined4 *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = calloc(1,8);
  *local_10 = local_20;
  local_28 = (undefined4 *)*local_18;
  *local_28 = 1;
  local_28[1] = 1;
  printStructLine(local_28);
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  void *local_30;
  undefined4 *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = calloc(1,8);
  *local_10 = local_20;
  local_28 = (undefined4 *)*local_18;
  if (local_28 != (undefined4 *)0x0) {
    *local_28 = 1;
    local_28[1] = 1;
    printStructLine(local_28);
    free(local_28);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_32_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_65_bad(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_65b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_65b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_65_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_64b_badSink(undefined8 *puParm1)

{
  puParm1 = (undefined8 *)*puParm1;
  *puParm1 = 5;
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_64b_goodB2GSink(undefined8 *puParm1)

{
  puParm1 = (undefined8 *)*puParm1;
  if (puParm1 != (undefined8 *)0x0) {
    *puParm1 = 5;
    printLongLine(*puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_15_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_15_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_51_bad(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_51b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_51b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_51_good(void)

{
  goodB2G();
  return;
}


void * badSource(void *pvParm1)

{
  void *pvVar1;
  
  pvVar1 = realloc(pvParm1,8);
  return pvVar1;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_42_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)badSource(0);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void * goodB2GSource(void *pvParm1)

{
  void *pvVar1;
  
  pvVar1 = realloc(pvParm1,8);
  return pvVar1;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)goodB2GSource(0);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_42_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_14_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (globalFive == 5) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (globalFive == 5) {
    if (__ptr != (undefined8 *)0x0) {
      *__ptr = 5;
      printLongLine(*__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if ((globalFive == 5) && (__ptr != (undefined8 *)0x0)) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_05_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (staticTrue != 0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (staticFalse == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if ((staticTrue != 0) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_53b_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_malloc_53c_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_53b_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_malloc_53c_goodB2GSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_54b_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_realloc_54c_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_54b_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_realloc_54c_goodB2GSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_04_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407ff1) */

void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_64b_badSink(undefined8 *puParm1)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)*puParm1;
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_64b_goodB2GSink(undefined8 *puParm1)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)*puParm1;
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_34_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_34_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_64_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_64b_badSink(&local_10);
  return;
}


void goodB2G(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_64b_goodB2GSink(&local_10);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_64_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_66b_badSink(long lParm1)

{
  undefined4 *__ptr;
  
  __ptr = *(undefined4 **)(lParm1 + 0x10);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_66b_goodB2GSink(long lParm1)

{
  undefined4 *__ptr;
  
  __ptr = *(undefined4 **)(lParm1 + 0x10);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_22_badSink(undefined4 *puParm1)

{
  if (CWE690_NULL_Deref_From_Return__struct_realloc_22_badGlobal != 0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_22_goodB2G1Sink(undefined4 *puParm1)

{
  if (CWE690_NULL_Deref_From_Return__struct_realloc_22_goodB2G1Global == 0) {
    if (puParm1 != (undefined4 *)0x0) {
      *puParm1 = 1;
      puParm1[1] = 1;
      printStructLine(puParm1);
      free(puParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_22_goodB2G2Sink(undefined4 *puParm1)

{
  if ((CWE690_NULL_Deref_From_Return__struct_realloc_22_goodB2G2Global != 0) &&
     (puParm1 != (undefined4 *)0x0)) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_54_bad(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_54b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_54b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_54_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_67_bad(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_67b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_67b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_67_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_05_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (staticTrue != 0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (staticFalse == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if ((staticTrue != 0) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_53b_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_realloc_53c_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_53b_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_realloc_53c_goodB2GSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_04_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408711) */

void goodB2G1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_31_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_31_good(void)

{
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE690_NULL_Deref_From_Return__long_realloc_32_bad(void)

{
  void *local_30;
  undefined8 *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = realloc((void *)0x0,8);
  *local_10 = local_20;
  local_28 = (undefined8 *)*local_18;
  *local_28 = 5;
  printLongLine(*local_28);
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  void *local_30;
  undefined8 *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = realloc((void *)0x0,8);
  *local_10 = local_20;
  local_28 = (undefined8 *)*local_18;
  if (local_28 != (undefined8 *)0x0) {
    *local_28 = 5;
    printLongLine(*local_28);
    free(local_28);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_32_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_66_bad(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_28 = malloc(8);
  local_10 = local_28;
  CWE690_NULL_Deref_From_Return__struct_malloc_66b_badSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_28 = malloc(8);
  local_10 = local_28;
  CWE690_NULL_Deref_From_Return__struct_malloc_66b_goodB2GSink(local_38);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_66_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_53_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_53b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_53b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_53_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_68_bad(void)

{
  CWE690_NULL_Deref_From_Return__struct_realloc_68_badDataForBadSink = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_68b_badSink();
  return;
}


void goodB2G(void)

{
  CWE690_NULL_Deref_From_Return__struct_realloc_68_badDataForGoodSink = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_68b_goodB2GSink();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_68_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_51_bad(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_51b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_51b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_51_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_34_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_34_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_52b_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_malloc_52c_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_52b_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_malloc_52c_goodB2GSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_67_bad(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_67b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_67b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_67_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_68b_badSink(void)

{
  undefined4 *__ptr;
  
  __ptr = CWE690_NULL_Deref_From_Return__struct_realloc_68_badDataForBadSink;
  *CWE690_NULL_Deref_From_Return__struct_realloc_68_badDataForBadSink = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_68b_goodB2GSink(void)

{
  undefined4 *__ptr;
  
  __ptr = CWE690_NULL_Deref_From_Return__struct_realloc_68_badDataForGoodSink;
  if (CWE690_NULL_Deref_From_Return__struct_realloc_68_badDataForGoodSink != (undefined4 *)0x0) {
    *CWE690_NULL_Deref_From_Return__struct_realloc_68_badDataForGoodSink = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_66b_badSink(long lParm1)

{
  undefined4 *__ptr;
  
  __ptr = *(undefined4 **)(lParm1 + 0x10);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_66b_goodB2GSink(long lParm1)

{
  undefined4 *__ptr;
  
  __ptr = *(undefined4 **)(lParm1 + 0x10);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_22_badSink(undefined8 *puParm1)

{
  if (CWE690_NULL_Deref_From_Return__long_realloc_22_badGlobal != 0) {
    *puParm1 = 5;
    printLongLine(*puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_22_goodB2G1Sink(undefined8 *puParm1)

{
  if (CWE690_NULL_Deref_From_Return__long_realloc_22_goodB2G1Global == 0) {
    if (puParm1 != (undefined8 *)0x0) {
      *puParm1 = 5;
      printLongLine(*puParm1);
      free(puParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_22_goodB2G2Sink(undefined8 *puParm1)

{
  if ((CWE690_NULL_Deref_From_Return__long_realloc_22_goodB2G2Global != 0) &&
     (puParm1 != (undefined8 *)0x0)) {
    *puParm1 = 5;
    printLongLine(*puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_61_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)CWE690_NULL_Deref_From_Return__struct_calloc_61b_badSource(0);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)CWE690_NULL_Deref_From_Return__struct_calloc_61b_goodB2GSource(0);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_61_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_22_bad(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_22_badGlobal = 1;
  CWE690_NULL_Deref_From_Return__struct_calloc_22_badSink(pvVar1);
  return;
}


void goodB2G1(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_22_goodB2G1Global = 0;
  CWE690_NULL_Deref_From_Return__struct_calloc_22_goodB2G1Sink(pvVar1);
  return;
}


void goodB2G2(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_22_goodB2G2Global = 1;
  CWE690_NULL_Deref_From_Return__struct_calloc_22_goodB2G2Sink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_09_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (GLOBAL_CONST_TRUE != 0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (GLOBAL_CONST_FALSE == 0) {
    if (__ptr != (undefined8 *)0x0) {
      *__ptr = 5;
      printLongLine(*__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if ((GLOBAL_CONST_TRUE != 0) && (__ptr != (undefined8 *)0x0)) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_54e_badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_54e_goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_66_bad(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_28 = realloc((void *)0x0,8);
  local_10 = local_28;
  CWE690_NULL_Deref_From_Return__struct_realloc_66b_badSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  void *local_28;
  void *local_10;
  
  local_10 = (void *)0x0;
  local_28 = realloc((void *)0x0,8);
  local_10 = local_28;
  CWE690_NULL_Deref_From_Return__struct_realloc_66b_goodB2GSink(local_38);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_66_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_54d_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_calloc_54e_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_54d_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_calloc_54e_goodB2GSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_31_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_31_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_22_bad(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_22_badGlobal = 1;
  CWE690_NULL_Deref_From_Return__long_realloc_22_badSink(pvVar1);
  return;
}


void goodB2G1(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_22_goodB2G1Global = 0;
  CWE690_NULL_Deref_From_Return__long_realloc_22_goodB2G1Sink(pvVar1);
  return;
}


void goodB2G2(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_22_goodB2G2Global = 1;
  CWE690_NULL_Deref_From_Return__long_realloc_22_goodB2G2Sink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_09_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (GLOBAL_CONST_TRUE != 0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (GLOBAL_CONST_FALSE == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if ((GLOBAL_CONST_TRUE != 0) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_13_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (GLOBAL_CONST_FIVE == 5) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (GLOBAL_CONST_FIVE == 5) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if ((GLOBAL_CONST_FIVE == 5) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_52b_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_realloc_52c_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_52b_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_realloc_52c_goodB2GSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_63b_badSink(undefined8 *puParm1)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)*puParm1;
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_63b_goodB2GSink(undefined8 *puParm1)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)*puParm1;
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_64_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_64b_badSink(&local_10);
  return;
}


void goodB2G(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_64b_goodB2GSink(&local_10);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_64_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_52_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_52b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_52b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_52_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_68_bad(void)

{
  CWE690_NULL_Deref_From_Return__struct_calloc_68_badDataForBadSink = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_68b_badSink();
  return;
}


void goodB2G(void)

{
  CWE690_NULL_Deref_From_Return__struct_calloc_68_badDataForGoodSink = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_68b_goodB2GSink();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_68_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_51b_badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_51b_goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_54d_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__long_realloc_54e_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_54d_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__long_realloc_54e_goodB2GSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_13_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (GLOBAL_CONST_FIVE == 5) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (GLOBAL_CONST_FIVE == 5) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if ((GLOBAL_CONST_FIVE == 5) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_16_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_16_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_18_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_18_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_13_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (GLOBAL_CONST_FIVE == 5) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (GLOBAL_CONST_FIVE == 5) {
    if (__ptr != (undefined8 *)0x0) {
      *__ptr = 5;
      printLongLine(*__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if ((GLOBAL_CONST_FIVE == 5) && (__ptr != (undefined8 *)0x0)) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_63b_badSink(undefined8 *puParm1)

{
  puParm1 = (undefined8 *)*puParm1;
  *puParm1 = 5;
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_63b_goodB2GSink(undefined8 *puParm1)

{
  puParm1 = (undefined8 *)*puParm1;
  if (puParm1 != (undefined8 *)0x0) {
    *puParm1 = 5;
    printLongLine(*puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_68b_badSink(void)

{
  undefined8 *__ptr;
  
  __ptr = CWE690_NULL_Deref_From_Return__long_realloc_68_badDataForBadSink;
  *CWE690_NULL_Deref_From_Return__long_realloc_68_badDataForBadSink = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_68b_goodB2GSink(void)

{
  undefined8 *__ptr;
  
  __ptr = CWE690_NULL_Deref_From_Return__long_realloc_68_badDataForGoodSink;
  if (CWE690_NULL_Deref_From_Return__long_realloc_68_badDataForGoodSink != (undefined8 *)0x0) {
    *CWE690_NULL_Deref_From_Return__long_realloc_68_badDataForGoodSink = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_52_bad(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_52b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_52b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_52_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_03_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_54b_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_calloc_54c_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_54b_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_calloc_54c_goodB2GSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_51b_badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_51b_goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_51_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_51b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_51b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_51_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_16_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_16_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_22_badSink(undefined4 *puParm1)

{
  if (CWE690_NULL_Deref_From_Return__struct_calloc_22_badGlobal != 0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_22_goodB2G1Sink(undefined4 *puParm1)

{
  if (CWE690_NULL_Deref_From_Return__struct_calloc_22_goodB2G1Global == 0) {
    if (puParm1 != (undefined4 *)0x0) {
      *puParm1 = 1;
      puParm1[1] = 1;
      printStructLine(puParm1);
      free(puParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_22_goodB2G2Sink(undefined4 *puParm1)

{
  if ((CWE690_NULL_Deref_From_Return__struct_calloc_22_goodB2G2Global != 0) &&
     (puParm1 != (undefined4 *)0x0)) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_64b_badSink(undefined8 *puParm1)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)*puParm1;
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_64b_goodB2GSink(undefined8 *puParm1)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)*puParm1;
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE690_NULL_Deref_From_Return__long_realloc_08_bad(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (__ptr != (undefined8 *)0x0) {
      *__ptr = 5;
      printLongLine(*__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (__ptr != (undefined8 *)0x0)) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_08_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_67b_badSink(undefined8 *puParm1)

{
  *puParm1 = 5;
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_67b_goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 != (undefined8 *)0x0) {
    *puParm1 = 5;
    printLongLine(*puParm1);
    free(puParm1);
  }
  return;
}


void badSink(undefined8 *puParm1)

{
  if (badStatic != 0) {
    *puParm1 = 5;
    printLongLine(*puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_21_bad(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  badStatic = 1;
  badSink(pvVar1);
  return;
}


void goodB2G1Sink(undefined8 *puParm1)

{
  if (goodB2G1Static == 0) {
    if (puParm1 != (undefined8 *)0x0) {
      *puParm1 = 5;
      printLongLine(*puParm1);
      free(puParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  goodB2G1Static = 0;
  goodB2G1Sink(pvVar1);
  return;
}


void goodB2G2Sink(undefined8 *puParm1)

{
  if ((goodB2G2Static != 0) && (puParm1 != (undefined8 *)0x0)) {
    *puParm1 = 5;
    printLongLine(*puParm1);
    free(puParm1);
  }
  return;
}


void goodB2G2(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  goodB2G2Static = 1;
  goodB2G2Sink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_03_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_63_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_63b_badSink(&local_10);
  return;
}


void goodB2G(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_63b_goodB2GSink(&local_10);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_63_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_12_bad(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_12_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_12_bad(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (__ptr != (undefined8 *)0x0) {
      *__ptr = 5;
      printLongLine(*__ptr);
      free(__ptr);
    }
  }
  else {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (__ptr != (undefined8 *)0x0) {
      *__ptr = 5;
      printLongLine(*__ptr);
      free(__ptr);
    }
  }
  else {
    if (__ptr != (undefined8 *)0x0) {
      *__ptr = 5;
      printLongLine(*__ptr);
      free(__ptr);
    }
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_12_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_06_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040abe8) */

void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_18_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_18_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_31_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_31_good(void)

{
  goodB2G();
  return;
}


void badSink(undefined4 *puParm1)

{
  if (badStatic != 0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_21_bad(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  badStatic = 1;
  badSink(pvVar1);
  return;
}


void goodB2G1Sink(undefined4 *puParm1)

{
  if (goodB2G1Static == 0) {
    if (puParm1 != (undefined4 *)0x0) {
      *puParm1 = 1;
      puParm1[1] = 1;
      printStructLine(puParm1);
      free(puParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  goodB2G1Static = 0;
  goodB2G1Sink(pvVar1);
  return;
}


void goodB2G2Sink(undefined4 *puParm1)

{
  if ((goodB2G2Static != 0) && (puParm1 != (undefined4 *)0x0)) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void goodB2G2(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  goodB2G2Static = 1;
  goodB2G2Sink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_17_bad(void)

{
  undefined4 *__ptr;
  int local_c;
  
  __ptr = (undefined4 *)calloc(1,8);
  local_c = 0;
  while (local_c < 1) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
    local_c = local_c + 1;
  }
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  int local_c;
  
  __ptr = (undefined4 *)calloc(1,8);
  local_c = 0;
  while (local_c < 1) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_17_good(void)

{
  goodB2G();
  return;
}


void badSink(void)

{
  undefined4 *__ptr;
  
  __ptr = CWE690_NULL_Deref_From_Return__struct_realloc_45_badData;
  *CWE690_NULL_Deref_From_Return__struct_realloc_45_badData = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_45_bad(void)

{
  CWE690_NULL_Deref_From_Return__struct_realloc_45_badData = realloc((void *)0x0,8);
  badSink();
  return;
}


void goodB2GSink(void)

{
  undefined4 *__ptr;
  
  __ptr = CWE690_NULL_Deref_From_Return__struct_realloc_45_goodB2GData;
  if (CWE690_NULL_Deref_From_Return__struct_realloc_45_goodB2GData != (undefined4 *)0x0) {
    *CWE690_NULL_Deref_From_Return__struct_realloc_45_goodB2GData = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G(void)

{
  CWE690_NULL_Deref_From_Return__struct_realloc_45_goodB2GData = realloc((void *)0x0,8);
  goodB2GSink();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_45_good(void)

{
  goodB2G();
  return;
}


void badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_44_bad(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  badSink(pvVar1);
  return;
}


void goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_44_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_06_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b36a) */

void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_11_bad(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_02_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_17_bad(void)

{
  undefined8 *__ptr;
  int local_c;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  local_c = 0;
  while (local_c < 1) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
    local_c = local_c + 1;
  }
  return;
}


void goodB2G(void)

{
  undefined8 *__ptr;
  int local_c;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  local_c = 0;
  while (local_c < 1) {
    if (__ptr != (undefined8 *)0x0) {
      *__ptr = 5;
      printLongLine(*__ptr);
      free(__ptr);
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_17_good(void)

{
  goodB2G();
  return;
}


void * CWE690_NULL_Deref_From_Return__struct_calloc_61b_badSource(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  return pvVar1;
}


void * CWE690_NULL_Deref_From_Return__struct_calloc_61b_goodB2GSource(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,8);
  return pvVar1;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_10_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (globalTrue != 0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (globalFalse == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if ((globalTrue != 0) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_14_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (globalFive == 5) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (globalFive == 5) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if ((globalFive == 5) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void badSink(undefined8 *puParm1)

{
  *puParm1 = 5;
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_44_bad(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  badSink(pvVar1);
  return;
}


void goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 != (undefined8 *)0x0) {
    *puParm1 = 5;
    printLongLine(*puParm1);
    free(puParm1);
  }
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_44_good(void)

{
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE690_NULL_Deref_From_Return__struct_malloc_32_bad(void)

{
  void *local_30;
  undefined4 *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = malloc(8);
  *local_10 = local_20;
  local_28 = (undefined4 *)*local_18;
  *local_28 = 1;
  local_28[1] = 1;
  printStructLine(local_28);
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  void *local_30;
  undefined4 *local_28;
  void *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (void *)0x0;
  local_20 = malloc(8);
  *local_10 = local_20;
  local_28 = (undefined4 *)*local_18;
  if (local_28 != (undefined4 *)0x0) {
    *local_28 = 1;
    local_28[1] = 1;
    printStructLine(local_28);
    free(local_28);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_32_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_11_bad(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (__ptr != (undefined8 *)0x0) {
      *__ptr = 5;
      printLongLine(*__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  iVar1 = globalReturnsTrue();
  if ((iVar1 != 0) && (__ptr != (undefined8 *)0x0)) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_02_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodB2G1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_68_bad(void)

{
  CWE690_NULL_Deref_From_Return__long_realloc_68_badDataForBadSink = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_68b_badSink();
  return;
}


void goodB2G(void)

{
  CWE690_NULL_Deref_From_Return__long_realloc_68_badDataForGoodSink = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__long_realloc_68b_goodB2GSink();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_68_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_54c_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_calloc_54d_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_54c_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_calloc_54d_goodB2GSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_01_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_01_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_64_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_64b_badSink(&local_10);
  return;
}


void goodB2G(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = calloc(1,8);
  CWE690_NULL_Deref_From_Return__struct_calloc_64b_goodB2GSink(&local_10);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_64_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_64_bad(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_64b_badSink(&local_10);
  return;
}


void goodB2G(void)

{
  void *local_10;
  
  local_10 = (void *)0x0;
  local_10 = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_64b_goodB2GSink(&local_10);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_64_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_14_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (globalFive == 5) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if (globalFive == 5) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,8);
  if ((globalFive == 5) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_54c_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__long_realloc_54d_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_54c_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__long_realloc_54d_goodB2GSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_04_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  *__ptr = 1;
  __ptr[1] = 1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c2f3) */

void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_01_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_01_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_53d_badSink(undefined8 *puParm1)

{
  *puParm1 = 5;
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_53d_goodB2GSink(undefined8 *puParm1)

{
  if (puParm1 != (undefined8 *)0x0) {
    *puParm1 = 5;
    printLongLine(*puParm1);
    free(puParm1);
  }
  return;
}


void badSink(undefined4 *puParm1)

{
  *puParm1 = 1;
  puParm1[1] = 1;
  printStructLine(puParm1);
  free(puParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_41_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  badSink(pvVar1);
  return;
}


void goodB2GSink(undefined4 *puParm1)

{
  if (puParm1 != (undefined4 *)0x0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_41_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_09_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (GLOBAL_CONST_TRUE != 0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if (GLOBAL_CONST_FALSE == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  if ((GLOBAL_CONST_TRUE != 0) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_53c_badSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_calloc_53d_badSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_53c_goodB2GSink(undefined8 uParm1)

{
  CWE690_NULL_Deref_From_Return__struct_calloc_53d_goodB2GSink(uParm1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_67_bad(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_67b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = malloc(8);
  CWE690_NULL_Deref_From_Return__struct_malloc_67b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_67_good(void)

{
  goodB2G();
  return;
}


undefined8 staticReturnsTrue(void)

{
  return 1;
}


undefined8 staticReturnsFalse(void)

{
  return 0;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_08_bad(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (__ptr != (undefined4 *)0x0) {
      *__ptr = 1;
      __ptr[1] = 1;
      printStructLine(__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(1,8);
  iVar1 = staticReturnsTrue();
  if ((iVar1 != 0) && (__ptr != (undefined4 *)0x0)) {
    *__ptr = 1;
    __ptr[1] = 1;
    printStructLine(__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_calloc_08_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_61_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)CWE690_NULL_Deref_From_Return__long_realloc_61b_badSource(0);
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodB2G(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)CWE690_NULL_Deref_From_Return__long_realloc_61b_goodB2GSource(0);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_61_good(void)

{
  goodB2G();
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_06_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ca3c) */

void goodB2G1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_22_badSink(undefined4 *puParm1)

{
  if (CWE690_NULL_Deref_From_Return__struct_malloc_22_badGlobal != 0) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_22_goodB2G1Sink(undefined4 *puParm1)

{
  if (CWE690_NULL_Deref_From_Return__struct_malloc_22_goodB2G1Global == 0) {
    if (puParm1 != (undefined4 *)0x0) {
      *puParm1 = 1;
      puParm1[1] = 1;
      printStructLine(puParm1);
      free(puParm1);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE690_NULL_Deref_From_Return__struct_malloc_22_goodB2G2Sink(undefined4 *puParm1)

{
  if ((CWE690_NULL_Deref_From_Return__struct_malloc_22_goodB2G2Global != 0) &&
     (puParm1 != (undefined4 *)0x0)) {
    *puParm1 = 1;
    puParm1[1] = 1;
    printStructLine(puParm1);
    free(puParm1);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_07_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (staticFive == 5) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void goodB2G1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if (staticFive == 5) {
    if (__ptr != (undefined8 *)0x0) {
      *__ptr = 5;
      printLongLine(*__ptr);
      free(__ptr);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)realloc((void *)0x0,8);
  if ((staticFive == 5) && (__ptr != (undefined8 *)0x0)) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE690_NULL_Deref_From_Return__long_realloc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_67_bad(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_67b_badSink(pvVar1);
  return;
}


void goodB2G(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,8);
  CWE690_NULL_Deref_From_Return__struct_realloc_67b_goodB2GSink(pvVar1);
  return;
}


void CWE690_NULL_Deref_From_Return__struct_realloc_67_good(void)

{
  goodB2G();
  return;
}


void printLine(char *pcParm1)

{
  if (pcParm1 != (char *)0x0) {
    puts(pcParm1);
  }
  return;
}


void printWLine(long lParm1)

{
  if (lParm1 != 0) {
    wprintf(L"%ls\n",lParm1);
  }
  return;
}


void printIntLine(uint uParm1)

{
  printf("%d\n",(ulong)uParm1);
  return;
}


void printShortLine(short sParm1)

{
  printf("%hd\n",(ulong)(uint)(int)sParm1);
  return;
}


void printFloatLine(float fParm1)

{
  printf((char *)(double)fParm1,&DAT_00412639);
  return;
}


void printLongLine(undefined8 uParm1)

{
  printf("%ld\n",uParm1);
  return;
}


void printLongLongLine(undefined8 uParm1)

{
  printf("%ld\n",uParm1);
  return;
}


void printSizeTLine(undefined8 uParm1)

{
  printf("%zu\n",uParm1);
  return;
}


void printHexCharLine(char cParm1)

{
  printf("%02x\n",(ulong)(uint)(int)cParm1);
  return;
}


void printWcharLine(undefined4 uParm1)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  local_18 = uParm1;
  printf("%ls\n",&local_18);
  return;
}


void printUnsignedLine(uint uParm1)

{
  printf("%u\n",(ulong)uParm1);
  return;
}


void printHexUnsignedCharLine(byte bParm1)

{
  printf("%02x\n",(ulong)bParm1);
  return;
}


void printDoubleLine(char *pcParm1)

{
  printf(pcParm1,&DAT_00412656);
  return;
}


void printStructLine(uint *puParm1)

{
  printf("%d -- %d\n",(ulong)*puParm1,(ulong)puParm1[1]);
  return;
}


void printBytesLine(long lParm1,ulong uParm2)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < uParm2) {
    printf("%02x",(ulong)*(byte *)(local_10 + lParm1));
    local_10 = local_10 + 1;
  }
  puts("");
  return;
}


ulong decodeHexChars(long lParm1,ulong uParm2,long lParm3)

{
  long lVar1;
  ushort **ppuVar2;
  undefined4 local_14;
  ulong local_10;
  
  local_10 = 0;
  while( true ) {
    if (uParm2 <= local_10) {
      return local_10;
    }
    ppuVar2 = __ctype_b_loc();
    if (((*ppuVar2)[(long)*(char *)(lParm3 + local_10 * 2)] & 0x1000) == 0) break;
    ppuVar2 = __ctype_b_loc();
    if (((*ppuVar2)[(long)*(char *)(lParm3 + local_10 * 2 + 1)] & 0x1000) == 0) {
      return local_10;
    }
    lVar1 = local_10 * 2 + lParm3;
    __isoc99_sscanf(lVar1,&DAT_00412664,&local_14,lVar1);
    *(undefined *)(lParm1 + local_10) = (char)local_14;
    local_10 = local_10 + 1;
  }
  return local_10;
}


ulong decodeHexWChars(long lParm1,ulong uParm2,long lParm3)

{
  int iVar1;
  undefined4 local_14;
  ulong local_10;
  
  local_10 = 0;
  while( true ) {
    if (uParm2 <= local_10) {
      return local_10;
    }
    iVar1 = iswxdigit(*(wint_t *)(lParm3 + local_10 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(lParm3 + local_10 * 8 + 4));
    if (iVar1 == 0) {
      return local_10;
    }
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_0041266c,&local_14);
    *(undefined *)(lParm1 + local_10) = (char)local_14;
    local_10 = local_10 + 1;
  }
  return local_10;
}


undefined8 globalReturnsTrue(void)

{
  return 1;
}


undefined8 globalReturnsFalse(void)

{
  return 0;
}


ulong globalReturnsTrueOrFalse(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = rand();
  uVar2 = (uint)(iVar1 >> 0x1f) >> 0x1f;
  return (ulong)((iVar1 + uVar2 & 1) - uVar2);
}


void good1(void)

{
  return;
}


void good2(void)

{
  return;
}


void good3(void)

{
  return;
}


void good4(void)

{
  return;
}


void good5(void)

{
  return;
}


void good6(void)

{
  return;
}


void good7(void)

{
  return;
}


void good8(void)

{
  return;
}


void good9(void)

{
  return;
}


void bad1(void)

{
  return;
}


void bad2(void)

{
  return;
}


void bad3(void)

{
  return;
}


void bad4(void)

{
  return;
}


void bad5(void)

{
  return;
}


void bad6(void)

{
  return;
}


void bad7(void)

{
  return;
}


void bad8(void)

{
  return;
}


void bad9(void)

{
  return;
}


void internal_start(long lParm1,undefined8 uParm2)

{
  (**(code **)(lParm1 + 8))(*(undefined8 *)(lParm1 + 0x10),uParm2,*(undefined8 *)(lParm1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}


undefined8 stdThreadCreate(pthread_t pParm1,pthread_t pParm2,pthread_t **pppParm3)

{
  int iVar1;
  undefined8 uVar2;
  pthread_t local_18;
  pthread_t *local_10;
  
  *pppParm3 = (pthread_t *)0x0;
  local_10 = (pthread_t *)malloc(0x18);
  if (local_10 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_10[1] = pParm1;
    local_10[2] = pParm2;
    iVar1 = pthread_create(&local_18,(pthread_attr_t *)0x0,internal_start,local_10);
    if (iVar1 == 0) {
      *local_10 = local_18;
      *pppParm3 = local_10;
      uVar2 = 1;
    }
    else {
      free(local_10);
      uVar2 = 0;
    }
  }
  return uVar2;
}


ulong stdThreadJoin(pthread_t *ppParm1)

{
  int iVar1;
  void *local_10;
  
  iVar1 = pthread_join(*ppParm1,&local_10);
  return (ulong)(iVar1 == 0);
}


undefined8 stdThreadDestroy(void *pvParm1)

{
  free(pvParm1);
  return 1;
}


undefined8 stdThreadLockCreate(pthread_mutex_t **ppabParm1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *ppabParm1 = (pthread_mutex_t *)0x0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *ppabParm1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(ppabParm1);
      uVar2 = 0;
    }
  }
  return uVar2;
}


void stdThreadLockAcquire(pthread_mutex_t *pabParm1)

{
  pthread_mutex_lock(pabParm1);
  return;
}


void stdThreadLockRelease(pthread_mutex_t *pabParm1)

{
  pthread_mutex_unlock(pabParm1);
  return;
}


void stdThreadLockDestroy(pthread_mutex_t *pabParm1)

{
  pthread_mutex_destroy(pabParm1);
  free(pabParm1);
  return;
}


void __libc_csu_init(EVP_PKEY_CTX *pEParm1,undefined8 uParm2,undefined8 uParm3)

{
  long lVar1;
  
  lVar1 = 0;
  _init(pEParm1);
  do {
    (*(code *)(&__frame_dummy_init_array_entry)[lVar1])((ulong)pEParm1 & 0xffffffff,uParm2,uParm3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}


void __libc_csu_fini(void)

{
  return;
}


void _fini(void)

{
  return;
}

