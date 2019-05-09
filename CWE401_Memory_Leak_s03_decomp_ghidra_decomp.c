
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00637ff8;
  if (PTR___gmon_start___00637ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400970(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00638010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00638018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00638020)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00638028)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00638030)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00638038)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00638040)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00638048)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00638050)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00638058)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00638060)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_00638068)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00638070)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_00638078)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_00638080)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_00638088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_00638090)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * calloc(size_t __nmemb,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_calloc_00638098)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_006380a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_realloc_006380a8)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_006380b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_006380b8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_006380c0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_006380c8)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___00637ff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400b47) */
/* WARNING: Removing unreachable block (ram,0x00400b51) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400b84) */
/* WARNING: Removing unreachable block (ram,0x00400b8e) */

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


/* WARNING: Removing unreachable block (ram,0x00400bd4) */
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
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_32_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_32_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_64_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_64_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_32_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_32_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_17_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_17_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_65_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_65_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_68_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_68_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_42_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_42_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_63_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_63_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_02_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_02_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_45_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_45_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_45_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_45_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_22_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_22_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_07_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_07_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_12_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_12_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_45_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_45_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_18_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_18_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_12_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_12_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_02_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_02_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_04_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_04_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_44_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_44_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_68_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_68_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_03_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_03_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_13_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_13_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_08_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_08_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_34_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_34_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_61_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_61_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_15_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_15_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_52_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_52_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_01_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_01_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_03_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_03_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_65_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_65_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_61_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_61_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_03_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_03_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_54_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_54_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_64_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_64_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_61_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_61_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_05_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_05_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_01_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_01_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_08_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_08_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_22_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_22_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_05_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_05_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_04_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_04_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_03_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_03_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_10_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_10_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_61_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_61_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_09_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_09_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_02_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_02_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_68_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_68_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_64_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_64_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_03_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_03_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_51_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_51_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_14_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_14_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_22_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_22_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_44_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_44_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_06_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_06_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_67_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_67_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_53_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_53_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_12_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_12_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_32_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_32_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_52_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_52_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_45_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_45_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_65_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_65_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_18_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_18_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_52_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_52_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_13_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_13_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_65_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_65_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_07_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_07_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_41_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_41_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_10_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_10_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_44_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_44_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_11_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_11_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_05_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_05_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_04_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_04_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_45_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_45_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_14_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_14_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_13_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_13_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_01_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_01_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_08_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_08_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_08_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_08_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_06_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_06_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_31_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_31_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_10_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_10_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_22_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_22_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_10_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_10_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_16_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_16_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_17_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_17_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_10_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_10_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_03_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_03_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_18_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_18_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_41_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_41_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_42_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_42_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_44_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_44_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_66_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_66_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_31_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_31_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_63_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_63_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_66_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_66_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_15_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_15_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_41_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_41_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_63_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_63_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_32_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_32_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_11_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_11_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_31_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_31_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_16_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_16_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_66_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_66_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_07_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_07_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_15_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_15_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_65_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_65_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_61_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_61_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_16_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_16_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_68_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_68_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_66_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_66_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_63_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_63_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_09_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_09_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_42_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_42_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_16_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_16_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_06_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_06_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_18_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_18_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_42_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_42_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_42_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_42_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_17_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_17_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_15_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_15_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_12_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_12_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_16_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_16_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_04_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_04_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_21_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_21_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_05_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_05_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_11_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_11_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_34_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_34_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_21_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_21_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_64_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_64_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_15_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_15_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_04_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_04_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_61_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_61_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_07_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_07_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_66_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_66_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_09_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_09_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_15_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_15_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_02_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_02_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_32_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_32_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_67_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_67_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_54_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_54_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_09_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_09_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_08_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_08_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_52_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_52_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_67_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_67_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_34_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_34_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_06_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_06_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_42_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_42_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_68_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_68_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_04_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_04_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_13_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_13_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_22_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_22_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_34_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_34_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_13_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_13_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_67_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_67_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_63_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_63_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_21_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_21_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_01_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_01_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_65_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_65_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_41_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_41_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_05_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_05_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_18_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_18_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_06_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_06_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_41_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_41_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_09_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_09_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_08_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_08_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_16_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_16_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_34_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_34_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_34_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_34_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_02_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_02_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_41_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_41_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_07_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_07_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_12_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_12_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_12_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_12_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_66_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_66_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_17_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_17_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_07_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_07_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_31_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_31_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_51_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_51_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_21_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_21_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_05_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_05_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_01_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_01_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_51_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_51_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_44_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_44_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_11_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_11_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_53_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_53_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_01_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_01_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_13_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_13_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_51_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_51_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_51_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_51_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_17_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_17_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_17_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_17_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_11_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_11_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_14_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_14_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_52_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_52_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_10_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_10_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_09_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_09_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_51_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_51_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_63_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_63_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_54_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_54_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_31_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_31_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_44_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_44_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_53_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_53_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_21_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_21_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_64_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_64_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_02_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_02_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_32_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_32_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_64_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_64_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_06_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_06_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_14_good();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_14_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_11_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_11_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_21_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_21_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_18_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_18_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_45_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_45_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_14_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_14_good();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_31_good();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_31_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_14_good();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_14_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_68_good();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_68_good();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_32_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_32_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_64_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_64_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_32_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_32_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_17_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_17_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_65_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_65_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_68_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_68_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_42_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_42_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_63_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_63_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_02_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_02_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_45_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_45_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_45_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_45_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_22_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_22_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_07_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_07_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_12_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_12_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_45_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_45_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_18_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_18_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_12_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_12_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_02_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_02_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_04_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_04_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_44_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_44_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_68_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_68_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_03_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_03_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_13_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_13_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_08_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_08_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_34_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_34_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_61_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_61_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_15_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_15_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_52_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_52_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_01_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_01_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_03_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_03_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_65_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_65_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_61_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_61_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_03_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_03_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_54_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_54_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_64_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_64_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_61_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_61_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_05_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_05_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_01_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_01_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_08_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_08_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_22_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_22_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_05_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_05_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_04_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_04_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_03_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_03_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_10_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_10_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_61_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_61_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_09_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_09_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_02_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_02_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_68_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_68_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_64_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_64_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_03_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_03_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_51_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_51_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_14_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_14_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_22_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_22_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_44_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_44_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_06_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_06_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_67_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_67_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_53_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_53_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_12_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_12_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_32_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_32_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_52_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_52_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_45_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_45_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_65_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_65_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_18_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_18_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_52_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_52_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_13_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_13_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_65_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_65_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_07_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_07_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_41_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_41_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_10_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_10_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_44_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_44_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_11_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_11_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_05_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_05_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_04_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_04_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_45_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_45_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_14_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_14_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_13_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_13_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_01_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_01_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_08_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_08_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_08_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_08_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_06_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_06_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_31_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_31_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_10_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_10_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_22_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_22_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_10_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_10_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_16_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_16_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_17_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_17_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_10_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_10_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_03_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_03_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_18_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_18_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_41_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_41_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_42_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_42_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_44_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_44_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_66_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_66_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_31_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_31_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_63_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_63_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_66_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_66_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_15_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_15_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_41_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_41_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_63_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_63_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_32_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_32_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_11_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_11_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_31_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_31_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_16_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_16_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_66_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_66_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_07_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_07_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_15_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_15_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_65_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_65_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_61_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_61_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_16_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_16_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_68_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_68_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_66_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_66_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_63_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_63_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_09_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_09_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_42_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_42_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_16_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_16_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_06_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_06_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_18_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_18_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_42_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_42_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_42_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_42_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_17_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_17_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_15_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_15_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_12_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_12_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_16_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_16_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_04_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_04_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_21_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_21_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_05_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_05_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_11_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_11_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_34_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_34_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_21_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_21_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_64_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_64_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_15_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_15_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_04_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_04_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_61_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_61_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_07_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_07_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_66_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_66_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_09_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_09_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_15_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_15_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_02_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_02_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_32_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_32_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_67_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_67_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_54_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_54_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_09_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_09_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_08_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_08_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_52_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_52_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_67_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_67_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_34_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_34_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_06_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_06_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_42_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_42_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_68_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_68_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_04_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_04_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_13_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_13_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_22_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_22_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_34_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_34_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_13_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_13_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_67_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_67_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_63_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_63_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_21_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_21_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_01_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_01_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_65_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_65_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_41_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_41_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_05_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_05_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_18_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_18_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_06_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_06_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_41_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_41_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_09_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_09_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_08_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_08_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_16_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_16_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_34_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_34_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_34_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_34_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_02_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_02_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_41_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_41_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_07_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_07_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_12_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_12_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_12_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_12_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_66_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_66_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_17_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_17_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_07_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_07_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_31_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_31_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_51_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_51_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_21_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_21_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_05_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_05_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_01_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_01_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_51_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_51_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_44_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_44_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_11_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_11_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_53_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_53_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_01_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_01_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_13_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_13_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_51_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_51_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_51_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_51_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_17_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_17_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_17_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_17_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_11_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_11_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_14_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_14_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_52_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_52_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_10_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_10_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_09_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_09_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_51_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_51_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_63_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_63_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_54_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_54_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_31_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_31_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_44_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_44_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_53_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_53_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_21_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_21_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_64_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_64_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_02_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_02_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_32_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_32_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_64_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_64_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_06_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_06_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_malloc_14_bad();");
  CWE401_Memory_Leak__twoIntsStruct_malloc_14_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_11_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_11_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_21_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_21_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_18_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_18_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_45_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_45_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_malloc_14_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_14_bad();
  printLine("Calling CWE401_Memory_Leak__struct_twoIntsStruct_calloc_31_bad();");
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_31_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_realloc_14_bad();");
  CWE401_Memory_Leak__twoIntsStruct_realloc_14_bad();
  printLine("Calling CWE401_Memory_Leak__twoIntsStruct_calloc_68_bad();");
  CWE401_Memory_Leak__twoIntsStruct_calloc_68_bad();
  return 0;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_21_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  badStatic = 1;
  badSink(puVar1);
  return;
}


void goodB2G1Sink(void *pvParm1)

{
  if (goodB2G1Static == 0) {
    free(pvParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2G1Static = 0;
  goodB2G1Sink(puVar1);
  return;
}


void goodB2G2Sink(void *pvParm1)

{
  if (goodB2G2Static != 0) {
    free(pvParm1);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2G2Static = 1;
  goodB2G2Sink(puVar1);
  return;
}


void goodG2BSink(void)

{
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4031de;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  goodG2BStatic = 1;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4031f4;
  goodG2BSink(local_10);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_03_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40339e;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x403407;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_51b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_51b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_51b_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


undefined4 * CWE401_Memory_Leak__struct_twoIntsStruct_realloc_61b_badSource(void *pvParm1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc(pvParm1,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


/* WARNING: Type propagation algorithm not settling */

undefined8 *
CWE401_Memory_Leak__struct_twoIntsStruct_realloc_61b_goodG2BSource
          (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined8 local_20;
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_20 + lVar2 * -0x10 + 4) = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x403521;
  local_20 = uParm1;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return local_10;
}


undefined4 * CWE401_Memory_Leak__struct_twoIntsStruct_realloc_61b_goodB2GSource(void *pvParm1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc(pvParm1,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_10_bad(void)

{
  undefined4 *puVar1;
  
  if (globalTrue != 0) {
    puVar1 = (undefined4 *)realloc((void *)0x0,800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalFalse == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFalse == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40375e;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x403705;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (globalTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4037d1;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_16_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40392a;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54e_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54e_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54e_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_18_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x403a9c;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_66_bad(void)

{
  undefined local_38 [16];
  undefined4 *local_28;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)calloc(100,8);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  local_28 = local_10;
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_66b_badSink(local_38);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack64;
  undefined local_38 [8];
  undefined4 auStack48 [2];
  undefined4 *local_28;
  undefined4 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = auStack48 + lVar2 * 0x3ffffffffffffffc;
  *local_10 = 0;
  auStack48[lVar2 * 0x3ffffffffffffffc + 1] = 0;
  (&uStack64)[lVar2 * 0x1ffffffffffffffe] = 0x403b8b;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  local_28 = local_10;
  (&uStack64)[lVar2 * 0x1ffffffffffffffe] = 0x403b9f;
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  undefined4 *local_28;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)calloc(100,8);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  local_28 = local_10;
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_66b_goodB2GSink(local_38);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_61_bad(void)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_61b_badSource(0);
  return;
}


void goodG2B(void)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_61b_goodG2BSource(0);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = (void *)CWE401_Memory_Leak__struct_twoIntsStruct_malloc_61b_goodB2GSource(0);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_01_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x403d72;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53d_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53d_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53d_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_45_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_malloc_45_badData = puVar1;
  badSink();
  return;
}


void goodG2BSink(void)

{
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x403f11;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  CWE401_Memory_Leak__twoIntsStruct_malloc_45_goodG2BData = local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x403f26;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  free(CWE401_Memory_Leak__twoIntsStruct_malloc_45_goodB2GData);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_malloc_45_goodB2GData = puVar1;
  goodB2GSink();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_45_good(void)

{
  goodG2B();
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


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_08_bad(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)malloc(800);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    printStructLine(puVar2);
  }
  staticReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x404164;
  iVar2 = staticReturnsFalse();
  if (iVar2 == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x4041cb;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    uStack32 = 0x404172;
    printLine("Benign, fixed string");
  }
  *(undefined8 *)(puVar4 + -8) = 0x4041d5;
  staticReturnsTrue();
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x4041f1;
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40424c;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  *(undefined8 *)(puVar4 + -8) = 0x404256;
  staticReturnsTrue();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar3 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x4042a0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
    puVar3 = auStack24 + lVar2 * -0x10;
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x404342;
    printStructLine(local_10);
  }
  else {
    uStack32 = 0x4042b3;
    local_10 = (undefined8 *)calloc(100,8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      uStack32 = 0x4042c8;
      exit(-1);
    }
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)local_10 + 4) = 0;
    uStack32 = 0x4042e9;
    printStructLine(local_10);
  }
  *(undefined8 *)(puVar3 + -8) = 0x40434c;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    *(undefined8 *)(puVar3 + -8) = 0x40435c;
    free(local_10,puVar3[-8]);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  undefined4 *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  else {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    free(local_10);
  }
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x40444c;
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x404500;
    printStructLine(local_10,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x4044a7;
    printStructLine(local_10);
  }
  *(undefined8 *)(puVar4 + -8) = 0x40450a;
  globalReturnsTrueOrFalse();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_06_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x004045e6) */

void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040468c) */
/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4046ef;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x404762;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_14_bad(void)

{
  undefined4 *puVar1;
  
  if (globalFive == 5) {
    puVar1 = (undefined4 *)calloc(100,8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalFive == 5) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x404970;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x404917;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4049e4;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_51_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_realloc_51b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x404ae0;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x404aec;
  CWE401_Memory_Leak__twoIntsStruct_realloc_51b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_realloc_51b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53d_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53d_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53d_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_15_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x404d2b;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x404d96;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_61_bad(void)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_61b_badSource(0);
  return;
}


void goodG2B(void)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_61b_goodG2BSource(0);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = (void *)CWE401_Memory_Leak__struct_twoIntsStruct_realloc_61b_goodB2GSource(0);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_17_bad(void)

{
  undefined4 *puVar1;
  int local_10;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        local_10 = local_10 + 1;
      }
      return;
    }
    puVar1 = (undefined4 *)calloc(100,8);
    if (puVar1 == (undefined4 *)0x0) break;
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G(void)

{
  undefined4 *local_18;
  int local_10;
  int local_c;
  
  local_18 = (undefined4 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        free(local_18);
        local_10 = local_10 + 1;
      }
      return;
    }
    local_18 = (undefined4 *)calloc(100,8);
    if (local_18 == (undefined4 *)0x0) break;
    *local_18 = 0;
    local_18[1] = 0;
    printStructLine(local_18);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined4 **ppuVar3;
  undefined4 *local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  ppuVar3 = &local_18;
  while (local_c < 1) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0) * -0x10;
    local_18 = (undefined4 *)((ulong)((undefined *)ppuVar3 + lVar2 + 0xf) & 0xfffffffffffffff0);
    *local_18 = 0;
    local_18[1] = 0;
    *(undefined8 *)((undefined *)ppuVar3 + lVar2 + -8) = 0x404fca;
    printStructLine(local_18,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    local_c = local_c + 1;
    ppuVar3 = (undefined4 **)((undefined *)ppuVar3 + lVar2);
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_10 = local_10 + 1;
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_45_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_realloc_45_badData = puVar1;
  badSink();
  return;
}


void goodG2BSink(void)

{
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4050fa;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  CWE401_Memory_Leak__twoIntsStruct_realloc_45_goodG2BData = local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40510f;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  free(CWE401_Memory_Leak__twoIntsStruct_realloc_45_goodB2GData);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_realloc_45_goodB2GData = puVar1;
  goodB2GSink();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54b_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54c_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54b_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54c_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54b_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54c_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_52_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_52b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4052d2;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4052de;
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_52b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_52b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_06_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040542b) */

void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x004054d8) */
/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40553b;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4055ae;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_11_bad(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)calloc(100,8);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    printStructLine(puVar2);
  }
  globalReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x405771;
  iVar2 = globalReturnsFalse();
  if (iVar2 == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x4057d8;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    uStack32 = 0x40577f;
    printLine("Benign, fixed string");
  }
  *(undefined8 *)(puVar4 + -8) = 0x4057e2;
  globalReturnsTrue();
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x4057fe;
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x405859;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  *(undefined8 *)(puVar4 + -8) = 0x405863;
  globalReturnsTrue();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_02_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x405a17;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x405a80;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_51b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_51b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_51b_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_54b_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_realloc_54c_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_54b_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_realloc_54c_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_54b_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_realloc_54c_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_16_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x405c51;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_malloc_65b_badSink(puVar1,uParm2,puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  code *local_10;
  
  local_10 = CWE401_Memory_Leak__twoIntsStruct_malloc_65b_goodG2BSink;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  apuStack32[1] = &local_10 + lVar2 * 0x1ffffffffffffffe;
  *(undefined4 *)apuStack32[1] = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x405d45;
  printStructLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x405d52;
  (*local_10)(apuStack32[1],uParm2,apuStack32[1]);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_malloc_65b_goodB2GSink(puVar1,uParm2,puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


undefined4 * CWE401_Memory_Leak__twoIntsStruct_calloc_61b_badSource(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


/* WARNING: Type propagation algorithm not settling */

undefined8 *
CWE401_Memory_Leak__twoIntsStruct_calloc_61b_goodG2BSource(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined8 local_20;
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_20 + lVar2 * -0x10 + 4) = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x405e8f;
  local_20 = uParm1;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return local_10;
}


undefined4 * CWE401_Memory_Leak__twoIntsStruct_calloc_61b_goodB2GSource(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_10_bad(void)

{
  undefined4 *puVar1;
  
  if (globalTrue != 0) {
    puVar1 = (undefined4 *)calloc(100,8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalFalse == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFalse == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4060c4;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x40606b;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (globalTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x406137;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_53c_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_realloc_53d_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_53c_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_realloc_53d_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_53c_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_realloc_53d_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_22_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_22_badGlobal = 1;
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_22_badSink(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_22_goodB2G1Global = 0;
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_22_goodB2G1Sink(puVar1);
  return;
}


void goodB2G2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_22_goodB2G2Global = 1;
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_22_goodB2G2Sink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x406369;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_22_goodG2BGlobal = 1;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40637f;
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_22_goodG2BSink(local_10);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_22_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_22_goodB2G1Sink(void *pvParm1)

{
  if (CWE401_Memory_Leak__twoIntsStruct_calloc_22_goodB2G1Global == 0) {
    free(pvParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_22_goodB2G2Sink(void *pvParm1)

{
  if (CWE401_Memory_Leak__twoIntsStruct_calloc_22_goodB2G2Global != 0) {
    free(pvParm1);
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_22_goodG2BSink(void)

{
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_41_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  badSink(puVar1);
  return;
}


void goodG2BSink(void)

{
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4064e6;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4064f2;
  goodG2BSink(local_10);
  return;
}


void goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_13_bad(void)

{
  undefined4 *puVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    puVar1 = (undefined4 *)malloc(800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x406755;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x4066fc;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4067c9;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_53b_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_malloc_53c_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_53b_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_malloc_53c_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_53b_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_malloc_53c_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_68b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_68b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_68b_goodB2GSink(void)

{
  free(CWE401_Memory_Leak__twoIntsStruct_realloc_68_goodB2GData);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_65b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_65b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_65b_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_52c_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_52c_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_52c_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_04_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x004069ad) */

void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00406a55) */
/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x406ab8;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x406b2a;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_31_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined4 local_20 [4];
  undefined4 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = local_20 + lVar2 * 0x3ffffffffffffffc;
  *local_10 = 0;
  local_20[lVar2 * 0x3ffffffffffffffc + 1] = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x406c28;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_64b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_64b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_64b_goodB2GSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_68_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_malloc_68_badData = puVar1;
  CWE401_Memory_Leak__twoIntsStruct_malloc_68b_badSink();
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x406dfc;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  CWE401_Memory_Leak__twoIntsStruct_malloc_68_goodG2BData = local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x406e11;
  CWE401_Memory_Leak__twoIntsStruct_malloc_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_malloc_68_goodB2GData = puVar1;
  CWE401_Memory_Leak__twoIntsStruct_malloc_68b_goodB2GSink();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54d_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54e_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54d_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54e_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54d_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54e_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_34_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined4 auStack32 [4];
  undefined4 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = auStack32 + lVar2 * 0x3ffffffffffffffc;
  *local_10 = 0;
  auStack32[lVar2 * 0x3ffffffffffffffc + 1] = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x406fab;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_68b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_68b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_68b_goodB2GSink(void)

{
  free(CWE401_Memory_Leak__struct_twoIntsStruct_calloc_68_goodB2GData);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_66b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_66b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_66b_goodB2GSink(long lParm1)

{
  free(*(void **)(lParm1 + 0x10));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_67_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_calloc_67b_badSink(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined4 *puStack32;
  undefined8 *local_18;
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x4071ac;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  local_18 = local_10;
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x4071c0;
  CWE401_Memory_Leak__twoIntsStruct_calloc_67b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_calloc_67b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_51b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_51b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_51b_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_05_bad(void)

{
  undefined4 *puVar1;
  
  if (staticTrue != 0) {
    puVar1 = (undefined4 *)realloc((void *)0x0,800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticFalse == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFalse == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x407453;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x4073fa;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (staticTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4074c6;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_22_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_22_goodB2G1Sink(void *pvParm1)

{
  if (CWE401_Memory_Leak__struct_twoIntsStruct_malloc_22_goodB2G1Global == 0) {
    free(pvParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_22_goodB2G2Sink(void *pvParm1)

{
  if (CWE401_Memory_Leak__struct_twoIntsStruct_malloc_22_goodB2G2Global != 0) {
    free(pvParm1);
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_22_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_13_bad(void)

{
  undefined4 *puVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    puVar1 = (undefined4 *)realloc((void *)0x0,800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x407742;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x4076e9;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4077b6;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_63b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_63b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_63b_goodB2GSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_54e_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_54e_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_54e_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_52c_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_52c_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_52c_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_53_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_malloc_53b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x407956;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x407962;
  CWE401_Memory_Leak__twoIntsStruct_malloc_53b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_malloc_53b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_32_bad(void)

{
  undefined8 local_30 [2];
  undefined4 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = local_30;
  local_18 = local_30;
  local_30[0] = 0;
  local_20 = (undefined4 *)0x0;
  local_20 = (undefined4 *)calloc(100,8);
  if (local_20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 0;
  local_20[1] = 0;
  printStructLine(local_20);
  *(undefined4 **)local_10 = local_20;
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack64 [2];
  undefined8 local_30;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)&local_30;
  local_18 = (undefined8 *)&local_30;
  local_30 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_30 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_20 = 0;
  *(undefined4 *)((long)&local_30 + lVar2 * -0x10 + 4) = 0;
  auStack64[lVar2 * 0x1ffffffffffffffe] = 0x407ae6;
  printStructLine(local_20,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  *(undefined8 **)local_10 = local_20;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  void *local_30;
  void *local_28;
  undefined4 *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (undefined4 *)0x0;
  local_20 = (undefined4 *)calloc(100,8);
  if (local_20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 0;
  local_20[1] = 0;
  printStructLine(local_20);
  *(undefined4 **)local_10 = local_20;
  local_28 = *local_18;
  free(local_28);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_63_bad(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)malloc(800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_63b_badSink(&local_10);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x407c73;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x407c7f;
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)malloc(800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_63b_goodB2GSink(&local_10);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_52_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_52b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x407dc7;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x407dd3;
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_52b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_52b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_65_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_65b_badSink(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  code *local_10;
  
  local_10 = CWE401_Memory_Leak__struct_twoIntsStruct_calloc_65b_goodG2BSink;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  apuStack32[1] = &local_10 + lVar2 * 0x1ffffffffffffffe;
  *(undefined4 *)apuStack32[1] = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x407f2f;
  printStructLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x407f3c;
  (*local_10)(apuStack32[1],uParm2,apuStack32[1]);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_65b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_68_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_realloc_68_badData = puVar1;
  CWE401_Memory_Leak__twoIntsStruct_realloc_68b_badSink();
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x408099;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  CWE401_Memory_Leak__twoIntsStruct_realloc_68_goodG2BData = local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4080ae;
  CWE401_Memory_Leak__twoIntsStruct_realloc_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_realloc_68_goodB2GData = puVar1;
  CWE401_Memory_Leak__twoIntsStruct_realloc_68b_goodB2GSink();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_34_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined4 auStack32 [4];
  undefined4 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = auStack32 + lVar2 * 0x3ffffffffffffffc;
  *local_10 = 0;
  auStack32[lVar2 * 0x3ffffffffffffffc + 1] = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x408208;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_15_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x408433;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40849e;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54c_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54d_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54c_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54d_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54c_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54d_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_18_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40863a;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_66b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_66b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_66b_goodB2GSink(long lParm1)

{
  free(*(void **)(lParm1 + 0x10));
  return;
}


undefined4 * badSource(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_42_bad(void)

{
  badSource(0);
  return;
}


/* WARNING: Type propagation algorithm not settling */

undefined8 * goodG2BSource(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined8 local_20;
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_20 + lVar2 * -0x10 + 4) = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x408785;
  local_20 = uParm1;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return local_10;
}


void goodG2B(void)

{
  goodG2BSource(0);
  return;
}


undefined4 * goodB2GSource(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = (void *)goodB2GSource(0);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_66_bad(void)

{
  undefined local_38 [16];
  undefined4 *local_28;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)malloc(800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  local_28 = local_10;
  CWE401_Memory_Leak__twoIntsStruct_malloc_66b_badSink(local_38);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack64;
  undefined local_38 [8];
  undefined4 auStack48 [2];
  undefined4 *local_28;
  undefined4 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = auStack48 + lVar2 * 0x3ffffffffffffffc;
  *local_10 = 0;
  auStack48[lVar2 * 0x3ffffffffffffffc + 1] = 0;
  (&uStack64)[lVar2 * 0x1ffffffffffffffe] = 0x408919;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  local_28 = local_10;
  (&uStack64)[lVar2 * 0x1ffffffffffffffe] = 0x40892d;
  CWE401_Memory_Leak__twoIntsStruct_malloc_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  undefined4 *local_28;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)malloc(800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  local_28 = local_10;
  CWE401_Memory_Leak__twoIntsStruct_malloc_66b_goodB2GSink(local_38);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_21_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  badStatic = 1;
  badSink(puVar1);
  return;
}


void goodB2G1Sink(void *pvParm1)

{
  if (goodB2G1Static == 0) {
    free(pvParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2G1Static = 0;
  goodB2G1Sink(puVar1);
  return;
}


void goodB2G2Sink(void *pvParm1)

{
  if (goodB2G2Static != 0) {
    free(pvParm1);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2G2Static = 1;
  goodB2G2Sink(puVar1);
  return;
}


void goodG2BSink(void)

{
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x408bcb;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  goodG2BStatic = 1;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x408be1;
  goodG2BSink(local_10);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_03_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x408d91;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x408dfa;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_53_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_realloc_53b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x408ef6;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x408f02;
  CWE401_Memory_Leak__twoIntsStruct_realloc_53b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_realloc_53b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_12_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x408f9d;
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40903a;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    uStack32 = 0x408fab;
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      uStack32 = 0x408fc0;
      exit(-1);
    }
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)local_10 + 4) = 0;
    uStack32 = 0x408fe1;
    printStructLine(local_10);
  }
  *(undefined8 *)(puVar4 + -8) = 0x409044;
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    *(undefined8 *)(puVar4 + -8) = 0x409054;
    free(local_10,puVar4[-8]);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  undefined4 *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  else {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    free(local_10);
  }
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x40913a;
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x4091ee;
    printStructLine(local_10,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x409195;
    printStructLine(local_10);
  }
  *(undefined8 *)(puVar4 + -8) = 0x4091f8;
  globalReturnsTrueOrFalse();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_67b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_67b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_67b_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_22_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_calloc_22_badGlobal = 1;
  CWE401_Memory_Leak__twoIntsStruct_calloc_22_badSink(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_calloc_22_goodB2G1Global = 0;
  CWE401_Memory_Leak__twoIntsStruct_calloc_22_goodB2G1Sink(puVar1);
  return;
}


void goodB2G2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_calloc_22_goodB2G2Global = 1;
  CWE401_Memory_Leak__twoIntsStruct_calloc_22_goodB2G2Sink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x409408;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  CWE401_Memory_Leak__twoIntsStruct_calloc_22_goodG2BGlobal = 1;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40941e;
  CWE401_Memory_Leak__twoIntsStruct_calloc_22_goodG2BSink(local_10);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_22_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_22_badGlobal = 1;
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_22_badSink(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_22_goodB2G1Global = 0;
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_22_goodB2G1Sink(puVar1);
  return;
}


void goodB2G2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_22_goodB2G2Global = 1;
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_22_goodB2G2Sink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4095e3;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_22_goodG2BGlobal = 1;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4095f9;
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_22_goodG2BSink(local_10);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_52b_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_malloc_52c_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_52b_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_malloc_52c_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_52b_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_malloc_52c_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_18_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x409797;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_12_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x4097ce;
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40986b;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    uStack32 = 0x4097dc;
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      uStack32 = 0x4097f1;
      exit(-1);
    }
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)local_10 + 4) = 0;
    uStack32 = 0x409812;
    printStructLine(local_10);
  }
  *(undefined8 *)(puVar4 + -8) = 0x409875;
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    *(undefined8 *)(puVar4 + -8) = 0x409885;
    free(local_10,puVar4[-8]);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  undefined4 *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  else {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    free(local_10);
  }
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x40996b;
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x409a1f;
    printStructLine(local_10,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x4099c6;
    printStructLine(local_10);
  }
  *(undefined8 *)(puVar4 + -8) = 0x409a29;
  globalReturnsTrueOrFalse();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_52b_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_52c_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_52b_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_52c_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_52b_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_52c_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_66_bad(void)

{
  undefined local_38 [16];
  undefined4 *local_28;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)realloc((void *)0x0,800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  local_28 = local_10;
  CWE401_Memory_Leak__twoIntsStruct_realloc_66b_badSink(local_38);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack64;
  undefined local_38 [8];
  undefined4 auStack48 [2];
  undefined4 *local_28;
  undefined4 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = auStack48 + lVar2 * 0x3ffffffffffffffc;
  *local_10 = 0;
  auStack48[lVar2 * 0x3ffffffffffffffc + 1] = 0;
  (&uStack64)[lVar2 * 0x1ffffffffffffffe] = 0x409b67;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  local_28 = local_10;
  (&uStack64)[lVar2 * 0x1ffffffffffffffe] = 0x409b7b;
  CWE401_Memory_Leak__twoIntsStruct_realloc_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  undefined4 *local_28;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)realloc((void *)0x0,800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  local_28 = local_10;
  CWE401_Memory_Leak__twoIntsStruct_realloc_66b_goodB2GSink(local_38);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_54d_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_calloc_54e_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_54d_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_calloc_54e_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_54d_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_calloc_54e_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_05_bad(void)

{
  undefined4 *puVar1;
  
  if (staticTrue != 0) {
    puVar1 = (undefined4 *)calloc(100,8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticFalse == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFalse == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x409e2a;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x409dd1;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (staticTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x409e9d;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_17_bad(void)

{
  undefined4 *puVar1;
  int local_10;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        local_10 = local_10 + 1;
      }
      return;
    }
    puVar1 = (undefined4 *)malloc(800);
    if (puVar1 == (undefined4 *)0x0) break;
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G(void)

{
  undefined4 *local_18;
  int local_10;
  int local_c;
  
  local_18 = (undefined4 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        free(local_18);
        local_10 = local_10 + 1;
      }
      return;
    }
    local_18 = (undefined4 *)malloc(800);
    if (local_18 == (undefined4 *)0x0) break;
    *local_18 = 0;
    local_18[1] = 0;
    printStructLine(local_18);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined4 **ppuVar3;
  undefined4 *local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  ppuVar3 = &local_18;
  while (local_c < 1) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0) * -0x10;
    local_18 = (undefined4 *)((ulong)((undefined *)ppuVar3 + lVar2 + 0xf) & 0xfffffffffffffff0);
    *local_18 = 0;
    local_18[1] = 0;
    *(undefined8 *)((undefined *)ppuVar3 + lVar2 + -8) = 0x40a039;
    printStructLine(local_18,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    local_c = local_c + 1;
    ppuVar3 = (undefined4 **)((undefined *)ppuVar3 + lVar2);
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_10 = local_10 + 1;
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_41_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  badSink(puVar1);
  return;
}


void goodG2BSink(void)

{
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40a150;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40a15c;
  goodG2BSink(local_10);
  return;
}


void goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_54_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_malloc_54b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40a2ba;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40a2c6;
  CWE401_Memory_Leak__twoIntsStruct_malloc_54b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_malloc_54b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_badGlobal = 1;
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_badSink(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_goodB2G1Global = 0;
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_goodB2G1Sink(puVar1);
  return;
}


void goodB2G2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_goodB2G2Global = 1;
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_goodB2G2Sink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40a4ee;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_goodG2BGlobal = 1;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40a504;
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_goodG2BSink(local_10);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  badSink(puVar1,uParm2,puVar1);
  return;
}


void goodG2BSink(void)

{
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  code *local_10;
  
  local_10 = goodG2BSink;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  apuStack32[1] = &local_10 + lVar2 * 0x1ffffffffffffffe;
  *(undefined4 *)apuStack32[1] = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40a614;
  printStructLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40a621;
  (*local_10)(apuStack32[1],uParm2,apuStack32[1]);
  return;
}


void goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2GSink(puVar1,uParm2,puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar3 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x40a6d8;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
    puVar3 = auStack24 + lVar2 * -0x10;
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40a77c;
    printStructLine(local_10);
  }
  else {
    uStack32 = 0x40a6ed;
    local_10 = (undefined8 *)realloc(local_10,800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      uStack32 = 0x40a702;
      exit(-1);
    }
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)local_10 + 4) = 0;
    uStack32 = 0x40a723;
    printStructLine(local_10);
  }
  *(undefined8 *)(puVar3 + -8) = 0x40a786;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    *(undefined8 *)(puVar3 + -8) = 0x40a796;
    free(local_10,puVar3[-8]);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  undefined4 *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  else {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    free(local_10);
  }
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x40a88a;
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40a93e;
    printStructLine(local_10,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40a8e5;
    printStructLine(local_10);
  }
  *(undefined8 *)(puVar4 + -8) = 0x40a948;
  globalReturnsTrueOrFalse();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  badSink(puVar1,uParm2,puVar1);
  return;
}


void goodG2BSink(void)

{
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  code *local_10;
  
  local_10 = goodG2BSink;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  apuStack32[1] = &local_10 + lVar2 * 0x1ffffffffffffffe;
  *(undefined4 *)apuStack32[1] = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40aa4e;
  printStructLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40aa5b;
  (*local_10)(apuStack32[1],uParm2,apuStack32[1]);
  return;
}


void goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2GSink(puVar1,uParm2,puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_52c_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_52c_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_52c_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_11_bad(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)malloc(800);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    printStructLine(puVar2);
  }
  globalReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x40acaa;
  iVar2 = globalReturnsFalse();
  if (iVar2 == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40ad11;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    uStack32 = 0x40acb8;
    printLine("Benign, fixed string");
  }
  *(undefined8 *)(puVar4 + -8) = 0x40ad1b;
  globalReturnsTrue();
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x40ad37;
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40ad92;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  *(undefined8 *)(puVar4 + -8) = 0x40ad9c;
  globalReturnsTrue();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_02_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40af41;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40afaa;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_13_bad(void)

{
  undefined4 *puVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    puVar1 = (undefined4 *)calloc(100,8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40b1b8;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x40b15f;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40b22c;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_52b_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_realloc_52c_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_52b_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_realloc_52c_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_52b_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_realloc_52c_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_68_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_68_badData = puVar1;
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_68b_badSink();
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40b37d;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_68_goodG2BData = local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40b392;
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_68_goodB2GData = puVar1;
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_68b_goodB2GSink();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_63b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_63b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_63b_goodB2GSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_52_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_malloc_52b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40b52e;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40b53a;
  CWE401_Memory_Leak__twoIntsStruct_malloc_52b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_malloc_52b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_04_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040b67f) */

void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040b729) */
/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40b78c;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40b7fe;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined4 * CWE401_Memory_Leak__struct_twoIntsStruct_malloc_61b_badSource(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


/* WARNING: Type propagation algorithm not settling */

undefined8 *
CWE401_Memory_Leak__struct_twoIntsStruct_malloc_61b_goodG2BSource
          (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined8 local_20;
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_20 + lVar2 * -0x10 + 4) = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x40b8e3;
  local_20 = uParm1;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return local_10;
}


undefined4 * CWE401_Memory_Leak__struct_twoIntsStruct_malloc_61b_goodB2GSource(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_10_bad(void)

{
  undefined4 *puVar1;
  
  if (globalTrue != 0) {
    puVar1 = (undefined4 *)malloc(800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalFalse == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFalse == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40bb04;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x40baab;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (globalTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40bb77;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_16_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40bcc2;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_17_bad(void)

{
  undefined4 *local_18;
  int local_10;
  int local_c;
  
  local_18 = (undefined4 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        local_10 = local_10 + 1;
      }
      return;
    }
    local_18 = (undefined4 *)realloc(local_18,800);
    if (local_18 == (undefined4 *)0x0) break;
    *local_18 = 0;
    local_18[1] = 0;
    printStructLine(local_18);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G(void)

{
  undefined4 *local_18;
  int local_10;
  int local_c;
  
  local_18 = (undefined4 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        free(local_18);
        local_10 = local_10 + 1;
      }
      return;
    }
    local_18 = (undefined4 *)realloc(local_18,800);
    if (local_18 == (undefined4 *)0x0) break;
    *local_18 = 0;
    local_18[1] = 0;
    printStructLine(local_18);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined4 **ppuVar3;
  undefined4 *local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  ppuVar3 = &local_18;
  while (local_c < 1) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0) * -0x10;
    local_18 = (undefined4 *)((ulong)((undefined *)ppuVar3 + lVar2 + 0xf) & 0xfffffffffffffff0);
    *local_18 = 0;
    local_18[1] = 0;
    *(undefined8 *)((undefined *)ppuVar3 + lVar2 + -8) = 0x40be5a;
    printStructLine(local_18,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    local_c = local_c + 1;
    ppuVar3 = (undefined4 **)((undefined *)ppuVar3 + lVar2);
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_10 = local_10 + 1;
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_63b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_63b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_63b_goodB2GSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_44_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  badSink(puVar1);
  return;
}


void goodG2BSink(void)

{
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  code *local_10;
  
  local_10 = goodG2BSink;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  apuStack32[1] = &local_10 + lVar2 * 0x1ffffffffffffffe;
  *(undefined4 *)apuStack32[1] = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40bfd3;
  printStructLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40bfe0;
  (*local_10)(apuStack32[1],uParm2,apuStack32[1]);
  return;
}


void goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_53b_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_calloc_53c_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_53b_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_calloc_53c_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_53b_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_calloc_53c_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40c19c;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40c1a8;
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54c_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54d_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54c_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54d_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54c_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54d_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_31_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined4 local_20 [4];
  undefined4 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = local_20 + lVar2 * 0x3ffffffffffffffc;
  *local_10 = 0;
  local_20[lVar2 * 0x3ffffffffffffffc + 1] = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x40c343;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_11_bad(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)realloc((void *)0x0,800);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    printStructLine(puVar2);
  }
  globalReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x40c57b;
  iVar2 = globalReturnsFalse();
  if (iVar2 == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40c5e2;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    uStack32 = 0x40c589;
    printLine("Benign, fixed string");
  }
  *(undefined8 *)(puVar4 + -8) = 0x40c5ec;
  globalReturnsTrue();
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x40c608;
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40c663;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  *(undefined8 *)(puVar4 + -8) = 0x40c66d;
  globalReturnsTrue();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_02_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40c827;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40c890;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_01_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40c979;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53d_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53d_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53d_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
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


void CWE401_Memory_Leak__twoIntsStruct_malloc_08_bad(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)malloc(800);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    printStructLine(puVar2);
  }
  staticReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x40cbbb;
  iVar2 = staticReturnsFalse();
  if (iVar2 == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40cc22;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    uStack32 = 0x40cbc9;
    printLine("Benign, fixed string");
  }
  *(undefined8 *)(puVar4 + -8) = 0x40cc2c;
  staticReturnsTrue();
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x40cc48;
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40cca3;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  *(undefined8 *)(puVar4 + -8) = 0x40ccad;
  staticReturnsTrue();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40cda2;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40cdae;
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


undefined4 * badSource(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_42_bad(void)

{
  badSource(0);
  return;
}


/* WARNING: Type propagation algorithm not settling */

undefined8 * goodG2BSource(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined8 local_20;
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_20 + lVar2 * -0x10 + 4) = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x40ceff;
  local_20 = uParm1;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return local_10;
}


void goodG2B(void)

{
  goodG2BSource(0);
  return;
}


undefined4 * goodB2GSource(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = (void *)goodB2GSource(0);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_13_bad(void)

{
  undefined4 *puVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    puVar1 = (undefined4 *)realloc((void *)0x0,800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40d1a5;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x40d14c;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40d219;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_68_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_68_badData = puVar1;
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_68b_badSink();
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40d31e;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_68_goodG2BData = local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40d333;
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_68_goodB2GData = puVar1;
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_68b_goodB2GSink();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_63b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_63b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_63b_goodB2GSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_34_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined4 auStack32 [4];
  undefined4 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = auStack32 + lVar2 * 0x3ffffffffffffffc;
  *local_10 = 0;
  auStack32[lVar2 * 0x3ffffffffffffffc + 1] = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d4dc;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_21_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  badStatic = 1;
  badSink(puVar1);
  return;
}


void goodB2G1Sink(void *pvParm1)

{
  if (goodB2G1Static == 0) {
    free(pvParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2G1Static = 0;
  goodB2G1Sink(puVar1);
  return;
}


void goodB2G2Sink(void *pvParm1)

{
  if (goodB2G2Static != 0) {
    free(pvParm1);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2G2Static = 1;
  goodB2G2Sink(puVar1);
  return;
}


void goodG2BSink(void)

{
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40d784;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  goodG2BStatic = 1;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40d79a;
  goodG2BSink(local_10);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_63_bad(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)malloc(800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__twoIntsStruct_malloc_63b_badSink(&local_10);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40d887;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40d893;
  CWE401_Memory_Leak__twoIntsStruct_malloc_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)malloc(800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__twoIntsStruct_malloc_63b_goodB2GSink(&local_10);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_66b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_66b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_66b_goodB2GSink(long lParm1)

{
  free(*(void **)(lParm1 + 0x10));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_65_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_calloc_65b_badSink(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  code *local_10;
  
  local_10 = CWE401_Memory_Leak__twoIntsStruct_calloc_65b_goodG2BSink;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  apuStack32[1] = &local_10 + lVar2 * 0x1ffffffffffffffe;
  *(undefined4 *)apuStack32[1] = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40da3c;
  printStructLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40da49;
  (*local_10)(apuStack32[1],uParm2,apuStack32[1]);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_calloc_65b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_15_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40dc5b;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40dcc6;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54e_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54e_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54e_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_18_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40de42;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_64b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_64b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_64b_goodB2GSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40df92;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40df9e;
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


undefined4 * badSource(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_42_bad(void)

{
  badSource(0);
  return;
}


/* WARNING: Type propagation algorithm not settling */

undefined8 * goodG2BSource(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined8 local_20;
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_20 + lVar2 * -0x10 + 4) = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x40e0fb;
  local_20 = uParm1;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return local_10;
}


void goodG2B(void)

{
  goodG2BSource(0);
  return;
}


undefined4 * goodB2GSource(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = (void *)goodB2GSource(0);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_64b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_64b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_64b_goodB2GSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67b_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_51_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_51b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40e334;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40e340;
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_51b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_51b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_21_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  badStatic = 1;
  badSink(puVar1);
  return;
}


void goodB2G1Sink(void *pvParm1)

{
  if (goodB2G1Static == 0) {
    free(pvParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2G1Static = 0;
  goodB2G1Sink(puVar1);
  return;
}


void goodB2G2Sink(void *pvParm1)

{
  if (goodB2G2Static != 0) {
    free(pvParm1);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2G2Static = 1;
  goodB2G2Sink(puVar1);
  return;
}


void goodG2BSink(void)

{
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40e5d6;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  goodG2BStatic = 1;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40e5ec;
  goodG2BSink(local_10);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_03_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40e79c;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40e805;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_65_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_65b_badSink(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  code *local_10;
  
  local_10 = CWE401_Memory_Leak__struct_twoIntsStruct_realloc_65b_goodG2BSink;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  apuStack32[1] = &local_10 + lVar2 * 0x1ffffffffffffffe;
  *(undefined4 *)apuStack32[1] = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40e912;
  printStructLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40e91f;
  (*local_10)(apuStack32[1],uParm2,apuStack32[1]);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_65b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_68b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_68b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_68b_goodB2GSink(void)

{
  free(CWE401_Memory_Leak__twoIntsStruct_calloc_68_goodB2GData);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_63_bad(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)realloc((void *)0x0,800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__twoIntsStruct_realloc_63b_badSink(&local_10);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40eaba;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40eac6;
  CWE401_Memory_Leak__twoIntsStruct_realloc_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)realloc((void *)0x0,800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__twoIntsStruct_realloc_63b_goodB2GSink(&local_10);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_07_bad(void)

{
  undefined4 *puVar1;
  
  if (staticFive == 5) {
    puVar1 = (undefined4 *)calloc(100,8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticFive == 5) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40ed27;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x40ecce;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40ed9b;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54e_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54e_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54e_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_18_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40ef23;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_66_bad(void)

{
  undefined local_38 [16];
  undefined4 *local_28;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)realloc((void *)0x0,800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  local_28 = local_10;
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_66b_badSink(local_38);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack64;
  undefined local_38 [8];
  undefined4 auStack48 [2];
  undefined4 *local_28;
  undefined4 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = auStack48 + lVar2 * 0x3ffffffffffffffc;
  *local_10 = 0;
  auStack48[lVar2 * 0x3ffffffffffffffc + 1] = 0;
  (&uStack64)[lVar2 * 0x1ffffffffffffffe] = 0x40f014;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  local_28 = local_10;
  (&uStack64)[lVar2 * 0x1ffffffffffffffe] = 0x40f028;
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  undefined4 *local_28;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)realloc((void *)0x0,800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  local_28 = local_10;
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_66b_goodB2GSink(local_38);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54d_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54e_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54d_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54e_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54d_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54e_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_54d_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_realloc_54e_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_54d_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_realloc_54e_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_54d_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_realloc_54e_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_05_bad(void)

{
  undefined4 *puVar1;
  
  if (staticTrue != 0) {
    puVar1 = (undefined4 *)malloc(800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticFalse == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFalse == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40f316;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x40f2bd;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (staticTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40f389;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_05_bad(void)

{
  undefined4 *puVar1;
  
  if (staticTrue != 0) {
    puVar1 = (undefined4 *)calloc(100,8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticFalse == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFalse == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40f591;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x40f538;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (staticTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40f604;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_17_bad(void)

{
  undefined4 *puVar1;
  int local_10;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        local_10 = local_10 + 1;
      }
      return;
    }
    puVar1 = (undefined4 *)malloc(800);
    if (puVar1 == (undefined4 *)0x0) break;
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G(void)

{
  undefined4 *local_18;
  int local_10;
  int local_c;
  
  local_18 = (undefined4 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        free(local_18);
        local_10 = local_10 + 1;
      }
      return;
    }
    local_18 = (undefined4 *)malloc(800);
    if (local_18 == (undefined4 *)0x0) break;
    *local_18 = 0;
    local_18[1] = 0;
    printStructLine(local_18);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined4 **ppuVar3;
  undefined4 *local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  ppuVar3 = &local_18;
  while (local_c < 1) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0) * -0x10;
    local_18 = (undefined4 *)((ulong)((undefined *)ppuVar3 + lVar2 + 0xf) & 0xfffffffffffffff0);
    *local_18 = 0;
    local_18[1] = 0;
    *(undefined8 *)((undefined *)ppuVar3 + lVar2 + -8) = 0x40f7a0;
    printStructLine(local_18,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    local_c = local_c + 1;
    ppuVar3 = (undefined4 **)((undefined *)ppuVar3 + lVar2);
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_10 = local_10 + 1;
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_07_bad(void)

{
  undefined4 *puVar1;
  
  if (staticFive == 5) {
    puVar1 = (undefined4 *)calloc(100,8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticFive == 5) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40f9b7;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x40f95e;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40fa2b;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_41_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  badSink(puVar1);
  return;
}


void goodG2BSink(void)

{
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40fb39;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40fb45;
  goodG2BSink(local_10);
  return;
}


void goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_13_bad(void)

{
  undefined4 *puVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    puVar1 = (undefined4 *)calloc(100,8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40fdbc;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x40fd63;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40fe30;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_64_bad(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)calloc(100,8);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_64b_badSink(&local_10);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40ff2c;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40ff38;
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)calloc(100,8);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_64b_goodB2GSink(&local_10);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_63b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_63b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_63b_goodB2GSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar3 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x410022;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
    puVar3 = auStack24 + lVar2 * -0x10;
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x4100c6;
    printStructLine(local_10);
  }
  else {
    uStack32 = 0x410037;
    local_10 = (undefined8 *)realloc(local_10,800);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      uStack32 = 0x41004c;
      exit(-1);
    }
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)local_10 + 4) = 0;
    uStack32 = 0x41006d;
    printStructLine(local_10);
  }
  *(undefined8 *)(puVar3 + -8) = 0x4100d0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    *(undefined8 *)(puVar3 + -8) = 0x4100e0;
    free(local_10,puVar3[-8]);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  undefined4 *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  else {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    free(local_10);
  }
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x4101d4;
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x410288;
    printStructLine(local_10,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x41022f;
    printStructLine(local_10);
  }
  *(undefined8 *)(puVar4 + -8) = 0x410292;
  globalReturnsTrueOrFalse();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_52c_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_52c_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_52c_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_11_bad(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)malloc(800);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    printStructLine(puVar2);
  }
  globalReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x410460;
  iVar2 = globalReturnsFalse();
  if (iVar2 == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x4104c7;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    uStack32 = 0x41046e;
    printLine("Benign, fixed string");
  }
  *(undefined8 *)(puVar4 + -8) = 0x4104d1;
  globalReturnsTrue();
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x4104ed;
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x410548;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  *(undefined8 *)(puVar4 + -8) = 0x410552;
  globalReturnsTrue();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_02_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4106f7;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x410760;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_51b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_51b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_51b_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_14_bad(void)

{
  undefined4 *puVar1;
  
  if (globalFive == 5) {
    puVar1 = (undefined4 *)malloc(800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalFive == 5) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41098d;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x410934;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x410a01;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_34_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined4 auStack32 [4];
  undefined4 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = auStack32 + lVar2 * 0x3ffffffffffffffc;
  *local_10 = 0;
  auStack32[lVar2 * 0x3ffffffffffffffc + 1] = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x410aff;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_66b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_66b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_66b_goodB2GSink(long lParm1)

{
  free(*(void **)(lParm1 + 0x10));
  return;
}


undefined4 * CWE401_Memory_Leak__twoIntsStruct_malloc_61b_badSource(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


/* WARNING: Type propagation algorithm not settling */

undefined8 *
CWE401_Memory_Leak__twoIntsStruct_malloc_61b_goodG2BSource(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined8 local_20;
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_20 + lVar2 * -0x10 + 4) = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x410ca5;
  local_20 = uParm1;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return local_10;
}


undefined4 * CWE401_Memory_Leak__twoIntsStruct_malloc_61b_goodB2GSource(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_10_bad(void)

{
  undefined4 *puVar1;
  
  if (globalTrue != 0) {
    puVar1 = (undefined4 *)malloc(800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalFalse == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFalse == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x410ec6;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x410e6d;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (globalTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x410f39;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_17_bad(void)

{
  undefined4 *local_18;
  int local_10;
  int local_c;
  
  local_18 = (undefined4 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        local_10 = local_10 + 1;
      }
      return;
    }
    local_18 = (undefined4 *)realloc(local_18,800);
    if (local_18 == (undefined4 *)0x0) break;
    *local_18 = 0;
    local_18[1] = 0;
    printStructLine(local_18);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G(void)

{
  undefined4 *local_18;
  int local_10;
  int local_c;
  
  local_18 = (undefined4 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        free(local_18);
        local_10 = local_10 + 1;
      }
      return;
    }
    local_18 = (undefined4 *)realloc(local_18,800);
    if (local_18 == (undefined4 *)0x0) break;
    *local_18 = 0;
    local_18[1] = 0;
    printStructLine(local_18);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined4 **ppuVar3;
  undefined4 *local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  ppuVar3 = &local_18;
  while (local_c < 1) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0) * -0x10;
    local_18 = (undefined4 *)((ulong)((undefined *)ppuVar3 + lVar2 + 0xf) & 0xfffffffffffffff0);
    *local_18 = 0;
    local_18[1] = 0;
    *(undefined8 *)((undefined *)ppuVar3 + lVar2 + -8) = 0x4110e3;
    printStructLine(local_18,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    local_c = local_c + 1;
    ppuVar3 = (undefined4 **)((undefined *)ppuVar3 + lVar2);
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_10 = local_10 + 1;
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53c_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53d_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53c_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53d_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53c_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53d_goodB2GSink(uParm1);
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_44_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  badSink(puVar1);
  return;
}


void goodG2BSink(void)

{
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  code *local_10;
  
  local_10 = goodG2BSink;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  apuStack32[1] = &local_10 + lVar2 * 0x1ffffffffffffffe;
  *(undefined4 *)apuStack32[1] = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41125b;
  printStructLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x411268;
  (*local_10)(apuStack32[1],uParm2,apuStack32[1]);
  return;
}


void goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_21_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  badStatic = 1;
  badSink(puVar1);
  return;
}


void goodB2G1Sink(void *pvParm1)

{
  if (goodB2G1Static == 0) {
    free(pvParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2G1Static = 0;
  goodB2G1Sink(puVar1);
  return;
}


void goodB2G2Sink(void *pvParm1)

{
  if (goodB2G2Static != 0) {
    free(pvParm1);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2G2Static = 1;
  goodB2G2Sink(puVar1);
  return;
}


void goodG2BSink(void)

{
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x411522;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  goodG2BStatic = 1;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x411538;
  goodG2BSink(local_10);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_03_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4116e2;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41174b;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_53_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_calloc_53b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x411845;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x411851;
  CWE401_Memory_Leak__twoIntsStruct_calloc_53b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_calloc_53b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_53_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_54c_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_malloc_54d_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_54c_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_malloc_54d_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_54c_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_malloc_54d_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_11_bad(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)realloc((void *)0x0,800);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    printStructLine(puVar2);
  }
  globalReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x411ab7;
  iVar2 = globalReturnsFalse();
  if (iVar2 == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x411b1e;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    uStack32 = 0x411ac5;
    printLine("Benign, fixed string");
  }
  *(undefined8 *)(puVar4 + -8) = 0x411b28;
  globalReturnsTrue();
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x411b44;
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x411b9f;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  *(undefined8 *)(puVar4 + -8) = 0x411ba9;
  globalReturnsTrue();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_02_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x411d63;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x411dcc;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_63_bad(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)calloc(100,8);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_63b_badSink(&local_10);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x411ec8;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x411ed4;
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)calloc(100,8);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_63b_goodB2GSink(&local_10);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_01_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41200e;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_16_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4121b1;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_52c_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_52c_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_52c_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_18_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x412323;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


undefined4 * CWE401_Memory_Leak__twoIntsStruct_realloc_61b_badSource(void *pvParm1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc(pvParm1,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


/* WARNING: Type propagation algorithm not settling */

undefined8 *
CWE401_Memory_Leak__twoIntsStruct_realloc_61b_goodG2BSource(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined8 local_20;
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_20 + lVar2 * -0x10 + 4) = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x4123fc;
  local_20 = uParm1;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return local_10;
}


undefined4 * CWE401_Memory_Leak__twoIntsStruct_realloc_61b_goodB2GSource(void *pvParm1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc(pvParm1,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_10_bad(void)

{
  undefined4 *puVar1;
  
  if (globalTrue != 0) {
    puVar1 = (undefined4 *)realloc((void *)0x0,800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalFalse == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFalse == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x412639;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x4125e0;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (globalTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4126ac;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_54e_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_54e_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_54e_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_66_bad(void)

{
  undefined local_38 [16];
  undefined4 *local_28;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)calloc(100,8);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  local_28 = local_10;
  CWE401_Memory_Leak__twoIntsStruct_calloc_66b_badSink(local_38);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack64;
  undefined local_38 [8];
  undefined4 auStack48 [2];
  undefined4 *local_28;
  undefined4 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = auStack48 + lVar2 * 0x3ffffffffffffffc;
  *local_10 = 0;
  auStack48[lVar2 * 0x3ffffffffffffffc + 1] = 0;
  (&uStack64)[lVar2 * 0x1ffffffffffffffe] = 0x4127dc;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  local_28 = local_10;
  (&uStack64)[lVar2 * 0x1ffffffffffffffe] = 0x4127f0;
  CWE401_Memory_Leak__twoIntsStruct_calloc_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  undefined4 *local_28;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)calloc(100,8);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  local_28 = local_10;
  CWE401_Memory_Leak__twoIntsStruct_calloc_66b_goodB2GSink(local_38);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_61_bad(void)

{
  CWE401_Memory_Leak__twoIntsStruct_malloc_61b_badSource(0);
  return;
}


void goodG2B(void)

{
  CWE401_Memory_Leak__twoIntsStruct_malloc_61b_goodG2BSource(0);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = (void *)CWE401_Memory_Leak__twoIntsStruct_malloc_61b_goodB2GSource(0);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_07_bad(void)

{
  undefined4 *puVar1;
  
  if (staticFive == 5) {
    puVar1 = (undefined4 *)malloc(800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticFive == 5) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x412ad2;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x412a79;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x412b46;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_45_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_45_badData = puVar1;
  badSink();
  return;
}


void goodG2BSink(void)

{
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x412c66;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_45_goodG2BData = local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x412c7b;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  free(CWE401_Memory_Leak__struct_twoIntsStruct_malloc_45_goodB2GData);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_45_goodB2GData = puVar1;
  goodB2GSink();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_54c_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_realloc_54d_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_54c_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_realloc_54d_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_54c_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_realloc_54d_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_goodB2G1Sink(void *pvParm1)

{
  if (CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_goodB2G1Global == 0) {
    free(pvParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_goodB2G2Sink(void *pvParm1)

{
  if (CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_goodB2G2Global != 0) {
    free(pvParm1);
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_22_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar3 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x412def;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
    puVar3 = auStack24 + lVar2 * -0x10;
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x412e91;
    printStructLine(local_10);
  }
  else {
    uStack32 = 0x412e02;
    local_10 = (undefined8 *)calloc(100,8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      uStack32 = 0x412e17;
      exit(-1);
    }
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)local_10 + 4) = 0;
    uStack32 = 0x412e38;
    printStructLine(local_10);
  }
  *(undefined8 *)(puVar3 + -8) = 0x412e9b;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    *(undefined8 *)(puVar3 + -8) = 0x412eab;
    free(local_10,puVar3[-8]);
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  undefined4 *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  else {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    free(local_10);
  }
  return;
}


void goodG2B(void)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x412f9b;
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x41304f;
    printStructLine(local_10,0x10,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x412ff6;
    printStructLine(local_10);
  }
  *(undefined8 *)(puVar4 + -8) = 0x413059;
  globalReturnsTrueOrFalse();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_12_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_51b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_51b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_51b_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_06_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00413163) */

void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00413209) */
/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41326c;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4132df;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_01_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4133cf;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_51_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_51b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41351c;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x413528;
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_51b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_51b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_53d_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_53d_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_53d_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_52b_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_calloc_52c_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_52b_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_calloc_52c_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_52b_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_calloc_52c_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_07_bad(void)

{
  undefined4 *puVar1;
  
  if (staticFive == 5) {
    puVar1 = (undefined4 *)malloc(800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticFive == 5) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4137f4;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x41379b;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x413868;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_64b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_64b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_64b_goodB2GSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_53d_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_53d_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_53d_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
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


void CWE401_Memory_Leak__twoIntsStruct_realloc_08_bad(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)realloc((void *)0x0,800);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    printStructLine(puVar2);
  }
  staticReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x413adc;
  iVar2 = staticReturnsFalse();
  if (iVar2 == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x413b43;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    uStack32 = 0x413aea;
    printLine("Benign, fixed string");
  }
  *(undefined8 *)(puVar4 + -8) = 0x413b4d;
  staticReturnsTrue();
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x413b69;
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x413bc4;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  *(undefined8 *)(puVar4 + -8) = 0x413bce;
  staticReturnsTrue();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_61_bad(void)

{
  CWE401_Memory_Leak__twoIntsStruct_realloc_61b_badSource(0);
  return;
}


void goodG2B(void)

{
  CWE401_Memory_Leak__twoIntsStruct_realloc_61b_goodG2BSource(0);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = (void *)CWE401_Memory_Leak__twoIntsStruct_realloc_61b_goodB2GSource(0);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_17_bad(void)

{
  undefined4 *puVar1;
  int local_10;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        local_10 = local_10 + 1;
      }
      return;
    }
    puVar1 = (undefined4 *)calloc(100,8);
    if (puVar1 == (undefined4 *)0x0) break;
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G(void)

{
  undefined4 *local_18;
  int local_10;
  int local_c;
  
  local_18 = (undefined4 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      local_10 = 0;
      while (local_10 < 1) {
        free(local_18);
        local_10 = local_10 + 1;
      }
      return;
    }
    local_18 = (undefined4 *)calloc(100,8);
    if (local_18 == (undefined4 *)0x0) break;
    *local_18 = 0;
    local_18[1] = 0;
    printStructLine(local_18);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined4 **ppuVar3;
  undefined4 *local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  ppuVar3 = &local_18;
  while (local_c < 1) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0) * -0x10;
    local_18 = (undefined4 *)((ulong)((undefined *)ppuVar3 + lVar2 + 0xf) & 0xfffffffffffffff0);
    *local_18 = 0;
    local_18[1] = 0;
    *(undefined8 *)((undefined *)ppuVar3 + lVar2 + -8) = 0x413e00;
    printStructLine(local_18,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    local_c = local_c + 1;
    ppuVar3 = (undefined4 **)((undefined *)ppuVar3 + lVar2);
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_10 = local_10 + 1;
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_45_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_45_badData = puVar1;
  badSink();
  return;
}


void goodG2BSink(void)

{
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x413f30;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_45_goodG2BData = local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x413f45;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  free(CWE401_Memory_Leak__struct_twoIntsStruct_realloc_45_goodB2GData);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_45_goodB2GData = puVar1;
  goodB2GSink();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_44_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  badSink(puVar1);
  return;
}


void goodG2BSink(void)

{
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  code *local_10;
  
  local_10 = goodG2BSink;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  apuStack32[1] = &local_10 + lVar2 * 0x1ffffffffffffffe;
  *(undefined4 *)apuStack32[1] = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4140df;
  printStructLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4140ec;
  (*local_10)(apuStack32[1],uParm2,apuStack32[1]);
  return;
}


void goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_06_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0041425c) */

void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00414309) */
/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41436c;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4143df;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_11_bad(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)calloc(100,8);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    printStructLine(puVar2);
  }
  globalReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x4145a2;
  iVar2 = globalReturnsFalse();
  if (iVar2 == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x414609;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    uStack32 = 0x4145b0;
    printLine("Benign, fixed string");
  }
  *(undefined8 *)(puVar4 + -8) = 0x414613;
  globalReturnsTrue();
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x41462f;
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x41468a;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  *(undefined8 *)(puVar4 + -8) = 0x414694;
  globalReturnsTrue();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_02_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x414848;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4148b1;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_09_bad(void)

{
  undefined4 *puVar1;
  
  if (GLOBAL_CONST_TRUE != 0) {
    puVar1 = (undefined4 *)realloc((void *)0x0,800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x414abf;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x414a66;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x414b32;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_54b_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_malloc_54c_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_54b_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_malloc_54c_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_54b_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_malloc_54c_goodB2GSink(uParm1);
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_21_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  badStatic = 1;
  badSink(puVar1);
  return;
}


void goodB2G1Sink(void *pvParm1)

{
  if (goodB2G1Static == 0) {
    free(pvParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2G1Static = 0;
  goodB2G1Sink(puVar1);
  return;
}


void goodB2G2Sink(void *pvParm1)

{
  if (goodB2G2Static != 0) {
    free(pvParm1);
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2G2Static = 1;
  goodB2G2Sink(puVar1);
  return;
}


void goodG2BSink(void)

{
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x414db7;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  goodG2BStatic = 1;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x414dcd;
  goodG2BSink(local_10);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_51b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_51b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_51b_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_68b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_68b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_68b_goodB2GSink(void)

{
  free(CWE401_Memory_Leak__struct_twoIntsStruct_malloc_68_goodB2GData);
  return;
}


undefined4 * CWE401_Memory_Leak__struct_twoIntsStruct_calloc_61b_badSource(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


/* WARNING: Type propagation algorithm not settling */

undefined8 *
CWE401_Memory_Leak__struct_twoIntsStruct_calloc_61b_goodG2BSource
          (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined8 local_20;
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_20 + lVar2 * -0x10 + 4) = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x414f1e;
  local_20 = uParm1;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return local_10;
}


undefined4 * CWE401_Memory_Leak__struct_twoIntsStruct_calloc_61b_goodB2GSource(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_10_bad(void)

{
  undefined4 *puVar1;
  
  if (globalTrue != 0) {
    puVar1 = (undefined4 *)calloc(100,8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalFalse == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalTrue != 0) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFalse == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x415153;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x4150fa;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (globalTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4151c6;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_16_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41531b;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_14_bad(void)

{
  undefined4 *puVar1;
  
  if (globalFive == 5) {
    puVar1 = (undefined4 *)malloc(800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalFive == 5) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x415508;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x4154af;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41557c;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_32_bad(void)

{
  undefined8 local_30 [2];
  undefined4 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = local_30;
  local_18 = local_30;
  local_30[0] = 0;
  local_20 = (undefined4 *)0x0;
  local_20 = (undefined4 *)malloc(800);
  if (local_20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 0;
  local_20[1] = 0;
  printStructLine(local_20);
  *(undefined4 **)local_10 = local_20;
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack64 [2];
  undefined8 local_30;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)&local_30;
  local_18 = (undefined8 *)&local_30;
  local_30 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_30 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_20 = 0;
  *(undefined4 *)((long)&local_30 + lVar2 * -0x10 + 4) = 0;
  auStack64[lVar2 * 0x1ffffffffffffffe] = 0x4156b1;
  printStructLine(local_20,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  *(undefined8 **)local_10 = local_20;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  void *local_30;
  void *local_28;
  undefined4 *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (undefined4 *)0x0;
  local_20 = (undefined4 *)malloc(800);
  if (local_20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 0;
  local_20[1] = 0;
  printStructLine(local_20);
  *(undefined4 **)local_10 = local_20;
  local_28 = *local_18;
  free(local_28);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_07_bad(void)

{
  undefined4 *puVar1;
  
  if (staticFive == 5) {
    puVar1 = (undefined4 *)realloc((void *)0x0,800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticFive == 5) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x415956;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x4158fd;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4159ca;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_07_bad(void)

{
  undefined4 *puVar1;
  
  if (staticFive == 5) {
    puVar1 = (undefined4 *)realloc((void *)0x0,800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticFive == 5) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticFive == 5) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x415bde;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x415b85;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (staticFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x415c52;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54c_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54d_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54c_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54d_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54c_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54d_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_01_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x415d8e;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67b_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_64b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_64b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_64b_goodB2GSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_64_bad(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)malloc(800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_64b_badSink(&local_10);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x415f81;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x415f8d;
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)malloc(800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_64b_goodB2GSink(&local_10);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_51_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_calloc_51b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4160d3;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4160df;
  CWE401_Memory_Leak__twoIntsStruct_calloc_51b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_calloc_51b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_14_bad(void)

{
  undefined4 *puVar1;
  
  if (globalFive == 5) {
    puVar1 = (undefined4 *)realloc((void *)0x0,800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalFive == 5) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x416342;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x4162e9;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4163b6;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_61_bad(void)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_61b_badSource(0);
  return;
}


void goodG2B(void)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_61b_goodG2BSource(0);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = (void *)CWE401_Memory_Leak__struct_twoIntsStruct_calloc_61b_goodB2GSource(0);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_32_bad(void)

{
  undefined8 local_30 [2];
  undefined4 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = local_30;
  local_18 = local_30;
  local_30[0] = 0;
  local_20 = (undefined4 *)0x0;
  local_20 = (undefined4 *)realloc((void *)0x0,800);
  if (local_20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 0;
  local_20[1] = 0;
  printStructLine(local_20);
  *(undefined4 **)local_10 = local_20;
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack64 [2];
  undefined8 local_30;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)&local_30;
  local_18 = (undefined8 *)&local_30;
  local_30 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_30 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_20 = 0;
  *(undefined4 *)((long)&local_30 + lVar2 * -0x10 + 4) = 0;
  auStack64[lVar2 * 0x1ffffffffffffffe] = 0x41657e;
  printStructLine(local_20,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  *(undefined8 **)local_10 = local_20;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  void *local_30;
  void *local_28;
  undefined4 *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (undefined4 *)0x0;
  local_20 = (undefined4 *)realloc((void *)0x0,800);
  if (local_20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 0;
  local_20[1] = 0;
  printStructLine(local_20);
  *(undefined4 **)local_10 = local_20;
  local_28 = *local_18;
  free(local_28);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_67b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_67b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_67b_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_16_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4167a7;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_51_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_malloc_51b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41688a;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x416896;
  CWE401_Memory_Leak__twoIntsStruct_malloc_51b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_malloc_51b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_04_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x004169cd) */

void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00416a70) */
/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x416ad3;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x416b45;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_31_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined4 local_20 [4];
  undefined4 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = local_20 + lVar2 * 0x3ffffffffffffffc;
  *local_10 = 0;
  local_20[lVar2 * 0x3ffffffffffffffc + 1] = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x416c3e;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_63_bad(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)realloc((void *)0x0,800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_63b_badSink(&local_10);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x416da6;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x416db2;
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)realloc((void *)0x0,800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_63b_goodB2GSink(&local_10);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_09_bad(void)

{
  undefined4 *puVar1;
  
  if (GLOBAL_CONST_TRUE != 0) {
    puVar1 = (undefined4 *)malloc(800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x416ffe;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x416fa5;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x417071;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_45_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_calloc_45_badData = puVar1;
  badSink();
  return;
}


void goodG2BSink(void)

{
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x417196;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  CWE401_Memory_Leak__twoIntsStruct_calloc_45_goodG2BData = local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4171ab;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  free(CWE401_Memory_Leak__twoIntsStruct_calloc_45_goodB2GData);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_calloc_45_goodB2GData = puVar1;
  goodB2GSink();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_09_bad(void)

{
  undefined4 *puVar1;
  
  if (GLOBAL_CONST_TRUE != 0) {
    puVar1 = (undefined4 *)calloc(100,8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41742c;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x4173d3;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41749f;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_03_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x417644;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4176ad;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_54_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_realloc_54b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4177a9;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4177b5;
  CWE401_Memory_Leak__twoIntsStruct_realloc_54b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_realloc_54b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_06_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00417900) */

void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x004179ab) */
/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x417a0e;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x417a81;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_54_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_calloc_54b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x417b7b;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x417b87;
  CWE401_Memory_Leak__twoIntsStruct_calloc_54b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_calloc_54b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_04_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00417cd1) */

void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00417d7b) */
/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x417dde;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x417e50;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_13_bad(void)

{
  undefined4 *puVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    puVar1 = (undefined4 *)malloc(800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41804f;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x417ff6;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4180c3;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_44_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  badSink(puVar1);
  return;
}


void goodG2BSink(void)

{
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  code *local_10;
  
  local_10 = goodG2BSink;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  apuStack32[1] = &local_10 + lVar2 * 0x1ffffffffffffffe;
  *(undefined4 *)apuStack32[1] = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4181e2;
  printStructLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4181ef;
  (*local_10)(apuStack32[1],uParm2,apuStack32[1]);
  return;
}


void goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_44_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_53c_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_malloc_53d_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_53c_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_malloc_53d_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_53c_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_malloc_53d_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_31_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined4 local_20 [4];
  undefined4 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = local_20 + lVar2 * 0x3ffffffffffffffc;
  *local_10 = 0;
  local_20[lVar2 * 0x3ffffffffffffffc + 1] = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x4183af;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_64_bad(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)calloc(100,8);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__twoIntsStruct_calloc_64b_badSink(&local_10);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41851c;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x418528;
  CWE401_Memory_Leak__twoIntsStruct_calloc_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)calloc(100,8);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__twoIntsStruct_calloc_64b_goodB2GSink(&local_10);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53b_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53c_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53b_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53c_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53b_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_53c_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_65b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_65b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_65b_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54b_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54c_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54b_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54c_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54b_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54c_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_67_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_67b_badSink(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined4 *puStack32;
  undefined8 *local_18;
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x418747;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  local_18 = local_10;
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41875b;
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_67b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_67b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_65b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_65b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_65b_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_22_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_realloc_22_badGlobal = 1;
  CWE401_Memory_Leak__twoIntsStruct_realloc_22_badSink(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_realloc_22_goodB2G1Global = 0;
  CWE401_Memory_Leak__twoIntsStruct_realloc_22_goodB2G1Sink(puVar1);
  return;
}


void goodB2G2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_realloc_22_goodB2G2Global = 1;
  CWE401_Memory_Leak__twoIntsStruct_realloc_22_goodB2G2Sink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4189c6;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  CWE401_Memory_Leak__twoIntsStruct_realloc_22_goodG2BGlobal = 1;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4189dc;
  CWE401_Memory_Leak__twoIntsStruct_realloc_22_goodG2BSink(local_10);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_15_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x418b7d;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x418be8;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_64b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_64b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_64b_goodB2GSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_22_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_22_goodB2G1Sink(void *pvParm1)

{
  if (CWE401_Memory_Leak__struct_twoIntsStruct_realloc_22_goodB2G1Global == 0) {
    free(pvParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_22_goodB2G2Sink(void *pvParm1)

{
  if (CWE401_Memory_Leak__struct_twoIntsStruct_realloc_22_goodB2G2Global != 0) {
    free(pvParm1);
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_22_goodG2BSink(void)

{
  return;
}


undefined4 * badSource(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_42_bad(void)

{
  badSource(0);
  return;
}


/* WARNING: Type propagation algorithm not settling */

undefined8 * goodG2BSource(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined8 local_20;
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_20 + lVar2 * -0x10 + 4) = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x418dc0;
  local_20 = uParm1;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return local_10;
}


void goodG2B(void)

{
  goodG2BSource(0);
  return;
}


undefined4 * goodB2GSource(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = (void *)goodB2GSource(0);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE401_Memory_Leak__twoIntsStruct_calloc_32_bad(void)

{
  undefined8 local_30 [2];
  undefined4 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = local_30;
  local_18 = local_30;
  local_30[0] = 0;
  local_20 = (undefined4 *)0x0;
  local_20 = (undefined4 *)calloc(100,8);
  if (local_20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 0;
  local_20[1] = 0;
  printStructLine(local_20);
  *(undefined4 **)local_10 = local_20;
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack64 [2];
  undefined8 local_30;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)&local_30;
  local_18 = (undefined8 *)&local_30;
  local_30 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_30 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_20 = 0;
  *(undefined4 *)((long)&local_30 + lVar2 * -0x10 + 4) = 0;
  auStack64[lVar2 * 0x1ffffffffffffffe] = 0x418f8c;
  printStructLine(local_20,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  *(undefined8 **)local_10 = local_20;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  void *local_30;
  void *local_28;
  undefined4 *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (undefined4 *)0x0;
  local_20 = (undefined4 *)calloc(100,8);
  if (local_20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 0;
  local_20[1] = 0;
  printStructLine(local_20);
  *(undefined4 **)local_10 = local_20;
  local_28 = *local_18;
  free(local_28);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_68b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_68b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_68b_goodB2GSink(void)

{
  free(CWE401_Memory_Leak__twoIntsStruct_malloc_68_goodB2GData);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_68_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_calloc_68_badData = puVar1;
  CWE401_Memory_Leak__twoIntsStruct_calloc_68b_badSink();
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x419168;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  CWE401_Memory_Leak__twoIntsStruct_calloc_68_goodG2BData = local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41917d;
  CWE401_Memory_Leak__twoIntsStruct_calloc_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_calloc_68_goodB2GData = puVar1;
  CWE401_Memory_Leak__twoIntsStruct_calloc_68b_goodB2GSink();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_65_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_realloc_65b_badSink(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  code *local_10;
  
  local_10 = CWE401_Memory_Leak__twoIntsStruct_realloc_65b_goodG2BSink;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  apuStack32[1] = &local_10 + lVar2 * 0x1ffffffffffffffe;
  *(undefined4 *)apuStack32[1] = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4192e2;
  printStructLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4192ef;
  (*local_10)(apuStack32[1],uParm2,apuStack32[1]);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_realloc_65b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67b_badSink(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined4 *puStack32;
  undefined8 *local_18;
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x419446;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  local_18 = local_10;
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41945a;
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_66b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_66b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_66b_goodB2GSink(long lParm1)

{
  free(*(void **)(lParm1 + 0x10));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4195f8;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x419604;
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54d_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54e_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54d_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54e_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54d_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54e_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_53b_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_realloc_53c_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_53b_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_realloc_53c_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_53b_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_realloc_53c_goodB2GSink(uParm1);
  return;
}


undefined4 * badSource(void *pvParm1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc(pvParm1,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_42_bad(void)

{
  badSource(0);
  return;
}


/* WARNING: Type propagation algorithm not settling */

undefined8 * goodG2BSource(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined8 local_20;
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_20 + lVar2 * -0x10 + 4) = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x4197fd;
  local_20 = uParm1;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return local_10;
}


void goodG2B(void)

{
  goodG2BSource(0);
  return;
}


undefined4 * goodB2GSource(void *pvParm1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc(pvParm1,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = (void *)goodB2GSource(0);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE401_Memory_Leak__twoIntsStruct_malloc_32_bad(void)

{
  undefined8 local_30 [2];
  undefined4 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = local_30;
  local_18 = local_30;
  local_30[0] = 0;
  local_20 = (undefined4 *)0x0;
  local_20 = (undefined4 *)malloc(800);
  if (local_20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 0;
  local_20[1] = 0;
  printStructLine(local_20);
  *(undefined4 **)local_10 = local_20;
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack64 [2];
  undefined8 local_30;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)&local_30;
  local_18 = (undefined8 *)&local_30;
  local_30 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_30 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_20 = 0;
  *(undefined4 *)((long)&local_30 + lVar2 * -0x10 + 4) = 0;
  auStack64[lVar2 * 0x1ffffffffffffffe] = 0x4199cb;
  printStructLine(local_20,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  *(undefined8 **)local_10 = local_20;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  void *local_30;
  void *local_28;
  undefined4 *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (undefined4 *)0x0;
  local_20 = (undefined4 *)malloc(800);
  if (local_20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 0;
  local_20[1] = 0;
  printStructLine(local_20);
  *(undefined4 **)local_10 = local_20;
  local_28 = *local_18;
  free(local_28);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_52_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_realloc_52b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x419b58;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x419b64;
  CWE401_Memory_Leak__twoIntsStruct_realloc_52b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_realloc_52b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54b_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54c_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54b_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54c_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54b_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54c_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_54c_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_calloc_54d_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_54c_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_calloc_54d_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_54c_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_calloc_54d_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_63_bad(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)calloc(100,8);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__twoIntsStruct_calloc_63b_badSink(&local_10);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x419d4d;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x419d59;
  CWE401_Memory_Leak__twoIntsStruct_calloc_63b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)calloc(100,8);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__twoIntsStruct_calloc_63b_goodB2GSink(&local_10);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_63_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_01_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x419e98;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_51_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_51b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x419fe1;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x419fed;
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_51b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_51b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_51_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_53d_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_53d_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_53d_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_66_bad(void)

{
  undefined local_38 [16];
  undefined4 *local_28;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)malloc(800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  local_28 = local_10;
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_66b_badSink(local_38);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack64;
  undefined local_38 [8];
  undefined4 auStack48 [2];
  undefined4 *local_28;
  undefined4 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = auStack48 + lVar2 * 0x3ffffffffffffffc;
  *local_10 = 0;
  auStack48[lVar2 * 0x3ffffffffffffffc + 1] = 0;
  (&uStack64)[lVar2 * 0x1ffffffffffffffe] = 0x41a167;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  local_28 = local_10;
  (&uStack64)[lVar2 * 0x1ffffffffffffffe] = 0x41a17b;
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_66b_goodG2BSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  undefined4 *local_28;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)malloc(800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  local_28 = local_10;
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_66b_goodB2GSink(local_38);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_66_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_64_bad(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)malloc(800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__twoIntsStruct_malloc_64b_badSink(&local_10);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41a2c4;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41a2d0;
  CWE401_Memory_Leak__twoIntsStruct_malloc_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)malloc(800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__twoIntsStruct_malloc_64b_goodB2GSink(&local_10);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_53c_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_calloc_53d_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_53c_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_calloc_53d_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_53c_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_calloc_53d_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_14_bad(void)

{
  undefined4 *puVar1;
  
  if (globalFive == 5) {
    puVar1 = (undefined4 *)realloc((void *)0x0,800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalFive == 5) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41a57e;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x41a525;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41a5f2;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_61_bad(void)

{
  CWE401_Memory_Leak__twoIntsStruct_calloc_61b_badSource(0);
  return;
}


void goodG2B(void)

{
  CWE401_Memory_Leak__twoIntsStruct_calloc_61b_goodG2BSource(0);
  return;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = (void *)CWE401_Memory_Leak__twoIntsStruct_calloc_61b_goodB2GSource(0);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_61_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52b_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52c_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52b_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52c_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52b_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52c_goodB2GSink(uParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE401_Memory_Leak__twoIntsStruct_realloc_32_bad(void)

{
  undefined8 local_30 [2];
  undefined4 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = local_30;
  local_18 = local_30;
  local_30[0] = 0;
  local_20 = (undefined4 *)0x0;
  local_20 = (undefined4 *)realloc((void *)0x0,800);
  if (local_20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 0;
  local_20[1] = 0;
  printStructLine(local_20);
  *(undefined4 **)local_10 = local_20;
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack64 [2];
  undefined8 local_30;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)&local_30;
  local_18 = (undefined8 *)&local_30;
  local_30 = 0;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_30 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_20 = 0;
  *(undefined4 *)((long)&local_30 + lVar2 * -0x10 + 4) = 0;
  auStack64[lVar2 * 0x1ffffffffffffffe] = 0x41a808;
  printStructLine(local_20,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  *(undefined8 **)local_10 = local_20;
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  void *local_30;
  void *local_28;
  undefined4 *local_20;
  void **local_18;
  void **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (void *)0x0;
  local_20 = (undefined4 *)0x0;
  local_20 = (undefined4 *)realloc((void *)0x0,800);
  if (local_20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 0;
  local_20[1] = 0;
  printStructLine(local_20);
  *(undefined4 **)local_10 = local_20;
  local_28 = *local_18;
  free(local_28);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_32_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_45_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_45_badData = puVar1;
  badSink();
  return;
}


void goodG2BSink(void)

{
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41a9c5;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_45_goodG2BData = local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41a9da;
  goodG2BSink();
  return;
}


void goodB2GSink(void)

{
  free(CWE401_Memory_Leak__struct_twoIntsStruct_calloc_45_goodB2GData);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_45_goodB2GData = puVar1;
  goodB2GSink();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_45_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_04_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0041ab40) */

void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0041abe3) */
/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41ac46;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41acb8;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_31_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined4 local_20 [4];
  undefined4 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = local_20 + lVar2 * 0x3ffffffffffffffc;
  *local_10 = 0;
  local_20[lVar2 * 0x3ffffffffffffffc + 1] = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x41adb1;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41af17;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41af23;
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_06_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0041b06e) */

void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0041b119) */
/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41b17c;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41b1ef;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_67b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_67b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_67b_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
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


void CWE401_Memory_Leak__twoIntsStruct_calloc_08_bad(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)calloc(100,8);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    printStructLine(puVar2);
  }
  staticReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x41b40e;
  iVar2 = staticReturnsFalse();
  if (iVar2 == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x41b475;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    uStack32 = 0x41b41c;
    printLine("Benign, fixed string");
  }
  *(undefined8 *)(puVar4 + -8) = 0x41b47f;
  staticReturnsTrue();
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x41b49b;
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x41b4f6;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  *(undefined8 *)(puVar4 + -8) = 0x41b500;
  staticReturnsTrue();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_64_bad(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)realloc((void *)0x0,800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__twoIntsStruct_realloc_64b_badSink(&local_10);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41b5fe;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41b60a;
  CWE401_Memory_Leak__twoIntsStruct_realloc_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)realloc((void *)0x0,800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__twoIntsStruct_realloc_64b_goodB2GSink(&local_10);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_34_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined4 auStack32 [4];
  undefined4 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = auStack32 + lVar2 * 0x3ffffffffffffffc;
  *local_10 = 0;
  auStack32[lVar2 * 0x3ffffffffffffffc + 1] = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x41b75b;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53c_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53d_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53c_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53d_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53c_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53d_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_67_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_malloc_67b_badSink(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined4 *puStack32;
  undefined8 *local_18;
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41b915;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  local_18 = local_10;
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41b929;
  CWE401_Memory_Leak__twoIntsStruct_malloc_67b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_malloc_67b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41ba70;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41ba7c;
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_54_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_67b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_67b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_67b_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_65b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_65b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_65b_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_22_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_22_goodB2G1Sink(void *pvParm1)

{
  if (CWE401_Memory_Leak__twoIntsStruct_malloc_22_goodB2G1Global == 0) {
    free(pvParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_22_goodB2G2Sink(void *pvParm1)

{
  if (CWE401_Memory_Leak__twoIntsStruct_malloc_22_goodB2G2Global != 0) {
    free(pvParm1);
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_22_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_31_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined4 local_20 [4];
  undefined4 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = local_20 + lVar2 * 0x3ffffffffffffffc;
  *local_10 = 0;
  local_20[lVar2 * 0x3ffffffffffffffc + 1] = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x41bca2;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_31_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_03_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41beb8;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41bf21;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_09_bad(void)

{
  undefined4 *puVar1;
  
  if (GLOBAL_CONST_TRUE != 0) {
    puVar1 = (undefined4 *)calloc(100,8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41c129;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x41c0d0;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41c19c;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_65b_badSink(puVar1,uParm2,puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  code *local_10;
  
  local_10 = CWE401_Memory_Leak__struct_twoIntsStruct_malloc_65b_goodG2BSink;
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  apuStack32[1] = &local_10 + lVar2 * 0x1ffffffffffffffe;
  *(undefined4 *)apuStack32[1] = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41c2a2;
  printStructLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41c2af;
  (*local_10)(apuStack32[1],uParm2,apuStack32[1]);
  return;
}


void goodB2G(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_65b_goodB2GSink(puVar1,uParm2,puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_65_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_15_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41c4ad;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41c518;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_54b_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_calloc_54c_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_54b_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_calloc_54c_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_54b_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_calloc_54c_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_65b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_65b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_65b_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53c_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53d_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53c_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53d_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53c_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53d_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_67_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_realloc_67b_badSink(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined4 *puStack32;
  undefined8 *local_18;
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41c6e8;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  local_18 = local_10;
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41c6fc;
  CWE401_Memory_Leak__twoIntsStruct_realloc_67b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_realloc_67b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_09_bad(void)

{
  undefined4 *puVar1;
  
  if (GLOBAL_CONST_TRUE != 0) {
    puVar1 = (undefined4 *)realloc((void *)0x0,800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41c963;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x41c90a;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41c9d6;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_14_bad(void)

{
  undefined4 *puVar1;
  
  if (globalFive == 5) {
    puVar1 = (undefined4 *)calloc(100,8);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalFive == 5) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (globalFive == 5) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41cbe4;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x41cb8b;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (globalFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41cc58;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_64_bad(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)realloc((void *)0x0,800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_64b_badSink(&local_10);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41cd56;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41cd62;
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_64b_goodG2BSink(&local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)realloc((void *)0x0,800);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0;
  local_10[1] = 0;
  printStructLine(local_10);
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_64b_goodB2GSink(&local_10);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_64_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_22_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_22_goodB2G1Sink(void *pvParm1)

{
  if (CWE401_Memory_Leak__twoIntsStruct_realloc_22_goodB2G1Global == 0) {
    free(pvParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_22_goodB2G2Sink(void *pvParm1)

{
  if (CWE401_Memory_Leak__twoIntsStruct_realloc_22_goodB2G2Global != 0) {
    free(pvParm1);
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_22_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_65b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_65b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_65b_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_22_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_malloc_22_badGlobal = 1;
  CWE401_Memory_Leak__twoIntsStruct_malloc_22_badSink(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_malloc_22_goodB2G1Global = 0;
  CWE401_Memory_Leak__twoIntsStruct_malloc_22_goodB2G1Sink(puVar1);
  return;
}


void goodB2G2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_malloc_22_goodB2G2Global = 1;
  CWE401_Memory_Leak__twoIntsStruct_malloc_22_goodB2G2Sink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41d01a;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  CWE401_Memory_Leak__twoIntsStruct_malloc_22_goodG2BGlobal = 1;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41d030;
  CWE401_Memory_Leak__twoIntsStruct_malloc_22_goodG2BSink(local_10);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_15_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)realloc((void *)0x0,800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41d1e6;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41d251;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


undefined4 * badSource(void *pvParm1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc(pvParm1,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_42_bad(void)

{
  badSource(0);
  return;
}


/* WARNING: Type propagation algorithm not settling */

undefined8 * goodG2BSource(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined8 local_20;
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_20 + lVar2 * -0x10 + 4) = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x41d361;
  local_20 = uParm1;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return local_10;
}


void goodG2B(void)

{
  goodG2BSource(0);
  return;
}


undefined4 * goodB2GSource(void *pvParm1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc(pvParm1,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return puVar1;
}


void goodB2G(void)

{
  void *__ptr;
  
  __ptr = (void *)goodB2GSource(0);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_42_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_54e_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_54e_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_54e_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_54d_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_malloc_54e_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_54d_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_malloc_54e_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_54d_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__twoIntsStruct_malloc_54e_goodB2GSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_05_bad(void)

{
  undefined4 *puVar1;
  
  if (staticTrue != 0) {
    puVar1 = (undefined4 *)malloc(800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticFalse == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFalse == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41d66f;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x41d616;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (staticTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41d6e2;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41d7d7;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41d7e3;
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_41_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  badSink(puVar1);
  return;
}


void goodG2BSink(void)

{
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41d936;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41d942;
  goodG2BSink(local_10);
  return;
}


void goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53b_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53c_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53b_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53c_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53b_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_53c_goodB2GSink(uParm1);
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


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_08_bad(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)realloc((void *)0x0,800);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    printStructLine(puVar2);
  }
  staticReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x41dbd3;
  iVar2 = staticReturnsFalse();
  if (iVar2 == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x41dc3a;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    uStack32 = 0x41dbe1;
    printLine("Benign, fixed string");
  }
  *(undefined8 *)(puVar4 + -8) = 0x41dc44;
  staticReturnsTrue();
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x41dc60;
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x41dcbb;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  *(undefined8 *)(puVar4 + -8) = 0x41dcc5;
  staticReturnsTrue();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_68b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_68b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_68b_goodB2GSink(void)

{
  free(CWE401_Memory_Leak__struct_twoIntsStruct_realloc_68_goodB2GData);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52c_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52c_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_52c_goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_04_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0041de2d) */

void goodB2G1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodB2G2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)calloc(100,8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    __ptr[1] = 0;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0041ded5) */
/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41df38;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41dfaa;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
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


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_08_bad(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)calloc(100,8);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    printStructLine(puVar2);
  }
  staticReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)calloc(100,8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    free(local_10);
  }
  return;
}


void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x41e183;
  iVar2 = staticReturnsFalse();
  if (iVar2 == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x41e1ea;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    uStack32 = 0x41e191;
    printLine("Benign, fixed string");
  }
  *(undefined8 *)(puVar4 + -8) = 0x41e1f4;
  staticReturnsTrue();
  return;
}


void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack32;
  undefined auStack24 [8];
  undefined8 *local_10;
  
  puVar4 = auStack24;
  local_10 = (undefined8 *)0x0;
  uStack32 = 0x41e210;
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    puVar4 = auStack24 + lVar3 * -0x10;
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar3 * -0x10 + 4) = 0;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x41e26b;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  *(undefined8 *)(puVar4 + -8) = 0x41e275;
  staticReturnsTrue();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_52b_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_52c_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_52b_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_52c_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_52b_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_52c_goodB2GSink(uParm1);
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_41_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  badSink(puVar1);
  return;
}


void goodG2BSink(void)

{
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41e3d3;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41e3df;
  goodG2BSink(local_10);
  return;
}


void goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_realloc_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_68_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_68_badData = puVar1;
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_68b_badSink();
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41e548;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_68_goodG2BData = local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41e55d;
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_68b_goodG2BSink();
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_68_goodB2GData = puVar1;
  CWE401_Memory_Leak__struct_twoIntsStruct_malloc_68b_goodB2GSink();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_68_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_63b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_63b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_63b_goodB2GSink(void **ppvParm1)

{
  free(*ppvParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_34_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 auStack48 [2];
  undefined4 auStack32 [4];
  undefined4 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = auStack32 + lVar2 * 0x3ffffffffffffffc;
  *local_10 = 0;
  auStack32[lVar2 * 0x3ffffffffffffffc + 1] = 0;
  auStack48[lVar2 * 0x1ffffffffffffffe] = 0x41e6f8;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void goodB2G(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(800);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0;
  __ptr[1] = 0;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_34_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_52_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_calloc_52b_badSink(puVar1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41e85c;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41e868;
  CWE401_Memory_Leak__twoIntsStruct_calloc_52b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__twoIntsStruct_calloc_52b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_calloc_52_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_66b_badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_66b_goodG2BSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_malloc_66b_goodB2GSink(long lParm1)

{
  free(*(void **)(lParm1 + 0x10));
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67b_badSink(puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined4 *puStack32;
  undefined8 *local_18;
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41ea0b;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  local_18 = local_10;
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41ea1f;
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67b_goodG2BSink(local_10);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)calloc(100,8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67b_goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_calloc_67_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_05_bad(void)

{
  undefined4 *puVar1;
  
  if (staticTrue != 0) {
    puVar1 = (undefined4 *)realloc((void *)0x0,800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticFalse == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined4 *)realloc((void *)0x0,800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (staticTrue != 0) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFalse == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41ec84;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x41ec2b;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (staticTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41ecf7;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_41_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  badSink(puVar1);
  return;
}


void goodG2BSink(void)

{
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41ee07;
  printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41ee13;
  goodG2BSink(local_10);
  return;
}


void goodB2GSink(void *pvParm1)

{
  free(pvParm1);
  return;
}


void goodB2G(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)realloc((void *)0x0,800);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  printStructLine(puVar1);
  goodB2GSink(puVar1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_41_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_09_bad(void)

{
  undefined4 *puVar1;
  
  if (GLOBAL_CONST_TRUE != 0) {
    puVar1 = (undefined4 *)malloc(800);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0;
    puVar1[1] = 0;
    printStructLine(puVar1);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_FALSE == 0) {
    free(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined4 *)malloc(800);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0;
    local_10[1] = 0;
    printStructLine(local_10);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    free(local_10);
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B1(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41f077;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  else {
    apuStack32[0] = (undefined8 *)0x41f01e;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Type propagation algorithm not settling */

void goodG2B2(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = (undefined8 *)(&local_10 + lVar2 * 0x1ffffffffffffffe);
    *(undefined4 *)local_10 = 0;
    *(undefined4 *)((long)&local_10 + lVar2 * -0x10 + 4) = 0;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41f0ea;
    printStructLine(local_10,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void CWE401_Memory_Leak__twoIntsStruct_malloc_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53b_badSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53c_badSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53b_goodG2BSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53c_goodG2BSink(uParm1);
  return;
}


void CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53b_goodB2GSink(undefined8 uParm1)

{
  CWE401_Memory_Leak__struct_twoIntsStruct_realloc_53c_goodB2GSink(uParm1);
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
  printf((char *)(double)fParm1,&DAT_0042780d);
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
  printf(pcParm1,&DAT_0042782a);
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
    __isoc99_sscanf(lVar1,&DAT_00427838,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_00427840,&local_14);
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

