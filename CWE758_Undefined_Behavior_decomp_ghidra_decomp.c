
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00638ff8;
  if (PTR___gmon_start___00638ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400900(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00639010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00639018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00639020)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00639028)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00639030)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00639038)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00639040)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00639048)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00639050)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00639058)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00639060)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_00639068)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00639070)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_00639078)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_00639080)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_00639088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_00639090)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_00639098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_006390a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_006390a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_006390b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_006390b8)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___00638ff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400ab7) */
/* WARNING: Removing unreachable block (ram,0x00400ac1) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400af4) */
/* WARNING: Removing unreachable block (ram,0x00400afe) */

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


/* WARNING: Removing unreachable block (ram,0x00400b44) */
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
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_12_good();");
  CWE758_Undefined_Behavior__int_malloc_use_12_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_14_good();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_14_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_02_good();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_02_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_14_good();");
  CWE758_Undefined_Behavior__struct_alloca_use_14_good();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_09_good();");
  CWE758_Undefined_Behavior__int_alloca_use_09_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_10_good();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_10_good();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_08_good();");
  CWE758_Undefined_Behavior__long_alloca_use_08_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_10_good();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_10_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_07_good();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_07_good();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_06_good();");
  CWE758_Undefined_Behavior__long_malloc_use_06_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_01_good();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_01_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_12_good();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_12_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_15_good();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_15_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_05_good();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_05_good();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_15_good();");
  CWE758_Undefined_Behavior__long_alloca_use_15_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_18_good();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_18_good();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_16_good();");
  CWE758_Undefined_Behavior__char_malloc_use_16_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_10_good();");
  CWE758_Undefined_Behavior__struct_malloc_use_10_good();
  printLine("Calling CWE758_Undefined_Behavior__no_return_01_good();");
  CWE758_Undefined_Behavior__no_return_01_good();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_12_good();");
  CWE758_Undefined_Behavior__char_malloc_use_12_good();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_11_good();");
  CWE758_Undefined_Behavior__int_malloc_use_11_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_16_good();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_16_good();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_02_good();");
  CWE758_Undefined_Behavior__long_alloca_use_02_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_10_good();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_10_good();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_04_good();");
  CWE758_Undefined_Behavior__int_alloca_use_04_good();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_13_good();");
  CWE758_Undefined_Behavior__char_alloca_use_13_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_11_good();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_11_good();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_12_good();");
  CWE758_Undefined_Behavior__long_malloc_use_12_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_09_good();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_09_good();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_11_good();");
  CWE758_Undefined_Behavior__char_alloca_use_11_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_06_good();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_06_good();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_16_good();");
  CWE758_Undefined_Behavior__int_alloca_use_16_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_10_good();");
  CWE758_Undefined_Behavior__struct_alloca_use_10_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_09_good();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_09_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_03_good();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_03_good();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_07_good();");
  CWE758_Undefined_Behavior__char_malloc_use_07_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_07_good();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_07_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_16_good();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_16_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_06_good();");
  CWE758_Undefined_Behavior__struct_alloca_use_06_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_02_good();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_02_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_11_good();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_11_good();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_09_good();");
  CWE758_Undefined_Behavior__long_alloca_use_09_good();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_05_good();");
  CWE758_Undefined_Behavior__int_alloca_use_05_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_09_good();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_09_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_03_good();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_03_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_07_good();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_07_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_07_good();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_07_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_13_good();");
  CWE758_Undefined_Behavior__struct_alloca_use_13_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_14_good();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_14_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_06_good();");
  CWE758_Undefined_Behavior__struct_malloc_use_06_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_09_good();");
  CWE758_Undefined_Behavior__struct_alloca_use_09_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_14_good();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_14_good();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_03_good();");
  CWE758_Undefined_Behavior__char_alloca_use_03_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_15_good();");
  CWE758_Undefined_Behavior__struct_alloca_use_15_good();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_02_good();");
  CWE758_Undefined_Behavior__char_alloca_use_02_good();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_03_good();");
  CWE758_Undefined_Behavior__char_malloc_use_03_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_15_good();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_15_good();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_04_good();");
  CWE758_Undefined_Behavior__char_malloc_use_04_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_03_good();");
  CWE758_Undefined_Behavior__struct_alloca_use_03_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_01_good();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_01_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_16_good();");
  CWE758_Undefined_Behavior__struct_malloc_use_16_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_04_good();");
  CWE758_Undefined_Behavior__struct_alloca_use_04_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_13_good();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_13_good();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_14_good();");
  CWE758_Undefined_Behavior__long_malloc_use_14_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_13_good();");
  CWE758_Undefined_Behavior__struct_malloc_use_13_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_03_good();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_03_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_03_good();");
  CWE758_Undefined_Behavior__struct_malloc_use_03_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_02_good();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_02_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_18_good();");
  CWE758_Undefined_Behavior__struct_malloc_use_18_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_07_good();");
  CWE758_Undefined_Behavior__struct_alloca_use_07_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_17_good();");
  CWE758_Undefined_Behavior__struct_malloc_use_17_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_07_good();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_07_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_06_good();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_06_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_15_good();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_15_good();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_07_good();");
  CWE758_Undefined_Behavior__int_malloc_use_07_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_01_good();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_01_good();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_13_good();");
  CWE758_Undefined_Behavior__long_malloc_use_13_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_05_good();");
  CWE758_Undefined_Behavior__struct_alloca_use_05_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_13_good();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_13_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_13_good();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_13_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_16_good();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_16_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_16_good();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_16_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_11_good();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_11_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_01_good();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_01_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_05_good();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_05_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_15_good();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_15_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_01_good();");
  CWE758_Undefined_Behavior__struct_malloc_use_01_good();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_14_good();");
  CWE758_Undefined_Behavior__char_malloc_use_14_good();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_17_good();");
  CWE758_Undefined_Behavior__long_malloc_use_17_good();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_16_good();");
  CWE758_Undefined_Behavior__int_malloc_use_16_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_08_good();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_08_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_02_good();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_02_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_11_good();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_11_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_15_good();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_15_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_18_good();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_18_good();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_04_good();");
  CWE758_Undefined_Behavior__char_alloca_use_04_good();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_12_good();");
  CWE758_Undefined_Behavior__long_alloca_use_12_good();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_04_good();");
  CWE758_Undefined_Behavior__int_malloc_use_04_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_11_good();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_11_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_15_good();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_15_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_06_good();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_06_good();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_06_good();");
  CWE758_Undefined_Behavior__char_malloc_use_06_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_08_good();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_08_good();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_13_good();");
  CWE758_Undefined_Behavior__char_malloc_use_13_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_10_good();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_10_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_08_good();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_08_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_14_good();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_14_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_07_good();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_07_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_05_good();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_05_good();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_08_good();");
  CWE758_Undefined_Behavior__int_malloc_use_08_good();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_05_good();");
  CWE758_Undefined_Behavior__char_malloc_use_05_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_04_good();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_04_good();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_03_good();");
  CWE758_Undefined_Behavior__long_malloc_use_03_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_18_good();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_18_good();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_04_good();");
  CWE758_Undefined_Behavior__long_malloc_use_04_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_07_good();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_07_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_13_good();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_13_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_18_good();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_18_good();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_16_good();");
  CWE758_Undefined_Behavior__long_alloca_use_16_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_15_good();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_15_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_11_good();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_11_good();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_15_good();");
  CWE758_Undefined_Behavior__char_malloc_use_15_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_07_good();");
  CWE758_Undefined_Behavior__struct_malloc_use_07_good();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_10_good();");
  CWE758_Undefined_Behavior__char_alloca_use_10_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_10_good();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_10_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_06_good();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_06_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_14_good();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_14_good();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_03_good();");
  CWE758_Undefined_Behavior__int_malloc_use_03_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_13_good();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_13_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_16_good();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_16_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_12_good();");
  CWE758_Undefined_Behavior__struct_malloc_use_12_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_17_good();");
  CWE758_Undefined_Behavior__struct_alloca_use_17_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_18_good();");
  CWE758_Undefined_Behavior__struct_alloca_use_18_good();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_06_good();");
  CWE758_Undefined_Behavior__int_alloca_use_06_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_10_good();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_10_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_18_good();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_18_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_08_good();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_08_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_08_good();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_08_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_05_good();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_05_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_14_good();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_14_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_03_good();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_03_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_01_good();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_01_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_03_good();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_03_good();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_14_good();");
  CWE758_Undefined_Behavior__int_malloc_use_14_good();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_10_good();");
  CWE758_Undefined_Behavior__long_alloca_use_10_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_17_good();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_17_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_01_good();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_01_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_03_good();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_03_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_17_good();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_17_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_12_good();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_12_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_02_good();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_02_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_08_good();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_08_good();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_11_good();");
  CWE758_Undefined_Behavior__long_alloca_use_11_good();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_18_good();");
  CWE758_Undefined_Behavior__long_alloca_use_18_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_12_good();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_12_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_09_good();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_09_good();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_17_good();");
  CWE758_Undefined_Behavior__char_malloc_use_17_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_04_good();");
  CWE758_Undefined_Behavior__struct_malloc_use_04_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_16_good();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_16_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_13_good();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_13_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_04_good();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_04_good();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_14_good();");
  CWE758_Undefined_Behavior__long_alloca_use_14_good();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_08_good();");
  CWE758_Undefined_Behavior__int_alloca_use_08_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_12_good();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_12_good();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_07_good();");
  CWE758_Undefined_Behavior__int_alloca_use_07_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_17_good();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_17_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_17_good();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_17_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_08_good();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_08_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_09_good();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_09_good();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_03_good();");
  CWE758_Undefined_Behavior__int_alloca_use_03_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_04_good();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_04_good();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_05_good();");
  CWE758_Undefined_Behavior__long_alloca_use_05_good();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_11_good();");
  CWE758_Undefined_Behavior__int_alloca_use_11_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_04_good();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_04_good();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_02_good();");
  CWE758_Undefined_Behavior__char_malloc_use_02_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_10_good();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_10_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_05_good();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_05_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_12_good();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_12_good();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_07_good();");
  CWE758_Undefined_Behavior__long_alloca_use_07_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_10_good();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_10_good();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_18_good();");
  CWE758_Undefined_Behavior__int_malloc_use_18_good();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_05_good();");
  CWE758_Undefined_Behavior__long_malloc_use_05_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_06_good();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_06_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_02_good();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_02_good();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_01_good();");
  CWE758_Undefined_Behavior__long_malloc_use_01_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_08_good();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_08_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_12_good();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_12_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_14_good();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_14_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_12_good();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_12_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_11_good();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_11_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_04_good();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_04_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_15_good();");
  CWE758_Undefined_Behavior__struct_malloc_use_15_good();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_10_good();");
  CWE758_Undefined_Behavior__int_alloca_use_10_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_18_good();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_18_good();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_15_good();");
  CWE758_Undefined_Behavior__char_alloca_use_15_good();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_15_good();");
  CWE758_Undefined_Behavior__int_malloc_use_15_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_09_good();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_09_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_09_good();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_09_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_17_good();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_17_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_09_good();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_09_good();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_06_good();");
  CWE758_Undefined_Behavior__long_alloca_use_06_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_05_good();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_05_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_05_good();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_05_good();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_06_good();");
  CWE758_Undefined_Behavior__char_alloca_use_06_good();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_17_good();");
  CWE758_Undefined_Behavior__long_alloca_use_17_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_06_good();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_06_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_18_good();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_18_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_01_good();");
  CWE758_Undefined_Behavior__struct_alloca_use_01_good();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_01_good();");
  CWE758_Undefined_Behavior__char_alloca_use_01_good();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_05_good();");
  CWE758_Undefined_Behavior__int_malloc_use_05_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_06_good();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_06_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_13_good();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_13_good();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_16_good();");
  CWE758_Undefined_Behavior__char_alloca_use_16_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_01_good();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_01_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_02_good();");
  CWE758_Undefined_Behavior__struct_alloca_use_02_good();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_12_good();");
  CWE758_Undefined_Behavior__int_alloca_use_12_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_02_good();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_02_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_12_good();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_12_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_17_good();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_17_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_11_good();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_11_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_02_good();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_02_good();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_17_good();");
  CWE758_Undefined_Behavior__int_malloc_use_17_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_03_good();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_03_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_16_good();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_16_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_12_good();");
  CWE758_Undefined_Behavior__struct_alloca_use_12_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_15_good();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_15_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_16_good();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_16_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_05_good();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_05_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_16_good();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_16_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_13_good();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_13_good();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_04_good();");
  CWE758_Undefined_Behavior__long_alloca_use_04_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_14_good();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_14_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_16_good();");
  CWE758_Undefined_Behavior__struct_alloca_use_16_good();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_07_good();");
  CWE758_Undefined_Behavior__long_malloc_use_07_good();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_10_good();");
  CWE758_Undefined_Behavior__int_malloc_use_10_good();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_18_good();");
  CWE758_Undefined_Behavior__long_malloc_use_18_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_10_good();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_10_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_04_good();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_04_good();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_09_good();");
  CWE758_Undefined_Behavior__char_alloca_use_09_good();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_11_good();");
  CWE758_Undefined_Behavior__long_malloc_use_11_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_05_good();");
  CWE758_Undefined_Behavior__struct_malloc_use_05_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_03_good();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_03_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_07_good();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_07_good();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_18_good();");
  CWE758_Undefined_Behavior__char_malloc_use_18_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_12_good();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_12_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_14_good();");
  CWE758_Undefined_Behavior__struct_malloc_use_14_good();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_09_good();");
  CWE758_Undefined_Behavior__char_malloc_use_09_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_09_good();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_09_good();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_01_good();");
  CWE758_Undefined_Behavior__int_malloc_use_01_good();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_08_good();");
  CWE758_Undefined_Behavior__char_malloc_use_08_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_15_good();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_15_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_02_good();");
  CWE758_Undefined_Behavior__struct_malloc_use_02_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_11_good();");
  CWE758_Undefined_Behavior__struct_alloca_use_11_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_01_good();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_01_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_16_good();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_16_good();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_01_good();");
  CWE758_Undefined_Behavior__char_malloc_use_01_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_01_good();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_01_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_03_good();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_03_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_06_good();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_06_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_18_good();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_18_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_06_good();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_06_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_05_good();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_05_good();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_10_good();");
  CWE758_Undefined_Behavior__char_malloc_use_10_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_13_good();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_13_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_02_good();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_02_good();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_13_good();");
  CWE758_Undefined_Behavior__int_alloca_use_13_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_08_good();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_08_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_11_good();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_11_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_10_good();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_10_good();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_14_good();");
  CWE758_Undefined_Behavior__int_alloca_use_14_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_04_good();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_04_good();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_01_good();");
  CWE758_Undefined_Behavior__int_alloca_use_01_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_18_good();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_18_good();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_09_good();");
  CWE758_Undefined_Behavior__int_malloc_use_09_good();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_10_good();");
  CWE758_Undefined_Behavior__long_malloc_use_10_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_08_good();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_08_good();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_08_good();");
  CWE758_Undefined_Behavior__char_alloca_use_08_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_17_good();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_17_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_02_good();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_02_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_09_good();");
  CWE758_Undefined_Behavior__struct_malloc_use_09_good();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_09_good();");
  CWE758_Undefined_Behavior__long_malloc_use_09_good();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_17_good();");
  CWE758_Undefined_Behavior__char_alloca_use_17_good();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_07_good();");
  CWE758_Undefined_Behavior__char_alloca_use_07_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_11_good();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_11_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_14_good();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_14_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_05_good();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_05_good();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_17_good();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_17_good();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_05_good();");
  CWE758_Undefined_Behavior__char_alloca_use_05_good();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_16_good();");
  CWE758_Undefined_Behavior__long_malloc_use_16_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_14_good();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_14_good();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_13_good();");
  CWE758_Undefined_Behavior__long_alloca_use_13_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_13_good();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_13_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_01_good();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_01_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_06_good();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_06_good();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_08_good();");
  CWE758_Undefined_Behavior__long_malloc_use_08_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_08_good();");
  CWE758_Undefined_Behavior__struct_alloca_use_08_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_17_good();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_17_good();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_02_good();");
  CWE758_Undefined_Behavior__int_malloc_use_02_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_12_good();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_12_good();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_15_good();");
  CWE758_Undefined_Behavior__int_alloca_use_15_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_03_good();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_03_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_18_good();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_18_good();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_11_good();");
  CWE758_Undefined_Behavior__char_malloc_use_11_good();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_03_good();");
  CWE758_Undefined_Behavior__long_alloca_use_03_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_17_good();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_17_good();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_04_good();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_04_good();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_02_good();");
  CWE758_Undefined_Behavior__long_malloc_use_02_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_11_good();");
  CWE758_Undefined_Behavior__struct_malloc_use_11_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_07_good();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_07_good();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_18_good();");
  CWE758_Undefined_Behavior__char_alloca_use_18_good();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_13_good();");
  CWE758_Undefined_Behavior__int_malloc_use_13_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_09_good();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_09_good();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_02_good();");
  CWE758_Undefined_Behavior__int_alloca_use_02_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_07_good();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_07_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_04_good();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_04_good();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_17_good();");
  CWE758_Undefined_Behavior__int_alloca_use_17_good();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_01_good();");
  CWE758_Undefined_Behavior__long_alloca_use_01_good();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_06_good();");
  CWE758_Undefined_Behavior__int_malloc_use_06_good();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_12_good();");
  CWE758_Undefined_Behavior__char_alloca_use_12_good();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_15_good();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_15_good();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_15_good();");
  CWE758_Undefined_Behavior__long_malloc_use_15_good();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_18_good();");
  CWE758_Undefined_Behavior__int_alloca_use_18_good();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_08_good();");
  CWE758_Undefined_Behavior__struct_malloc_use_08_good();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_14_good();");
  CWE758_Undefined_Behavior__char_alloca_use_14_good();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_04_good();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_04_good();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_12_bad();");
  CWE758_Undefined_Behavior__int_malloc_use_12_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_14_bad();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_14_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_02_bad();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_02_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_14_bad();");
  CWE758_Undefined_Behavior__struct_alloca_use_14_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_09_bad();");
  CWE758_Undefined_Behavior__int_alloca_use_09_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_10_bad();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_10_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_08_bad();");
  CWE758_Undefined_Behavior__long_alloca_use_08_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_10_bad();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_10_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_07_bad();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_07_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_06_bad();");
  CWE758_Undefined_Behavior__long_malloc_use_06_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_01_bad();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_01_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_12_bad();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_12_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_15_bad();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_15_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_05_bad();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_05_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_15_bad();");
  CWE758_Undefined_Behavior__long_alloca_use_15_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_18_bad();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_18_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_16_bad();");
  CWE758_Undefined_Behavior__char_malloc_use_16_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_10_bad();");
  CWE758_Undefined_Behavior__struct_malloc_use_10_bad();
  printLine("Calling CWE758_Undefined_Behavior__no_return_01_bad();");
  CWE758_Undefined_Behavior__no_return_01_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_12_bad();");
  CWE758_Undefined_Behavior__char_malloc_use_12_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_11_bad();");
  CWE758_Undefined_Behavior__int_malloc_use_11_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_16_bad();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_16_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_02_bad();");
  CWE758_Undefined_Behavior__long_alloca_use_02_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_10_bad();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_10_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_04_bad();");
  CWE758_Undefined_Behavior__int_alloca_use_04_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_13_bad();");
  CWE758_Undefined_Behavior__char_alloca_use_13_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_11_bad();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_11_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_12_bad();");
  CWE758_Undefined_Behavior__long_malloc_use_12_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_09_bad();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_09_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_11_bad();");
  CWE758_Undefined_Behavior__char_alloca_use_11_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_06_bad();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_06_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_16_bad();");
  CWE758_Undefined_Behavior__int_alloca_use_16_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_10_bad();");
  CWE758_Undefined_Behavior__struct_alloca_use_10_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_09_bad();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_09_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_03_bad();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_03_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_07_bad();");
  CWE758_Undefined_Behavior__char_malloc_use_07_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_07_bad();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_07_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_16_bad();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_16_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_06_bad();");
  CWE758_Undefined_Behavior__struct_alloca_use_06_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_02_bad();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_02_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_11_bad();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_11_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_09_bad();");
  CWE758_Undefined_Behavior__long_alloca_use_09_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_05_bad();");
  CWE758_Undefined_Behavior__int_alloca_use_05_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_09_bad();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_09_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_03_bad();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_03_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_07_bad();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_07_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_07_bad();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_07_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_13_bad();");
  CWE758_Undefined_Behavior__struct_alloca_use_13_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_14_bad();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_14_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_06_bad();");
  CWE758_Undefined_Behavior__struct_malloc_use_06_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_09_bad();");
  CWE758_Undefined_Behavior__struct_alloca_use_09_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_14_bad();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_14_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_03_bad();");
  CWE758_Undefined_Behavior__char_alloca_use_03_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_15_bad();");
  CWE758_Undefined_Behavior__struct_alloca_use_15_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_02_bad();");
  CWE758_Undefined_Behavior__char_alloca_use_02_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_03_bad();");
  CWE758_Undefined_Behavior__char_malloc_use_03_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_15_bad();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_15_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_04_bad();");
  CWE758_Undefined_Behavior__char_malloc_use_04_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_03_bad();");
  CWE758_Undefined_Behavior__struct_alloca_use_03_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_01_bad();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_01_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_16_bad();");
  CWE758_Undefined_Behavior__struct_malloc_use_16_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_04_bad();");
  CWE758_Undefined_Behavior__struct_alloca_use_04_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_13_bad();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_13_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_14_bad();");
  CWE758_Undefined_Behavior__long_malloc_use_14_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_13_bad();");
  CWE758_Undefined_Behavior__struct_malloc_use_13_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_03_bad();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_03_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_03_bad();");
  CWE758_Undefined_Behavior__struct_malloc_use_03_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_02_bad();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_02_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_18_bad();");
  CWE758_Undefined_Behavior__struct_malloc_use_18_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_07_bad();");
  CWE758_Undefined_Behavior__struct_alloca_use_07_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_17_bad();");
  CWE758_Undefined_Behavior__struct_malloc_use_17_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_07_bad();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_07_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_06_bad();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_06_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_15_bad();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_15_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_07_bad();");
  CWE758_Undefined_Behavior__int_malloc_use_07_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_01_bad();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_01_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_13_bad();");
  CWE758_Undefined_Behavior__long_malloc_use_13_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_05_bad();");
  CWE758_Undefined_Behavior__struct_alloca_use_05_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_13_bad();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_13_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_13_bad();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_13_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_16_bad();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_16_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_16_bad();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_16_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_11_bad();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_11_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_01_bad();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_01_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_05_bad();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_05_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_15_bad();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_15_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_01_bad();");
  CWE758_Undefined_Behavior__struct_malloc_use_01_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_14_bad();");
  CWE758_Undefined_Behavior__char_malloc_use_14_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_17_bad();");
  CWE758_Undefined_Behavior__long_malloc_use_17_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_16_bad();");
  CWE758_Undefined_Behavior__int_malloc_use_16_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_08_bad();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_08_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_02_bad();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_02_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_11_bad();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_11_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_15_bad();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_15_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_18_bad();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_18_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_04_bad();");
  CWE758_Undefined_Behavior__char_alloca_use_04_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_12_bad();");
  CWE758_Undefined_Behavior__long_alloca_use_12_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_04_bad();");
  CWE758_Undefined_Behavior__int_malloc_use_04_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_11_bad();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_11_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_15_bad();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_15_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_06_bad();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_06_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_06_bad();");
  CWE758_Undefined_Behavior__char_malloc_use_06_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_08_bad();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_08_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_13_bad();");
  CWE758_Undefined_Behavior__char_malloc_use_13_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_10_bad();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_10_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_08_bad();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_08_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_14_bad();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_14_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_07_bad();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_07_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_05_bad();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_05_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_08_bad();");
  CWE758_Undefined_Behavior__int_malloc_use_08_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_05_bad();");
  CWE758_Undefined_Behavior__char_malloc_use_05_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_04_bad();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_04_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_03_bad();");
  CWE758_Undefined_Behavior__long_malloc_use_03_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_18_bad();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_18_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_04_bad();");
  CWE758_Undefined_Behavior__long_malloc_use_04_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_07_bad();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_07_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_13_bad();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_13_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_18_bad();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_18_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_16_bad();");
  CWE758_Undefined_Behavior__long_alloca_use_16_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_15_bad();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_15_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_11_bad();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_11_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_15_bad();");
  CWE758_Undefined_Behavior__char_malloc_use_15_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_07_bad();");
  CWE758_Undefined_Behavior__struct_malloc_use_07_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_10_bad();");
  CWE758_Undefined_Behavior__char_alloca_use_10_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_10_bad();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_10_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_06_bad();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_06_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_14_bad();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_14_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_03_bad();");
  CWE758_Undefined_Behavior__int_malloc_use_03_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_13_bad();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_13_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_16_bad();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_16_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_12_bad();");
  CWE758_Undefined_Behavior__struct_malloc_use_12_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_17_bad();");
  CWE758_Undefined_Behavior__struct_alloca_use_17_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_18_bad();");
  CWE758_Undefined_Behavior__struct_alloca_use_18_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_06_bad();");
  CWE758_Undefined_Behavior__int_alloca_use_06_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_10_bad();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_10_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_18_bad();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_18_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_08_bad();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_08_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_08_bad();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_08_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_05_bad();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_05_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_14_bad();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_14_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_03_bad();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_03_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_01_bad();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_01_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_03_bad();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_03_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_14_bad();");
  CWE758_Undefined_Behavior__int_malloc_use_14_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_10_bad();");
  CWE758_Undefined_Behavior__long_alloca_use_10_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_17_bad();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_17_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_01_bad();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_01_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_03_bad();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_03_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_17_bad();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_17_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_12_bad();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_12_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_02_bad();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_02_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_08_bad();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_08_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_11_bad();");
  CWE758_Undefined_Behavior__long_alloca_use_11_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_18_bad();");
  CWE758_Undefined_Behavior__long_alloca_use_18_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_12_bad();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_12_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_09_bad();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_09_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_17_bad();");
  CWE758_Undefined_Behavior__char_malloc_use_17_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_04_bad();");
  CWE758_Undefined_Behavior__struct_malloc_use_04_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_16_bad();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_16_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_13_bad();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_13_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_04_bad();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_04_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_14_bad();");
  CWE758_Undefined_Behavior__long_alloca_use_14_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_08_bad();");
  CWE758_Undefined_Behavior__int_alloca_use_08_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_12_bad();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_12_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_07_bad();");
  CWE758_Undefined_Behavior__int_alloca_use_07_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_17_bad();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_17_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_17_bad();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_17_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_08_bad();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_08_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_09_bad();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_09_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_03_bad();");
  CWE758_Undefined_Behavior__int_alloca_use_03_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_04_bad();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_04_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_05_bad();");
  CWE758_Undefined_Behavior__long_alloca_use_05_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_11_bad();");
  CWE758_Undefined_Behavior__int_alloca_use_11_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_04_bad();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_04_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_02_bad();");
  CWE758_Undefined_Behavior__char_malloc_use_02_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_10_bad();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_10_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_05_bad();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_05_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_12_bad();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_12_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_07_bad();");
  CWE758_Undefined_Behavior__long_alloca_use_07_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_10_bad();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_10_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_18_bad();");
  CWE758_Undefined_Behavior__int_malloc_use_18_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_05_bad();");
  CWE758_Undefined_Behavior__long_malloc_use_05_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_06_bad();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_06_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_02_bad();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_02_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_01_bad();");
  CWE758_Undefined_Behavior__long_malloc_use_01_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_08_bad();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_08_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_12_bad();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_12_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_14_bad();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_14_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_12_bad();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_12_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_11_bad();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_11_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_04_bad();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_04_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_15_bad();");
  CWE758_Undefined_Behavior__struct_malloc_use_15_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_10_bad();");
  CWE758_Undefined_Behavior__int_alloca_use_10_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_18_bad();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_18_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_15_bad();");
  CWE758_Undefined_Behavior__char_alloca_use_15_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_15_bad();");
  CWE758_Undefined_Behavior__int_malloc_use_15_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_09_bad();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_09_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_09_bad();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_09_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_17_bad();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_17_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_09_bad();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_09_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_06_bad();");
  CWE758_Undefined_Behavior__long_alloca_use_06_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_05_bad();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_05_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_05_bad();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_05_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_06_bad();");
  CWE758_Undefined_Behavior__char_alloca_use_06_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_17_bad();");
  CWE758_Undefined_Behavior__long_alloca_use_17_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_06_bad();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_06_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_18_bad();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_18_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_01_bad();");
  CWE758_Undefined_Behavior__struct_alloca_use_01_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_01_bad();");
  CWE758_Undefined_Behavior__char_alloca_use_01_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_05_bad();");
  CWE758_Undefined_Behavior__int_malloc_use_05_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_06_bad();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_06_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_13_bad();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_13_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_16_bad();");
  CWE758_Undefined_Behavior__char_alloca_use_16_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_01_bad();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_01_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_02_bad();");
  CWE758_Undefined_Behavior__struct_alloca_use_02_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_12_bad();");
  CWE758_Undefined_Behavior__int_alloca_use_12_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_02_bad();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_02_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_12_bad();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_12_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_17_bad();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_17_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_11_bad();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_11_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_02_bad();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_02_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_17_bad();");
  CWE758_Undefined_Behavior__int_malloc_use_17_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_03_bad();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_03_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_16_bad();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_16_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_12_bad();");
  CWE758_Undefined_Behavior__struct_alloca_use_12_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_15_bad();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_15_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_16_bad();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_16_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_05_bad();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_05_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_16_bad();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_16_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_13_bad();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_13_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_04_bad();");
  CWE758_Undefined_Behavior__long_alloca_use_04_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_14_bad();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_14_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_16_bad();");
  CWE758_Undefined_Behavior__struct_alloca_use_16_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_07_bad();");
  CWE758_Undefined_Behavior__long_malloc_use_07_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_10_bad();");
  CWE758_Undefined_Behavior__int_malloc_use_10_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_18_bad();");
  CWE758_Undefined_Behavior__long_malloc_use_18_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_10_bad();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_10_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_04_bad();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_04_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_09_bad();");
  CWE758_Undefined_Behavior__char_alloca_use_09_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_11_bad();");
  CWE758_Undefined_Behavior__long_malloc_use_11_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_05_bad();");
  CWE758_Undefined_Behavior__struct_malloc_use_05_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_03_bad();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_03_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_07_bad();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_07_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_18_bad();");
  CWE758_Undefined_Behavior__char_malloc_use_18_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_12_bad();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_12_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_14_bad();");
  CWE758_Undefined_Behavior__struct_malloc_use_14_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_09_bad();");
  CWE758_Undefined_Behavior__char_malloc_use_09_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_09_bad();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_09_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_01_bad();");
  CWE758_Undefined_Behavior__int_malloc_use_01_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_08_bad();");
  CWE758_Undefined_Behavior__char_malloc_use_08_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_15_bad();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_15_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_02_bad();");
  CWE758_Undefined_Behavior__struct_malloc_use_02_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_11_bad();");
  CWE758_Undefined_Behavior__struct_alloca_use_11_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_01_bad();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_01_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_16_bad();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_16_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_01_bad();");
  CWE758_Undefined_Behavior__char_malloc_use_01_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_01_bad();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_01_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_03_bad();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_03_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_06_bad();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_06_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_18_bad();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_18_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_06_bad();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_06_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_05_bad();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_05_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_10_bad();");
  CWE758_Undefined_Behavior__char_malloc_use_10_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_13_bad();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_13_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_02_bad();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_02_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_13_bad();");
  CWE758_Undefined_Behavior__int_alloca_use_13_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_08_bad();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_08_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_11_bad();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_11_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_10_bad();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_10_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_14_bad();");
  CWE758_Undefined_Behavior__int_alloca_use_14_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_04_bad();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_04_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_01_bad();");
  CWE758_Undefined_Behavior__int_alloca_use_01_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_18_bad();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_18_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_09_bad();");
  CWE758_Undefined_Behavior__int_malloc_use_09_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_10_bad();");
  CWE758_Undefined_Behavior__long_malloc_use_10_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_08_bad();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_08_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_08_bad();");
  CWE758_Undefined_Behavior__char_alloca_use_08_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_17_bad();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_17_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_malloc_use_02_bad();");
  CWE758_Undefined_Behavior__int64_t_malloc_use_02_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_09_bad();");
  CWE758_Undefined_Behavior__struct_malloc_use_09_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_09_bad();");
  CWE758_Undefined_Behavior__long_malloc_use_09_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_17_bad();");
  CWE758_Undefined_Behavior__char_alloca_use_17_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_07_bad();");
  CWE758_Undefined_Behavior__char_alloca_use_07_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_11_bad();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_11_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_14_bad();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_14_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_malloc_use_05_bad();");
  CWE758_Undefined_Behavior__char_pointer_malloc_use_05_bad();
  printLine("Calling CWE758_Undefined_Behavior__int64_t_alloca_use_17_bad();");
  CWE758_Undefined_Behavior__int64_t_alloca_use_17_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_05_bad();");
  CWE758_Undefined_Behavior__char_alloca_use_05_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_16_bad();");
  CWE758_Undefined_Behavior__long_malloc_use_16_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_14_bad();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_14_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_13_bad();");
  CWE758_Undefined_Behavior__long_alloca_use_13_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_13_bad();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_13_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_01_bad();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_01_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_06_bad();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_06_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_08_bad();");
  CWE758_Undefined_Behavior__long_malloc_use_08_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_alloca_use_08_bad();");
  CWE758_Undefined_Behavior__struct_alloca_use_08_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_17_bad();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_17_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_02_bad();");
  CWE758_Undefined_Behavior__int_malloc_use_02_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_12_bad();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_12_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_15_bad();");
  CWE758_Undefined_Behavior__int_alloca_use_15_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_alloca_use_03_bad();");
  CWE758_Undefined_Behavior__double_pointer_alloca_use_03_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_18_bad();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_18_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_malloc_use_11_bad();");
  CWE758_Undefined_Behavior__char_malloc_use_11_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_03_bad();");
  CWE758_Undefined_Behavior__long_alloca_use_03_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_17_bad();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_17_bad();
  printLine("Calling CWE758_Undefined_Behavior__double_pointer_malloc_use_04_bad();");
  CWE758_Undefined_Behavior__double_pointer_malloc_use_04_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_02_bad();");
  CWE758_Undefined_Behavior__long_malloc_use_02_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_11_bad();");
  CWE758_Undefined_Behavior__struct_malloc_use_11_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_malloc_use_07_bad();");
  CWE758_Undefined_Behavior__struct_pointer_malloc_use_07_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_18_bad();");
  CWE758_Undefined_Behavior__char_alloca_use_18_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_13_bad();");
  CWE758_Undefined_Behavior__int_malloc_use_13_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_09_bad();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_09_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_02_bad();");
  CWE758_Undefined_Behavior__int_alloca_use_02_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_alloca_use_07_bad();");
  CWE758_Undefined_Behavior__int_pointer_alloca_use_07_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_pointer_alloca_use_04_bad();");
  CWE758_Undefined_Behavior__struct_pointer_alloca_use_04_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_17_bad();");
  CWE758_Undefined_Behavior__int_alloca_use_17_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_alloca_use_01_bad();");
  CWE758_Undefined_Behavior__long_alloca_use_01_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_malloc_use_06_bad();");
  CWE758_Undefined_Behavior__int_malloc_use_06_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_12_bad();");
  CWE758_Undefined_Behavior__char_alloca_use_12_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_pointer_alloca_use_15_bad();");
  CWE758_Undefined_Behavior__char_pointer_alloca_use_15_bad();
  printLine("Calling CWE758_Undefined_Behavior__long_malloc_use_15_bad();");
  CWE758_Undefined_Behavior__long_malloc_use_15_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_alloca_use_18_bad();");
  CWE758_Undefined_Behavior__int_alloca_use_18_bad();
  printLine("Calling CWE758_Undefined_Behavior__struct_malloc_use_08_bad();");
  CWE758_Undefined_Behavior__struct_malloc_use_08_bad();
  printLine("Calling CWE758_Undefined_Behavior__char_alloca_use_14_bad();");
  CWE758_Undefined_Behavior__char_alloca_use_14_bad();
  printLine("Calling CWE758_Undefined_Behavior__int_pointer_malloc_use_04_bad();");
  CWE758_Undefined_Behavior__int_pointer_malloc_use_04_bad();
  return 0;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_05_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  if (staticTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x403ebd;
    printLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [3];
  char *local_18;
  undefined8 **local_10;
  
  if (staticFalse == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    local_18 = "string";
    *local_10 = (undefined8 *)0x42abf1;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x403f3b;
    printLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x403edb;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  char *apcStack48 [4];
  char **local_10;
  
  if (staticTrue != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apcStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apcStack48[3] = "string";
    *local_10 = "string";
    apcStack48[2] = *local_10;
    apcStack48[lVar1 * 0x1ffffffffffffffe] = 0x403fad;
    printLine(apcStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_04_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = *local_10;
  apuStack48[2] = *apuStack48[3];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40402e;
  printDoubleLine(apuStack48[2],uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404041) */

void good1(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x40408e;
  local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  if (local_18 != (undefined8 *)0x0) {
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack64[2] = *local_20;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x4040df;
    printDoubleLine(apuStack64[2]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x4040a3;
  exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x404134;
  local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  if (local_18 != (undefined8 *)0x0) {
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack64[2] = *local_20;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x404185;
    printDoubleLine(apuStack64[2]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x404149;
  exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_15_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printLine(uVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x42ac15;
  printLine(*__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x42ac15;
  printLine(*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_13_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
  }
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(4);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    *__ptr = puVar1;
    printIntLine((ulong)**__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(4);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    *__ptr = puVar1;
    printIntLine((ulong)**__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_13_good(void)

{
  good1();
  good2();
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


void CWE758_Undefined_Behavior__struct_malloc_use_08_bad(void)

{
  ulong uVar1;
  int iVar2;
  ulong *__ptr;
  
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
  }
  return;
}


void good1(void)

{
  ulong uVar1;
  int iVar2;
  ulong *__ptr;
  
  iVar2 = staticReturnsFalse();
  if (iVar2 == 0) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  ulong uVar1;
  int iVar2;
  ulong *__ptr;
  
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_17_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) break;
    uVar1 = *__ptr;
    free(__ptr);
    printLongLongLine(uVar1);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good1(void)

{
  undefined8 *__ptr;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) break;
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_17_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_12_bad(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *apuStack64 [4];
  uint **local_20;
  uint *local_18;
  uint **local_10;
  
  apuStack64[0] = (uint *)0x4046e5;
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_20 = apuStack64 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x404778;
    apuStack64[3] = (uint *)malloc(4,*(undefined *)(apuStack64 + lVar3 * 0x1ffffffffffffffe));
    if (apuStack64[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x40478d;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar3 * 0x1ffffffffffffffe));
    }
    *apuStack64[3] = 5;
    *local_20 = apuStack64[3];
    apuStack64[2] = *local_20;
    uVar1 = *apuStack64[2];
    apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x4047ba;
    printIntLine((ulong)uVar1);
  }
  else {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar3 * 0x1ffffffffffffffe + 2;
    local_18 = *local_10;
    uVar1 = *local_18;
    apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x404735;
    printIntLine((ulong)uVar1);
  }
  return;
}


void good1(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *apuStack64 [3];
  uint **local_28;
  uint *local_20;
  uint *local_18;
  uint **local_10;
  
  apuStack64[0] = (uint *)0x4047ce;
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_28 = apuStack64 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x404899;
    apuStack64[2] = (uint *)malloc(4,*(undefined *)(apuStack64 + lVar3 * 0x1ffffffffffffffe));
    if (apuStack64[2] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x4048ae;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar3 * 0x1ffffffffffffffe));
    }
    *apuStack64[2] = 5;
    *local_28 = apuStack64[2];
    apuStack64[1] = *local_28;
    uVar1 = *apuStack64[1];
    apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x4048db;
    printIntLine((ulong)uVar1);
  }
  else {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x404814;
    local_18 = (uint *)malloc(4,*(undefined *)(apuStack64 + lVar3 * 0x1ffffffffffffffe));
    if (local_18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x404829;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar3 * 0x1ffffffffffffffe));
    }
    *local_18 = 5;
    *local_10 = local_18;
    local_20 = *local_10;
    uVar1 = *local_20;
    apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x404856;
    printIntLine((ulong)uVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_12_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_01_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x404940;
  printLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  char *apcStack48 [4];
  char **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apcStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apcStack48[3] = "string";
  *local_10 = "string";
  apcStack48[2] = *local_10;
  apcStack48[lVar1 * 0x1ffffffffffffffe] = 0x4049a8;
  printLine(apcStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_01_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_04_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  char local_11;
  undefined8 ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x1f);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_11 = *(char *)local_10;
  (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x404a14;
  printHexCharLine((ulong)(uint)(int)local_11,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404a27) */

void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_11 = 5;
  *(char *)local_10 = 5;
  local_12 = *(char *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x404a8a;
  printHexCharLine((ulong)(uint)(int)local_12);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_11 = 5;
  *(char *)local_10 = 5;
  local_12 = *(char *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x404af4;
  printHexCharLine((ulong)(uint)(int)local_12);
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_07_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  char local_11;
  undefined8 ****local_10;
  
  if (staticFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x1f);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_11 = *(char *)local_10;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x404b6c;
    printHexCharLine((ulong)(uint)(int)local_11,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ***local_10;
  
  if (staticFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_11 = 5;
    *(char *)local_10 = 5;
    local_12 = *(char *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x404be4;
    printHexCharLine((ulong)(uint)(int)local_12);
  }
  else {
    uStack32 = 0x404b8b;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ****local_10;
  
  if (staticFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_11 = 5;
    *(char *)local_10 = 5;
    local_12 = *(char *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x404c50;
    printHexCharLine((ulong)(uint)(int)local_12);
  }
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_13_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    uVar1 = *(uint *)local_18;
    (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x404ccb;
    printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
    uVar1 = *(uint *)((long)local_18 + 4);
    (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x404cd9;
    printIntLine((ulong)uVar1);
  }
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x404d3b;
    apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x404d50;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    apuStack48[3][1] = 6;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x404d88;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack48[2][1];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x404d96;
    printIntLine((ulong)uVar1);
  }
  else {
    apuStack48[0] = (uint *)0x404cf8;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x404ded;
    apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x404e02;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    apuStack48[3][1] = 6;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x404e3a;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack48[2][1];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x404e48;
    printIntLine((ulong)uVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_11_bad(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *__ptr;
  
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLongLongLine(uVar1);
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_02_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printLongLongLine(uVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_14_bad(void)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  if (globalFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (undefined8 *)*__ptr;
    free(__ptr);
    printDoubleLine(*puVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  if (globalFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (undefined8 *)malloc(8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar1;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  if (globalFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (undefined8 *)malloc(8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar1;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_14_good(void)

{
  good1();
  good2();
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


void CWE758_Undefined_Behavior__int64_t_alloca_use_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  apuStack32[0] = (undefined8 *)0x4052cd;
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar3 * 0x1ffffffffffffffe] = 0x40531c;
    printLongLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  apuStack48[0] = (undefined8 *)0x405330;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40539e;
    printLongLongLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x40533e;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  apuStack48[0] = (undefined8 *)0x4053b2;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x405414;
    printLongLongLine(apuStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_08_good(void)

{
  good1();
  good2();
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


void CWE758_Undefined_Behavior__char_pointer_malloc_use_08_bad(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *__ptr;
  
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLine(uVar1);
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x42aceb;
    printLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x42aceb;
    printLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_10_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  if (globalTrue != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLongLongLine(uVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  if (globalFalse == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  if (globalTrue != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_17_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  undefined *puVar4;
  undefined auStack40 [8];
  uint *local_20;
  uint **local_18;
  int local_c;
  
  local_c = 0;
  puVar4 = auStack40;
  while (local_c < 1) {
    auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar2 / ZEXT816(0x10),0) * -0x10;
    local_18 = (uint **)((ulong)(puVar4 + lVar3 + 0xf) & 0xfffffffffffffff0);
    local_20 = *local_18;
    uVar1 = *local_20;
    *(undefined8 *)(puVar4 + lVar3 + -8) = 0x40574b;
    printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
    local_c = local_c + 1;
    puVar4 = puVar4 + lVar3;
  }
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint **ppuVar3;
  uint *local_28;
  uint *local_20;
  uint **local_18;
  int local_c;
  
  local_c = 0;
  ppuVar3 = &local_28;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0) * -0x10;
    local_18 = (uint **)((ulong)((undefined *)ppuVar3 + lVar2 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)((undefined *)ppuVar3 + lVar2 + -8) = 0x4057a9;
    local_20 = (uint *)malloc(4,((undefined *)ppuVar3)[lVar2 + -8]);
    if (local_20 == (uint *)0x0) break;
    *local_20 = 5;
    *local_18 = local_20;
    local_28 = *local_18;
    uVar1 = *local_28;
    *(undefined8 *)((undefined *)ppuVar3 + lVar2 + -8) = 0x4057eb;
    printIntLine((ulong)uVar1);
    local_c = local_c + 1;
    ppuVar3 = (uint **)((undefined *)ppuVar3 + lVar2);
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((undefined *)ppuVar3 + lVar2 + -8) = 0x4057be;
  exit(0xffffffff,((undefined *)ppuVar3)[lVar2 + -8]);
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_17_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_14_bad(void)

{
  char cVar1;
  char *__ptr;
  
  if (globalFive == 5) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    cVar1 = *__ptr;
    free(__ptr);
    printHexCharLine((ulong)(uint)(int)cVar1);
  }
  return;
}


void good1(void)

{
  char *__ptr;
  
  if (globalFive == 5) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  char *__ptr;
  
  if (globalFive == 5) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_03_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = *__ptr;
  free(__ptr);
  printIntLine((ulong)*puVar1);
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(4);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  *__ptr = puVar1;
  printIntLine((ulong)**__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(4);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  *__ptr = puVar1;
  printIntLine((ulong)**__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_06_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x405b12;
  printLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405b26) */

void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x405b90;
  printLongLine(apuStack48[2]);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x405c02;
  printLongLine(apuStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_05_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  if (staticTrue != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLine(uVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  if (staticFalse == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x42ad4a;
    printLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  if (staticTrue != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x42ad4a;
    printLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  int iVar3;
  long lVar4;
  uint *puStack32;
  uint ***local_18;
  uint ****local_10;
  
  puStack32 = (uint *)0x405d7e;
  iVar3 = globalReturnsTrue();
  if (iVar3 != 0) {
    auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar4 = SUB168(auVar2 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar4 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    uVar1 = *(uint *)local_18;
    (&puStack32)[lVar4 * 0x1ffffffffffffffe] = 0x405dce;
    printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *apuStack48 [4];
  uint **local_10;
  
  apuStack48[0] = (uint *)0x405de2;
  iVar2 = globalReturnsFalse();
  if (iVar2 == 0) {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x405e33;
    apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar3 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x405e48;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar3 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x405e75;
    printIntLine((ulong)uVar1);
  }
  else {
    apuStack48[0] = (uint *)0x405df0;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *apuStack48 [4];
  uint **local_10;
  
  apuStack48[0] = (uint *)0x405e89;
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x405ecf;
    apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar3 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x405ee4;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar3 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x405f11;
    printIntLine((ulong)uVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_02_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  uVar1 = *(uint *)local_18;
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x405f81;
  printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x405fc9;
  apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x405fde;
    exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  }
  *apuStack48[3] = 5;
  *local_10 = apuStack48[3];
  apuStack48[2] = *local_10;
  uVar1 = *apuStack48[2];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40600b;
  printIntLine((ulong)uVar1);
  return;
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x406053;
  apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x406068;
    exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  }
  *apuStack48[3] = 5;
  *local_10 = apuStack48[3];
  apuStack48[2] = *local_10;
  uVar1 = *apuStack48[2];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x406095;
  printIntLine((ulong)uVar1);
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_18_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = *__ptr;
  free(__ptr);
  printIntLine((ulong)*puVar1);
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(4);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  *__ptr = puVar1;
  printIntLine((ulong)**__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_18_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_01_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printLongLongLine(uVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_01_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_03_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  uVar1 = *(uint *)local_18;
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x4062a0;
  printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  uVar1 = *(uint *)((long)local_18 + 4);
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x4062ae;
  printIntLine((ulong)uVar1);
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4062f6;
  apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40630b;
    exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  }
  *apuStack48[3] = 5;
  apuStack48[3][1] = 6;
  *local_10 = apuStack48[3];
  apuStack48[2] = *local_10;
  uVar1 = *apuStack48[2];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x406343;
  printIntLine((ulong)uVar1);
  uVar1 = apuStack48[2][1];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x406351;
  printIntLine((ulong)uVar1);
  return;
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x406399;
  apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4063ae;
    exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  }
  *apuStack48[3] = 5;
  apuStack48[3][1] = 6;
  *local_10 = apuStack48[3];
  apuStack48[2] = *local_10;
  uVar1 = *apuStack48[2];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4063e6;
  printIntLine((ulong)uVar1);
  uVar1 = apuStack48[2][1];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4063f4;
  printIntLine((ulong)uVar1);
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_05_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  uint local_14;
  undefined8 ****local_10;
  
  if (staticTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x22);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_14 = *(uint *)local_10;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x406469;
    printIntLine((ulong)local_14,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ***local_10;
  
  if (staticFalse == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_14 = 5;
    *(uint *)local_10 = 5;
    local_18 = *(uint *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x4064e0;
    printIntLine((ulong)local_18);
  }
  else {
    uStack32 = 0x406487;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ****local_10;
  
  if (staticTrue != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_14 = 5;
    *(uint *)local_10 = 5;
    local_18 = *(uint *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40654b;
    printIntLine((ulong)local_18);
  }
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_09_bad(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
  }
  return;
}


void good1(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  if (GLOBAL_CONST_FALSE == 0) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_06_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = *local_10;
  apuStack48[2] = *apuStack48[3];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40673f;
  printDoubleLine(apuStack48[2],uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406753) */

void good1(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x4067a0;
  local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  if (local_18 != (undefined8 *)0x0) {
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack64[2] = *local_20;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x4067f1;
    printDoubleLine(apuStack64[2]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x4067b5;
  exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x406847;
  local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  if (local_18 != (undefined8 *)0x0) {
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack64[2] = *local_20;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x406898;
    printDoubleLine(apuStack64[2]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x40685c;
  exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_04_bad(void)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*__ptr;
    free(__ptr);
    printDoubleLine(*puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00406923) */

void good1(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar1;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good2(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar1;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_18_bad(void)

{
  uint uVar1;
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printIntLine((ulong)uVar1);
  return;
}


void good1(void)

{
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printIntLine((ulong)*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_18_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_04_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  __ptr = (uint **)malloc(8);
  if (__ptr != (uint **)0x0) {
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00406b8a) */

void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(4);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = 5;
    *__ptr = puVar1;
    printIntLine((ulong)**__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(4);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = 5;
    *__ptr = puVar1;
    printIntLine((ulong)**__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_10_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  if (globalTrue != 0) {
    auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    uVar1 = *(uint *)local_18;
    (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x406d11;
    printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (globalFalse == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x406d72;
    apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x406d87;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x406db4;
    printIntLine((ulong)uVar1);
  }
  else {
    apuStack48[0] = (uint *)0x406d2f;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (globalTrue != 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x406e0a;
    apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x406e1f;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x406e4c;
    printIntLine((ulong)uVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_18_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  uVar1 = *(uint *)local_18;
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x406ebd;
  printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  uVar1 = *(uint *)((long)local_18 + 4);
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x406ecb;
  printIntLine((ulong)uVar1);
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x406f14;
  apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x406f29;
    exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  }
  *apuStack48[3] = 5;
  apuStack48[3][1] = 6;
  *local_10 = apuStack48[3];
  apuStack48[2] = *local_10;
  uVar1 = *apuStack48[2];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x406f61;
  printIntLine((ulong)uVar1);
  uVar1 = apuStack48[2][1];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x406f6f;
  printIntLine((ulong)uVar1);
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_18_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_15_bad(void)

{
  uint uVar1;
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printIntLine((ulong)uVar1);
  return;
}


void good1(void)

{
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printIntLine((ulong)*__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printIntLine((ulong)*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_12_bad(void)

{
  int iVar1;
  uint **__ptr;
  uint *puVar2;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (uint *)malloc(4);
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 5;
    *__ptr = puVar2;
    printIntLine((ulong)**__ptr);
    free(__ptr);
  }
  else {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar2);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint **__ptr;
  uint *puVar2;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (uint *)malloc(4);
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 5;
    *__ptr = puVar2;
    printIntLine((ulong)**__ptr);
    free(__ptr);
  }
  else {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (uint *)malloc(4);
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 5;
    *__ptr = puVar2;
    printIntLine((ulong)**__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_12_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_04_bad(void)

{
  char cVar1;
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr != (char *)0x0) {
    cVar1 = *__ptr;
    free(__ptr);
    printHexCharLine((ulong)(uint)(int)cVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x004072e6) */

void good1(void)

{
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr != (char *)0x0) {
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good2(void)

{
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr != (char *)0x0) {
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__char_malloc_use_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_13_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
  }
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(8);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    puVar1[1] = 6;
    *__ptr = puVar1;
    puVar1 = *__ptr;
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(8);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    puVar1[1] = 6;
    *__ptr = puVar1;
    puVar1 = *__ptr;
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_15_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  ulong *puStack32;
  ulong ***local_18;
  ulong ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x4075eb;
  printIntLine((ulong)local_18 & 0xffffffff,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x4075f5;
  printIntLine((ulong)local_18 >> 0x20);
  return;
}


void good1(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  local_18 = 1;
  uStack20 = 2;
  *local_10 = 0x200000001;
  auStack48[1] = *local_10;
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x407662;
  printIntLine(auStack48[1] & 0xffffffff);
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40766c;
  printIntLine(auStack48[1] >> 0x20);
  return;
}


void good2(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  local_18 = 1;
  uStack20 = 2;
  *local_10 = 0x200000001;
  auStack48[1] = *local_10;
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x4076d9;
  printIntLine(auStack48[1] & 0xffffffff);
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x4076e3;
  printIntLine(auStack48[1] >> 0x20);
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_12_bad(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *apuStack64 [4];
  uint **local_20;
  uint *local_18;
  uint **local_10;
  
  apuStack64[0] = (uint *)0x407712;
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_20 = apuStack64 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x4077b3;
    apuStack64[3] = (uint *)malloc(8,*(undefined *)(apuStack64 + lVar3 * 0x1ffffffffffffffe));
    if (apuStack64[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x4077c8;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar3 * 0x1ffffffffffffffe));
    }
    *apuStack64[3] = 5;
    apuStack64[3][1] = 6;
    *local_20 = apuStack64[3];
    apuStack64[2] = *local_20;
    uVar1 = *apuStack64[2];
    apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x407800;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack64[2][1];
    apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x40780e;
    printIntLine((ulong)uVar1);
  }
  else {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar3 * 0x1ffffffffffffffe + 2;
    local_18 = *local_10;
    uVar1 = *local_18;
    apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x407762;
    printIntLine((ulong)uVar1);
    uVar1 = local_18[1];
    apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x407770;
    printIntLine((ulong)uVar1);
  }
  return;
}


void good1(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *apuStack64 [3];
  uint **local_28;
  uint *local_20;
  uint *local_18;
  uint **local_10;
  
  apuStack64[0] = (uint *)0x407822;
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_28 = apuStack64 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x407906;
    apuStack64[2] = (uint *)malloc(8,*(undefined *)(apuStack64 + lVar3 * 0x1ffffffffffffffe));
    if (apuStack64[2] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x40791b;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar3 * 0x1ffffffffffffffe));
    }
    *apuStack64[2] = 5;
    apuStack64[2][1] = 6;
    *local_28 = apuStack64[2];
    apuStack64[1] = *local_28;
    uVar1 = *apuStack64[1];
    apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x407953;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack64[1][1];
    apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x407961;
    printIntLine((ulong)uVar1);
  }
  else {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x407868;
    local_18 = (uint *)malloc(8,*(undefined *)(apuStack64 + lVar3 * 0x1ffffffffffffffe));
    if (local_18 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x40787d;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar3 * 0x1ffffffffffffffe));
    }
    *local_18 = 5;
    local_18[1] = 6;
    *local_10 = local_18;
    local_20 = *local_10;
    uVar1 = *local_20;
    apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x4078b5;
    printIntLine((ulong)uVar1);
    uVar1 = local_20[1];
    apuStack64[lVar3 * 0x1ffffffffffffffe] = 0x4078c3;
    printIntLine((ulong)uVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_12_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_07_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  if (staticFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4079d1;
    printLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [3];
  char *local_18;
  undefined8 **local_10;
  
  if (staticFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    local_18 = "string";
    *local_10 = (undefined8 *)0x42ae47;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x407a50;
    printLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x4079f0;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  char *apcStack48 [4];
  char **local_10;
  
  if (staticFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apcStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apcStack48[3] = "string";
    *local_10 = "string";
    apcStack48[2] = *local_10;
    apcStack48[lVar1 * 0x1ffffffffffffffe] = 0x407ac3;
    printLine(apcStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_14_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  if (globalFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x407b3d;
    printLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (globalFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x407bbc;
    printLongLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x407b5c;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (globalFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x407c2f;
    printLongLine(apuStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_17_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) break;
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) break;
    puVar1 = (uint *)malloc(4);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    *__ptr = puVar1;
    printIntLine((ulong)**__ptr);
    free(__ptr);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_17_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_04_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    uVar1 = *__ptr;
    free(__ptr);
    printLongLongLine(uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00407db9) */

void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_13_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = *local_10;
    apuStack48[2] = *apuStack48[3];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x407f05;
    printDoubleLine(apuStack48[2],uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x407f67;
    local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x407f7c;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    }
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack64[2] = *local_20;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x407fb8;
    printDoubleLine(apuStack64[2]);
  }
  else {
    apuStack64[0] = (undefined8 *)0x407f24;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x40800f;
    local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x408024;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    }
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack64[2] = *local_20;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x408060;
    printDoubleLine(apuStack64[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_06_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    uVar1 = *__ptr;
    free(__ptr);
    printLongLine(uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x004080e4) */

void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__long_malloc_use_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_11_bad(void)

{
  uint *puVar1;
  int iVar2;
  uint **__ptr;
  
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint **__ptr;
  uint *puVar2;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (uint *)malloc(4);
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 5;
    *__ptr = puVar2;
    printIntLine((ulong)**__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint **__ptr;
  uint *puVar2;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (uint *)malloc(4);
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 5;
    *__ptr = puVar2;
    printIntLine((ulong)**__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_02_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = *__ptr;
  free(__ptr);
  printIntLine((ulong)*puVar1);
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(4);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  *__ptr = puVar1;
  printIntLine((ulong)**__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(4);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  *__ptr = puVar1;
  printIntLine((ulong)**__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_17_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  undefined *puVar4;
  undefined auStack40 [8];
  uint *local_20;
  uint **local_18;
  int local_c;
  
  local_c = 0;
  puVar4 = auStack40;
  while (local_c < 1) {
    auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar2 / ZEXT816(0x10),0) * -0x10;
    local_18 = (uint **)((ulong)(puVar4 + lVar3 + 0xf) & 0xfffffffffffffff0);
    local_20 = *local_18;
    uVar1 = *local_20;
    *(undefined8 *)(puVar4 + lVar3 + -8) = 0x40852f;
    printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
    *(undefined8 *)(puVar4 + lVar3 + -8) = 0x40853d;
    printIntLine();
    local_c = local_c + 1;
    puVar4 = puVar4 + lVar3;
  }
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint **ppuVar3;
  uint *local_28;
  uint *local_20;
  uint **local_18;
  int local_c;
  
  local_c = 0;
  ppuVar3 = &local_28;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0) * -0x10;
    local_18 = (uint **)((ulong)((undefined *)ppuVar3 + lVar2 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)((undefined *)ppuVar3 + lVar2 + -8) = 0x40859b;
    local_20 = (uint *)malloc(8,((undefined *)ppuVar3)[lVar2 + -8]);
    if (local_20 == (uint *)0x0) break;
    *local_20 = 5;
    local_20[1] = 6;
    *local_18 = local_20;
    local_28 = *local_18;
    uVar1 = *local_28;
    *(undefined8 *)((undefined *)ppuVar3 + lVar2 + -8) = 0x4085e8;
    printIntLine((ulong)uVar1);
    uVar1 = local_28[1];
    *(undefined8 *)((undefined *)ppuVar3 + lVar2 + -8) = 0x4085f6;
    printIntLine((ulong)uVar1);
    local_c = local_c + 1;
    ppuVar3 = (uint **)((undefined *)ppuVar3 + lVar2);
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((undefined *)ppuVar3 + lVar2 + -8) = 0x4085b0;
  exit(0xffffffff,((undefined *)ppuVar3)[lVar2 + -8]);
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_17_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_16_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x408669;
  printLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  char *apcStack48 [4];
  char **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apcStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apcStack48[3] = "string";
  *local_10 = "string";
  apcStack48[2] = *local_10;
  apcStack48[lVar1 * 0x1ffffffffffffffe] = 0x4086d2;
  printLine(apcStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_16_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_03_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = *__ptr;
  free(__ptr);
  printIntLine((ulong)*puVar1);
  printIntLine((ulong)puVar1[1]);
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(8);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  puVar1[1] = 6;
  *__ptr = puVar1;
  puVar1 = *__ptr;
  printIntLine((ulong)*puVar1);
  printIntLine((ulong)puVar1[1]);
  free(__ptr);
  return;
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(8);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  puVar1[1] = 6;
  *__ptr = puVar1;
  puVar1 = *__ptr;
  printIntLine((ulong)*puVar1);
  printIntLine((ulong)puVar1[1]);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_13_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  char local_11;
  undefined8 ****local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x1f);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_11 = *(char *)local_10;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x4088ea;
    printHexCharLine((ulong)(uint)(int)local_11,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ***local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_11 = 5;
    *(char *)local_10 = 5;
    local_12 = *(char *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x408962;
    printHexCharLine((ulong)(uint)(int)local_12);
  }
  else {
    uStack32 = 0x408909;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ****local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_11 = 5;
    *(char *)local_10 = 5;
    local_12 = *(char *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x4089ce;
    printHexCharLine((ulong)(uint)(int)local_12);
  }
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_11_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  int iVar3;
  long lVar4;
  uint *puStack32;
  uint ****local_18;
  uint *****local_10;
  
  puStack32 = (uint *)0x4089fc;
  iVar3 = globalReturnsTrue();
  if (iVar3 != 0) {
    auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar4 = SUB168(auVar2 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar4 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    uVar1 = *(uint *)local_18;
    (&puStack32)[lVar4 * 0x1ffffffffffffffe] = 0x408a4c;
    printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
    uVar1 = *(uint *)((long)local_18 + 4);
    (&puStack32)[lVar4 * 0x1ffffffffffffffe] = 0x408a5a;
    printIntLine((ulong)uVar1);
  }
  return;
}


void good1(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *apuStack48 [4];
  uint **local_10;
  
  apuStack48[0] = (uint *)0x408a6e;
  iVar2 = globalReturnsFalse();
  if (iVar2 == 0) {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x408abf;
    apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar3 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x408ad4;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar3 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    apuStack48[3][1] = 6;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x408b0c;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack48[2][1];
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x408b1a;
    printIntLine((ulong)uVar1);
  }
  else {
    apuStack48[0] = (uint *)0x408a7c;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *apuStack48 [4];
  uint **local_10;
  
  apuStack48[0] = (uint *)0x408b2e;
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x408b74;
    apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar3 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x408b89;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar3 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    apuStack48[3][1] = 6;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x408bc1;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack48[2][1];
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x408bcf;
    printIntLine((ulong)uVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_02_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  uVar1 = *(uint *)local_18;
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x408c3f;
  printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  uVar1 = *(uint *)((long)local_18 + 4);
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x408c4d;
  printIntLine((ulong)uVar1);
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x408c95;
  apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x408caa;
    exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  }
  *apuStack48[3] = 5;
  apuStack48[3][1] = 6;
  *local_10 = apuStack48[3];
  apuStack48[2] = *local_10;
  uVar1 = *apuStack48[2];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x408ce2;
  printIntLine((ulong)uVar1);
  uVar1 = apuStack48[2][1];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x408cf0;
  printIntLine((ulong)uVar1);
  return;
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x408d38;
  apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x408d4d;
    exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  }
  *apuStack48[3] = 5;
  apuStack48[3][1] = 6;
  *local_10 = apuStack48[3];
  apuStack48[2] = *local_10;
  uVar1 = *apuStack48[2];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x408d85;
  printIntLine((ulong)uVar1);
  uVar1 = apuStack48[2][1];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x408d93;
  printIntLine((ulong)uVar1);
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_10_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  if (globalTrue != 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
  }
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (globalFalse == 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(4);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    *__ptr = puVar1;
    printIntLine((ulong)**__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (globalTrue != 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(4);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    *__ptr = puVar1;
    printIntLine((ulong)**__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_18_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = *__ptr;
  free(__ptr);
  printIntLine((ulong)*puVar1);
  printIntLine((ulong)puVar1[1]);
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(8);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  puVar1[1] = 6;
  *__ptr = puVar1;
  puVar1 = *__ptr;
  printIntLine((ulong)*puVar1);
  printIntLine((ulong)puVar1[1]);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_18_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_18_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printLine(uVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x42af0c;
  printLine(*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_18_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_05_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  char local_11;
  undefined8 ****local_10;
  
  if (staticTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x1f);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_11 = *(char *)local_10;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x409161;
    printHexCharLine((ulong)(uint)(int)local_11,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ***local_10;
  
  if (staticFalse == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_11 = 5;
    *(char *)local_10 = 5;
    local_12 = *(char *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x4091d8;
    printHexCharLine((ulong)(uint)(int)local_12);
  }
  else {
    uStack32 = 0x40917f;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ****local_10;
  
  if (staticTrue != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_11 = 5;
    *(char *)local_10 = 5;
    local_12 = *(char *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x409243;
    printHexCharLine((ulong)(uint)(int)local_12);
  }
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_05_good(void)

{
  good1();
  good2();
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


void CWE758_Undefined_Behavior__int_pointer_alloca_use_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  int iVar3;
  long lVar4;
  uint *puStack32;
  uint ***local_18;
  uint ****local_10;
  
  puStack32 = (uint *)0x409287;
  iVar3 = staticReturnsTrue();
  if (iVar3 != 0) {
    auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar4 = SUB168(auVar2 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar4 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    uVar1 = *(uint *)local_18;
    (&puStack32)[lVar4 * 0x1ffffffffffffffe] = 0x4092d7;
    printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *apuStack48 [4];
  uint **local_10;
  
  apuStack48[0] = (uint *)0x4092eb;
  iVar2 = staticReturnsFalse();
  if (iVar2 == 0) {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x40933c;
    apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar3 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x409351;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar3 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x40937e;
    printIntLine((ulong)uVar1);
  }
  else {
    apuStack48[0] = (uint *)0x4092f9;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *apuStack48 [4];
  uint **local_10;
  
  apuStack48[0] = (uint *)0x409392;
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x4093d8;
    apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar3 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x4093ed;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar3 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x40941a;
    printIntLine((ulong)uVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_18_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  uint local_14;
  undefined8 ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x22);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_14 = *(uint *)local_10;
  (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x409486;
  printIntLine((ulong)local_14,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_14 = 5;
  *(uint *)local_10 = 5;
  local_18 = *(uint *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x4094e8;
  printIntLine((ulong)local_18);
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_18_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_06_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  uVar1 = *(uint *)local_18;
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x409558;
  printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040956c) */

void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4095b9;
  apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] != (uint *)0x0) {
    *apuStack48[3] = 5;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4095fb;
    printIntLine((ulong)uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4095ce;
  exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x409651;
  apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] != (uint *)0x0) {
    *apuStack48[3] = 5;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x409693;
    printIntLine((ulong)uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x409666;
  exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_04_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40970b;
  printLongLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040971e) */

void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x409788;
  printLongLongLine(apuStack48[2]);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x4097f9;
  printLongLongLine(apuStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_10_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  if (globalTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x409872;
    printLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [3];
  char *local_18;
  undefined8 **local_10;
  
  if (globalFalse == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    local_18 = "string";
    *local_10 = (undefined8 *)0x42af8e;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x4098f0;
    printLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x409890;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  char *apcStack48 [4];
  char **local_10;
  
  if (globalTrue != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apcStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apcStack48[3] = "string";
    *local_10 = "string";
    apcStack48[2] = *local_10;
    apcStack48[lVar1 * 0x1ffffffffffffffe] = 0x409962;
    printLine(apcStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_16_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = *__ptr;
  free(__ptr);
  printIntLine((ulong)*puVar1);
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(4);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  *__ptr = puVar1;
  printIntLine((ulong)**__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_16_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_15_bad(void)

{
  char cVar1;
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  cVar1 = *__ptr;
  free(__ptr);
  printHexCharLine((ulong)(uint)(int)cVar1);
  return;
}


void good1(void)

{
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printHexCharLine((ulong)(uint)(int)*__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printHexCharLine((ulong)(uint)(int)*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_15_good(void)

{
  good1();
  good2();
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


void CWE758_Undefined_Behavior__int_alloca_use_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined8 uStack32;
  uint local_14;
  undefined8 ***local_10;
  
  uStack32 = 0x409b9d;
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x22);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    local_14 = *(uint *)local_10;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x409be8;
    printIntLine((ulong)local_14,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ***local_10;
  
  uStack32 = 0x409bfc;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_14 = 5;
    *(uint *)local_10 = 5;
    local_18 = *(uint *)local_10;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x409c63;
    printIntLine((ulong)local_18);
  }
  else {
    uStack32 = 0x409c0a;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ***local_10;
  
  uStack32 = 0x409c77;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_14 = 5;
    *(uint *)local_10 = 5;
    local_18 = *(uint *)local_10;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x409cd2;
    printIntLine((ulong)local_18);
  }
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_13_bad(void)

{
  uint uVar1;
  uint *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)uVar1);
  }
  return;
}


void good1(void)

{
  uint *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_12_bad(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *__ptr;
  
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x42afbf;
    printLine(*__ptr);
    free(__ptr);
  }
  else {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLine(uVar1);
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x42afbf;
    printLine(*__ptr);
    free(__ptr);
  }
  else {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x42afbf;
    printLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_12_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_03_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40a005;
  printLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  char *apcStack48 [4];
  char **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apcStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apcStack48[3] = "string";
  *local_10 = "string";
  apcStack48[2] = *local_10;
  apcStack48[lVar1 * 0x1ffffffffffffffe] = 0x40a06d;
  printLine(apcStack48[2]);
  return;
}


void good2(void)

{
  long lVar1;
  char *apcStack48 [4];
  char **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apcStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apcStack48[3] = "string";
  *local_10 = "string";
  apcStack48[2] = *local_10;
  apcStack48[lVar1 * 0x1ffffffffffffffe] = 0x40a0d5;
  printLine(apcStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_15_bad(void)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (undefined8 *)*__ptr;
  free(__ptr);
  printDoubleLine(*puVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x4014000000000000;
  *(undefined8 **)__ptr = puVar1;
  printDoubleLine(*(undefined8 *)*__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x4014000000000000;
  *(undefined8 **)__ptr = puVar1;
  printDoubleLine(*(undefined8 *)*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 uStack48;
  uint local_28;
  undefined4 local_24;
  undefined8 ***local_20;
  uint local_14;
  undefined8 ***local_10;
  
  uStack48 = 0x40a295;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
    local_20 = &local_20 + lVar2 * 0x1ffffffffffffffe;
    local_24 = 5;
    *(uint *)local_20 = 5;
    local_28 = *(uint *)local_20;
    (&uStack48)[lVar2 * 0x1ffffffffffffffe] = 0x40a339;
    printIntLine((ulong)local_28);
  }
  else {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
    local_10 = &local_20 + lVar2 * 0x1ffffffffffffffe;
    local_14 = *(uint *)local_10;
    (&uStack48)[lVar2 * 0x1ffffffffffffffe] = 0x40a2e0;
    printIntLine((ulong)local_14);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 uStack48;
  uint local_28;
  undefined4 local_24;
  undefined8 ***local_20;
  uint local_18;
  undefined4 local_14;
  undefined8 ***local_10;
  
  uStack48 = 0x40a34d;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
    local_20 = &local_20 + lVar2 * 0x1ffffffffffffffe;
    local_24 = 5;
    *(uint *)local_20 = 5;
    local_28 = *(uint *)local_20;
    (&uStack48)[lVar2 * 0x1ffffffffffffffe] = 0x40a401;
    printIntLine((ulong)local_28);
  }
  else {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
    local_10 = &local_20 + lVar2 * 0x1ffffffffffffffe;
    local_14 = 5;
    *(uint *)local_10 = 5;
    local_18 = *(uint *)local_10;
    (&uStack48)[lVar2 * 0x1ffffffffffffffe] = 0x40a3a8;
    printIntLine((ulong)local_18);
  }
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_12_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_16_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  uVar1 = *(uint *)local_18;
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40a467;
  printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  uVar1 = *(uint *)((long)local_18 + 4);
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40a475;
  printIntLine((ulong)uVar1);
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40a4be;
  apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40a4d3;
    exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  }
  *apuStack48[3] = 5;
  apuStack48[3][1] = 6;
  *local_10 = apuStack48[3];
  apuStack48[2] = *local_10;
  uVar1 = *apuStack48[2];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40a50b;
  printIntLine((ulong)uVar1);
  uVar1 = apuStack48[2][1];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40a519;
  printIntLine((ulong)uVar1);
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_16_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_05_bad(void)

{
  uint uVar1;
  uint *__ptr;
  
  if (staticTrue != 0) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)uVar1);
  }
  return;
}


void good1(void)

{
  uint *__ptr;
  
  if (staticFalse == 0) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint *__ptr;
  
  if (staticTrue != 0) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_11_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  apuStack48[0] = (undefined8 *)0x40a67a;
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = *local_10;
    apuStack48[2] = *apuStack48[3];
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x40a6d2;
    printDoubleLine(apuStack48[2],uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  apuStack64[0] = (undefined8 *)0x40a6e6;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x40a737;
    local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar2 * 0x1ffffffffffffffe));
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x40a74c;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar2 * 0x1ffffffffffffffe));
    }
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack64[2] = *local_20;
    apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x40a788;
    printDoubleLine(apuStack64[2]);
  }
  else {
    apuStack64[0] = (undefined8 *)0x40a6f4;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  apuStack64[0] = (undefined8 *)0x40a79c;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x40a7e2;
    local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar2 * 0x1ffffffffffffffe));
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x40a7f7;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar2 * 0x1ffffffffffffffe));
    }
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack64[2] = *local_20;
    apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x40a833;
    printDoubleLine(apuStack64[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_13_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  ulong *puStack32;
  ulong ***local_18;
  ulong ****local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40a8ab;
    printIntLine((ulong)local_18 & 0xffffffff,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40a8b5;
    printIntLine((ulong)local_18 >> 0x20);
  }
  return;
}


void good1(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    local_18 = 1;
    uStack20 = 2;
    *local_10 = 0x200000001;
    auStack48[1] = *local_10;
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40a938;
    printIntLine(auStack48[1] & 0xffffffff);
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40a942;
    printIntLine(auStack48[1] >> 0x20);
  }
  else {
    auStack48[0] = 0x40a8d4;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    local_18 = 1;
    uStack20 = 2;
    *local_10 = 0x200000001;
    auStack48[1] = *local_10;
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40a9b9;
    printIntLine(auStack48[1] & 0xffffffff);
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40a9c3;
    printIntLine(auStack48[1] >> 0x20);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_14_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  if (globalFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLongLongLine(uVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  if (globalFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  if (globalFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_14_good(void)

{
  good1();
  good2();
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


void CWE758_Undefined_Behavior__long_alloca_use_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  apuStack32[0] = (undefined8 *)0x40ab58;
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar3 * 0x1ffffffffffffffe] = 0x40aba7;
    printLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  apuStack48[0] = (undefined8 *)0x40abbb;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40ac29;
    printLongLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x40abc9;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  apuStack48[0] = (undefined8 *)0x40ac3d;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40ac9f;
    printLongLine(apuStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_09_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40ad18;
    printLongLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x40ad96;
    printLongLongLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x40ad36;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x40ae08;
    printLongLongLine(apuStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_09_good(void)

{
  good1();
  good2();
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


void CWE758_Undefined_Behavior__int_malloc_use_08_bad(void)

{
  uint uVar1;
  int iVar2;
  uint *__ptr;
  
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)uVar1);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint *__ptr;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint *__ptr;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_18_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40afd6;
  printLongLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x40b03f;
  printLongLongLine(apuStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_18_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_17_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) break;
    uVar1 = *__ptr;
    free(__ptr);
    printLine(uVar1);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good1(void)

{
  undefined8 *__ptr;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) break;
    *__ptr = 0x42b060;
    printLine(*__ptr);
    free(__ptr);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_17_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_07_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  if (staticFive == 5) {
    auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    uVar1 = *(uint *)local_18;
    (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40b191;
    printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (staticFive == 5) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40b1f3;
    apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40b208;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40b235;
    printIntLine((ulong)uVar1);
  }
  else {
    apuStack48[0] = (uint *)0x40b1b0;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (staticFive == 5) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40b28c;
    apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40b2a1;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40b2ce;
    printIntLine((ulong)uVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_05_bad(void)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  if (staticTrue != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (undefined8 *)*__ptr;
    free(__ptr);
    printDoubleLine(*puVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  if (staticFalse == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (undefined8 *)malloc(8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar1;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  if (staticTrue != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (undefined8 *)malloc(8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar1;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_03_bad(void)

{
  uint uVar1;
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printIntLine((ulong)uVar1);
  return;
}


void good1(void)

{
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printIntLine((ulong)*__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printIntLine((ulong)*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_02_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printLine(uVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x42b091;
  printLine(*__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x42b091;
  printLine(*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_01_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  ulong *puStack32;
  ulong ***local_18;
  ulong ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40b731;
  printIntLine((ulong)local_18 & 0xffffffff,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40b73b;
  printIntLine((ulong)local_18 >> 0x20);
  return;
}


void good1(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  local_18 = 1;
  uStack20 = 2;
  *local_10 = 0x200000001;
  auStack48[1] = *local_10;
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40b7a7;
  printIntLine(auStack48[1] & 0xffffffff);
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40b7b1;
  printIntLine(auStack48[1] >> 0x20);
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_01_good(void)

{
  good1();
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


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_08_bad(void)

{
  uint *puVar1;
  int iVar2;
  uint **__ptr;
  
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint **__ptr;
  uint *puVar2;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (uint *)malloc(8);
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 5;
    puVar2[1] = 6;
    *__ptr = puVar2;
    puVar2 = *__ptr;
    printIntLine((ulong)*puVar2);
    printIntLine((ulong)puVar2[1]);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint **__ptr;
  uint *puVar2;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (uint *)malloc(8);
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 5;
    puVar2[1] = 6;
    *__ptr = puVar2;
    puVar2 = *__ptr;
    printIntLine((ulong)*puVar2);
    printIntLine((ulong)puVar2[1]);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_14_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  if (globalFive == 5) {
    auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    uVar1 = *(uint *)local_18;
    (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40ba1e;
    printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (globalFive == 5) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40ba80;
    apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40ba95;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40bac2;
    printIntLine((ulong)uVar1);
  }
  else {
    apuStack48[0] = (uint *)0x40ba3d;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (globalFive == 5) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40bb19;
    apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40bb2e;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40bb5b;
    printIntLine((ulong)uVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined8 uStack32;
  uint local_14;
  undefined8 ***local_10;
  
  uStack32 = 0x40bb89;
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x22);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    local_14 = *(uint *)local_10;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40bbd4;
    printIntLine((ulong)local_14,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ***local_10;
  
  uStack32 = 0x40bbe8;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_14 = 5;
    *(uint *)local_10 = 5;
    local_18 = *(uint *)local_10;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40bc4f;
    printIntLine((ulong)local_18);
  }
  else {
    uStack32 = 0x40bbf6;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ***local_10;
  
  uStack32 = 0x40bc63;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_14 = 5;
    *(uint *)local_10 = 5;
    local_18 = *(uint *)local_10;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40bcbe;
    printIntLine((ulong)local_18);
  }
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_02_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  uint local_14;
  undefined8 ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x22);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_14 = *(uint *)local_10;
  (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40bd29;
  printIntLine((ulong)local_14,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_14 = 5;
  *(uint *)local_10 = 5;
  local_18 = *(uint *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40bd8a;
  printIntLine((ulong)local_18);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_14 = 5;
  *(uint *)local_10 = 5;
  local_18 = *(uint *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40bdeb;
  printIntLine((ulong)local_18);
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_02_good(void)

{
  good1();
  good2();
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


void CWE758_Undefined_Behavior__char_pointer_alloca_use_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  apuStack32[0] = (undefined8 *)0x40be2f;
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar3 * 0x1ffffffffffffffe] = 0x40be7e;
    printLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack48 [3];
  char *local_18;
  undefined8 **local_10;
  
  apuStack48[0] = (undefined8 *)0x40be92;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    local_18 = "string";
    *local_10 = (undefined8 *)0x42b0ec;
    apuStack48[2] = *local_10;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40bf00;
    printLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x40bea0;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack48 [3];
  char *local_18;
  undefined8 **local_10;
  
  apuStack48[0] = (undefined8 *)0x40bf14;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    local_18 = "string";
    *local_10 = (undefined8 *)0x42b0ec;
    apuStack48[2] = *local_10;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40bf76;
    printLine(apuStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_03_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  ulong *puStack32;
  ulong ***local_18;
  ulong ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40bfe3;
  printIntLine((ulong)local_18 & 0xffffffff,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40bfed;
  printIntLine((ulong)local_18 >> 0x20);
  return;
}


void good1(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  local_18 = 1;
  uStack20 = 2;
  *local_10 = 0x200000001;
  auStack48[1] = *local_10;
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40c059;
  printIntLine(auStack48[1] & 0xffffffff);
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40c063;
  printIntLine(auStack48[1] >> 0x20);
  return;
}


void good2(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  local_18 = 1;
  uStack20 = 2;
  *local_10 = 0x200000001;
  auStack48[1] = *local_10;
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40c0cf;
  printIntLine(auStack48[1] & 0xffffffff);
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40c0d9;
  printIntLine(auStack48[1] >> 0x20);
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_15_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printLongLine(uVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_06_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  __ptr = (uint **)malloc(8);
  if (__ptr != (uint **)0x0) {
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040c285) */

void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(4);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = 5;
    *__ptr = puVar1;
    printIntLine((ulong)**__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(4);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = 5;
    *__ptr = puVar1;
    printIntLine((ulong)**__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_10_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  if (globalTrue != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLine(uVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  if (globalFalse == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x42b122;
    printLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  if (globalTrue != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x42b122;
    printLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_07_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  if (staticFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40c55b;
    printLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (staticFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x40c5da;
    printLongLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x40c57a;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (staticFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x40c64d;
    printLongLine(apuStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_05_bad(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  if (staticTrue != 0) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
  }
  return;
}


void good1(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  if (staticFalse == 0) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  if (staticTrue != 0) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_09_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    uVar1 = *(uint *)local_18;
    (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40c839;
    printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
    uVar1 = *(uint *)((long)local_18 + 4);
    (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40c847;
    printIntLine((ulong)uVar1);
  }
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40c8a8;
    apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40c8bd;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    apuStack48[3][1] = 6;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40c8f5;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack48[2][1];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40c903;
    printIntLine((ulong)uVar1);
  }
  else {
    apuStack48[0] = (uint *)0x40c865;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40c959;
    apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40c96e;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    apuStack48[3][1] = 6;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40c9a6;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack48[2][1];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40c9b4;
    printIntLine((ulong)uVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_10_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  uint local_14;
  undefined8 ****local_10;
  
  if (globalTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x22);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_14 = *(uint *)local_10;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40ca29;
    printIntLine((ulong)local_14,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ***local_10;
  
  if (globalFalse == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_14 = 5;
    *(uint *)local_10 = 5;
    local_18 = *(uint *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40caa0;
    printIntLine((ulong)local_18);
  }
  else {
    uStack32 = 0x40ca47;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ****local_10;
  
  if (globalTrue != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_14 = 5;
    *(uint *)local_10 = 5;
    local_18 = *(uint *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40cb0b;
    printIntLine((ulong)local_18);
  }
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_18_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  ulong *puStack32;
  ulong ***local_18;
  ulong ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40cb79;
  printIntLine((ulong)local_18 & 0xffffffff,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40cb83;
  printIntLine((ulong)local_18 >> 0x20);
  return;
}


void good1(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  local_18 = 1;
  uStack20 = 2;
  *local_10 = 0x200000001;
  auStack48[1] = *local_10;
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40cbf0;
  printIntLine(auStack48[1] & 0xffffffff);
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40cbfa;
  printIntLine(auStack48[1] >> 0x20);
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_18_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_06_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  uVar1 = *(uint *)local_18;
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40cc6a;
  printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  uVar1 = *(uint *)((long)local_18 + 4);
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40cc78;
  printIntLine((ulong)uVar1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040cc8c) */

void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40ccd9;
  apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] != (uint *)0x0) {
    *apuStack48[3] = 5;
    apuStack48[3][1] = 6;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40cd26;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack48[2][1];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40cd34;
    printIntLine((ulong)uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40ccee;
  exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40cd8a;
  apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] != (uint *)0x0) {
    *apuStack48[3] = 5;
    apuStack48[3][1] = 6;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40cdd7;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack48[2][1];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40cde5;
    printIntLine((ulong)uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40cd9f;
  exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_16_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = *__ptr;
  free(__ptr);
  printIntLine((ulong)*puVar1);
  printIntLine((ulong)puVar1[1]);
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(8);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  puVar1[1] = 6;
  *__ptr = puVar1;
  puVar1 = *__ptr;
  printIntLine((ulong)*puVar1);
  printIntLine((ulong)puVar1[1]);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_16_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_01_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printLine(uVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x42b199;
  printLine(*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_01_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_14_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  if (globalFive == 5) {
    auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    uVar1 = *(uint *)local_18;
    (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40d022;
    printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
    uVar1 = *(uint *)((long)local_18 + 4);
    (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40d030;
    printIntLine((ulong)uVar1);
  }
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (globalFive == 5) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d092;
    apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d0a7;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    apuStack48[3][1] = 6;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d0df;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack48[2][1];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d0ed;
    printIntLine((ulong)uVar1);
  }
  else {
    apuStack48[0] = (uint *)0x40d04f;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (globalFive == 5) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d144;
    apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d159;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    apuStack48[3][1] = 6;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d191;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack48[2][1];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d19f;
    printIntLine((ulong)uVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_01_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  uint local_14;
  undefined8 ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x22);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_14 = *(uint *)local_10;
  (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40d20a;
  printIntLine((ulong)local_14,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_14 = 5;
  *(uint *)local_10 = 5;
  local_18 = *(uint *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40d26b;
  printIntLine((ulong)local_18);
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_01_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_04_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  uVar1 = *(uint *)local_18;
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40d2da;
  printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040d2ed) */

void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d33a;
  apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] != (uint *)0x0) {
    *apuStack48[3] = 5;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d37c;
    printIntLine((ulong)uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d34f;
  exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d3d1;
  apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] != (uint *)0x0) {
    *apuStack48[3] = 5;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d413;
    printIntLine((ulong)uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d3e6;
  exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_16_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = *local_10;
  apuStack48[2] = *apuStack48[3];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d48b;
  printDoubleLine(apuStack48[2],uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x40d4d4;
  local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x40d4e9;
    exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  }
  *local_18 = 0x4014000000000000;
  *local_10 = local_18;
  local_20 = *local_10;
  apuStack64[2] = *local_20;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x40d525;
  printDoubleLine(apuStack64[2]);
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_16_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_17_bad(void)

{
  uint uVar1;
  uint *__ptr;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) break;
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)uVar1);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good1(void)

{
  uint *__ptr;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) break;
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__int_malloc_use_17_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_01_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  uVar1 = *(uint *)local_18;
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40d662;
  printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d6aa;
  apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d6bf;
    exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  }
  *apuStack48[3] = 5;
  *local_10 = apuStack48[3];
  apuStack48[2] = *local_10;
  uVar1 = *apuStack48[2];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d6ec;
  printIntLine((ulong)uVar1);
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_01_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_07_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  uint local_14;
  undefined8 ****local_10;
  
  if (staticFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x22);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_14 = *(uint *)local_10;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40d758;
    printIntLine((ulong)local_14,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ***local_10;
  
  if (staticFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_14 = 5;
    *(uint *)local_10 = 5;
    local_18 = *(uint *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40d7d0;
    printIntLine((ulong)local_18);
  }
  else {
    uStack32 = 0x40d777;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ****local_10;
  
  if (staticFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_14 = 5;
    *(uint *)local_10 = 5;
    local_18 = *(uint *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40d83c;
    printIntLine((ulong)local_18);
  }
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_11_bad(void)

{
  uint uVar1;
  int iVar2;
  uint *__ptr;
  
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)uVar1);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint *__ptr;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint *__ptr;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_07_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  if (staticFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLine(uVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  if (staticFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x42b214;
    printLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  if (staticFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x42b214;
    printLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_09_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40db4e;
    printLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [3];
  char *local_18;
  undefined8 **local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    local_18 = "string";
    *local_10 = (undefined8 *)0x42b230;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x40dbcc;
    printLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x40db6c;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  char *apcStack48 [4];
  char **local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apcStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apcStack48[3] = "string";
    *local_10 = "string";
    apcStack48[2] = *local_10;
    apcStack48[lVar1 * 0x1ffffffffffffffe] = 0x40dc3e;
    printLine(apcStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_17_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  ulong *puVar3;
  ulong local_28 [2];
  ulong *local_18;
  int local_c;
  
  local_c = 0;
  puVar3 = local_28;
  while (local_c < 1) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0) * -0x10;
    local_18 = (ulong *)((ulong)((undefined *)puVar3 + lVar2 + 0xf) & 0xfffffffffffffff0);
    local_28[0] = *local_18;
    *(undefined8 *)((undefined *)puVar3 + lVar2 + -8) = 0x40dcb4;
    printIntLine(local_28[0] & 0xffffffff,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    *(undefined8 *)((undefined *)puVar3 + lVar2 + -8) = 0x40dcbe;
    printIntLine();
    local_c = local_c + 1;
    puVar3 = (ulong *)((undefined *)puVar3 + lVar2);
  }
  return;
}


void good1(void)

{
  long lVar1;
  ulong *puVar2;
  ulong local_38 [2];
  undefined4 local_28;
  undefined4 uStack36;
  ulong *local_18;
  int local_c;
  
  local_c = 0;
  puVar2 = local_38;
  while (local_c < 1) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0) * -0x10;
    local_18 = (ulong *)((ulong)((undefined *)puVar2 + lVar1 + 0xf) & 0xfffffffffffffff0);
    local_28 = 1;
    uStack36 = 2;
    *local_18 = 0x200000001;
    local_38[0] = *local_18;
    *(undefined8 *)((undefined *)puVar2 + lVar1 + -8) = 0x40dd3d;
    printIntLine(local_38[0] & 0xffffffff);
    *(undefined8 *)((undefined *)puVar2 + lVar1 + -8) = 0x40dd47;
    printIntLine();
    local_c = local_c + 1;
    puVar2 = (ulong *)((undefined *)puVar2 + lVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_17_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_16_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  char local_11;
  undefined8 ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x1f);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_11 = *(char *)local_10;
  (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40ddb4;
  printHexCharLine((ulong)(uint)(int)local_11,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_11 = 5;
  *(char *)local_10 = 5;
  local_12 = *(char *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40de16;
  printHexCharLine((ulong)(uint)(int)local_12);
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_16_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_03_bad(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printIntLine(uVar1 & 0xffffffff);
  printIntLine(uVar1 >> 0x20);
  return;
}


void good1(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x200000001;
  uVar1 = *__ptr;
  printIntLine(uVar1 & 0xffffffff);
  printIntLine(uVar1 >> 0x20);
  free(__ptr);
  return;
}


void good2(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x200000001;
  uVar1 = *__ptr;
  printIntLine(uVar1 & 0xffffffff);
  printIntLine(uVar1 >> 0x20);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_09_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  uint local_14;
  undefined8 ****local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x22);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_14 = *(uint *)local_10;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40dfca;
    printIntLine((ulong)local_14,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ***local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_14 = 5;
    *(uint *)local_10 = 5;
    local_18 = *(uint *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40e041;
    printIntLine((ulong)local_18);
  }
  else {
    uStack32 = 0x40dfe8;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ****local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_14 = 5;
    *(uint *)local_10 = 5;
    local_18 = *(uint *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40e0ac;
    printIntLine((ulong)local_18);
  }
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_05_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  if (staticTrue != 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
  }
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (staticFalse == 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(4);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    *__ptr = puVar1;
    printIntLine((ulong)**__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (staticTrue != 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(4);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    *__ptr = puVar1;
    printIntLine((ulong)**__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  ulong uStack32;
  ulong **local_18;
  ulong ***local_10;
  
  uStack32 = 0x40e26d;
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40e2ba;
    printIntLine((ulong)local_18 & 0xffffffff,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40e2c4;
    printIntLine((ulong)local_18 >> 0x20);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  auStack48[0] = 0x40e2d8;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = auStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    local_18 = 1;
    uStack20 = 2;
    *local_10 = 0x200000001;
    auStack48[1] = *local_10;
    auStack48[lVar2 * 0x1ffffffffffffffe] = 0x40e34a;
    printIntLine(auStack48[1] & 0xffffffff);
    auStack48[lVar2 * 0x1ffffffffffffffe] = 0x40e354;
    printIntLine(auStack48[1] >> 0x20);
  }
  else {
    auStack48[0] = 0x40e2e6;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  auStack48[0] = 0x40e368;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = auStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    local_18 = 1;
    uStack20 = 2;
    *local_10 = 0x200000001;
    auStack48[1] = *local_10;
    auStack48[lVar2 * 0x1ffffffffffffffe] = 0x40e3ce;
    printIntLine(auStack48[1] & 0xffffffff);
    auStack48[lVar2 * 0x1ffffffffffffffe] = 0x40e3d8;
    printIntLine(auStack48[1] >> 0x20);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_02_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  ulong *puStack32;
  ulong ***local_18;
  ulong ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40e445;
  printIntLine((ulong)local_18 & 0xffffffff,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40e44f;
  printIntLine((ulong)local_18 >> 0x20);
  return;
}


void good1(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  local_18 = 1;
  uStack20 = 2;
  *local_10 = 0x200000001;
  auStack48[1] = *local_10;
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40e4bb;
  printIntLine(auStack48[1] & 0xffffffff);
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40e4c5;
  printIntLine(auStack48[1] >> 0x20);
  return;
}


void good2(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  local_18 = 1;
  uStack20 = 2;
  *local_10 = 0x200000001;
  auStack48[1] = *local_10;
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40e531;
  printIntLine(auStack48[1] & 0xffffffff);
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40e53b;
  printIntLine(auStack48[1] >> 0x20);
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_10_bad(void)

{
  uint uVar1;
  uint *__ptr;
  
  if (globalTrue != 0) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)uVar1);
  }
  return;
}


void good1(void)

{
  uint *__ptr;
  
  if (globalFalse == 0) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint *__ptr;
  
  if (globalTrue != 0) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_18_bad(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printIntLine(uVar1 & 0xffffffff);
  printIntLine(uVar1 >> 0x20);
  return;
}


void good1(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x200000001;
  uVar1 = *__ptr;
  printIntLine(uVar1 & 0xffffffff);
  printIntLine(uVar1 >> 0x20);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_18_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_06_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  __ptr = (uint **)malloc(8);
  if (__ptr != (uint **)0x0) {
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0040e7dd) */

void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(8);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = 5;
    puVar1[1] = 6;
    *__ptr = puVar1;
    puVar1 = *__ptr;
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(8);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = 5;
    puVar1[1] = 6;
    *__ptr = puVar1;
    puVar1 = *__ptr;
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack64 [4];
  undefined8 **local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  apuStack64[0] = (undefined8 *)0x40e952;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_20 = apuStack64 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack64[3] = 5;
    *local_20 = (undefined8 *)0x5;
    apuStack64[2] = *local_20;
    apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x40ea01;
    printLongLongLine(apuStack64[2]);
  }
  else {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar2 * 0x1ffffffffffffffe + 2;
    local_18 = *local_10;
    apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x40e9a1;
    printLongLongLine(local_18);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack64 [3];
  undefined8 **local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined8 **local_10;
  
  apuStack64[0] = (undefined8 *)0x40ea15;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_28 = apuStack64 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack64[2] = 5;
    *local_28 = (undefined8 *)0x5;
    apuStack64[1] = *local_28;
    apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x40ead7;
    printLongLongLine(apuStack64[1]);
  }
  else {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar2 * 0x1ffffffffffffffe + 2;
    local_18 = 5;
    *local_10 = (undefined8 *)0x5;
    local_20 = *local_10;
    apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x40ea77;
    printLongLongLine(local_20);
  }
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_12_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_03_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40eb3c;
  printLongLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x40eba4;
  printLongLongLine(apuStack48[2]);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x40ec0c;
  printLongLongLine(apuStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_16_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x40ec7b;
  printLongLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x40ece4;
  printLongLongLine(apuStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_16_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_10_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  ulong *puStack32;
  ulong ***local_18;
  ulong ****local_10;
  
  if (globalTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40ed52;
    printIntLine((ulong)local_18 & 0xffffffff,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40ed5c;
    printIntLine((ulong)local_18 >> 0x20);
  }
  return;
}


void good1(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  if (globalFalse == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    local_18 = 1;
    uStack20 = 2;
    *local_10 = 0x200000001;
    auStack48[1] = *local_10;
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40edde;
    printIntLine(auStack48[1] & 0xffffffff);
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40ede8;
    printIntLine(auStack48[1] >> 0x20);
  }
  else {
    auStack48[0] = 0x40ed7a;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  if (globalTrue != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    local_18 = 1;
    uStack20 = 2;
    *local_10 = 0x200000001;
    auStack48[1] = *local_10;
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40ee5e;
    printIntLine(auStack48[1] & 0xffffffff);
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x40ee68;
    printIntLine(auStack48[1] >> 0x20);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_01_bad(void)

{
  uint uVar1;
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printIntLine((ulong)uVar1);
  return;
}


void good1(void)

{
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printIntLine((ulong)*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_01_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_12_bad(void)

{
  ulong uVar1;
  int iVar2;
  ulong *__ptr;
  
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
  }
  else {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
  }
  return;
}


void good1(void)

{
  ulong uVar1;
  int iVar2;
  ulong *__ptr;
  
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
  }
  else {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_12_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_04_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  uVar1 = *(uint *)local_18;
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40f148;
  printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  uVar1 = *(uint *)((long)local_18 + 4);
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x40f156;
  printIntLine((ulong)uVar1);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f169) */

void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40f1b6;
  apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] != (uint *)0x0) {
    *apuStack48[3] = 5;
    apuStack48[3][1] = 6;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40f203;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack48[2][1];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40f211;
    printIntLine((ulong)uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40f1cb;
  exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40f266;
  apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] != (uint *)0x0) {
    *apuStack48[3] = 5;
    apuStack48[3][1] = 6;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40f2b3;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack48[2][1];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40f2c1;
    printIntLine((ulong)uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40f27b;
  exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_13_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLongLongLine(uVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_16_bad(void)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (undefined8 *)*__ptr;
  free(__ptr);
  printDoubleLine(*puVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x4014000000000000;
  *(undefined8 **)__ptr = puVar1;
  printDoubleLine(*(undefined8 *)*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_16_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_05_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  if (staticTrue != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLongLine(uVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  if (staticFalse == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  if (staticTrue != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_18_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  char local_11;
  undefined8 ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x1f);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_11 = *(char *)local_10;
  (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40f6c5;
  printHexCharLine((ulong)(uint)(int)local_11,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_11 = 5;
  *(char *)local_10 = 5;
  local_12 = *(char *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40f727;
  printHexCharLine((ulong)(uint)(int)local_12);
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_18_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_14_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (globalFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = *local_10;
    apuStack48[2] = *apuStack48[3];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40f7a0;
    printDoubleLine(apuStack48[2],uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  if (globalFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x40f802;
    local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x40f817;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    }
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack64[2] = *local_20;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x40f853;
    printDoubleLine(apuStack64[2]);
  }
  else {
    apuStack64[0] = (undefined8 *)0x40f7bf;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  if (globalFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x40f8aa;
    local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x40f8bf;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    }
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack64[2] = *local_20;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x40f8fb;
    printDoubleLine(apuStack64[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_06_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  char local_11;
  undefined8 ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x1f);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_11 = *(char *)local_10;
  (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40f972;
  printHexCharLine((ulong)(uint)(int)local_11,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f986) */

void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_11 = 5;
  *(char *)local_10 = 5;
  local_12 = *(char *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40f9e9;
  printHexCharLine((ulong)(uint)(int)local_12);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_11 = 5;
  *(char *)local_10 = 5;
  local_12 = *(char *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40fa54;
  printHexCharLine((ulong)(uint)(int)local_12);
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_16_bad(void)

{
  char cVar1;
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  cVar1 = *__ptr;
  free(__ptr);
  printHexCharLine((ulong)(uint)(int)cVar1);
  return;
}


void good1(void)

{
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printHexCharLine((ulong)(uint)(int)*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_16_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_07_bad(void)

{
  uint uVar1;
  uint *__ptr;
  
  if (staticFive == 5) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)uVar1);
  }
  return;
}


void good1(void)

{
  uint *__ptr;
  
  if (staticFive == 5) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint *__ptr;
  
  if (staticFive == 5) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_09_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  char local_11;
  undefined8 ****local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x1f);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_11 = *(char *)local_10;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x40fcbe;
    printHexCharLine((ulong)(uint)(int)local_11,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ***local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_11 = 5;
    *(char *)local_10 = 5;
    local_12 = *(char *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40fd35;
    printHexCharLine((ulong)(uint)(int)local_12);
  }
  else {
    uStack32 = 0x40fcdc;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ****local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_11 = 5;
    *(char *)local_10 = 5;
    local_12 = *(char *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x40fda0;
    printHexCharLine((ulong)(uint)(int)local_12);
  }
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_14_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  if (globalFive == 5) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
  }
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (globalFive == 5) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(8);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    puVar1[1] = 6;
    *__ptr = puVar1;
    puVar1 = *__ptr;
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (globalFive == 5) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(8);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    puVar1[1] = 6;
    *__ptr = puVar1;
    puVar1 = *__ptr;
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_02_bad(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printIntLine(uVar1 & 0xffffffff);
  printIntLine(uVar1 >> 0x20);
  return;
}


void good1(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x200000001;
  uVar1 = *__ptr;
  printIntLine(uVar1 & 0xffffffff);
  printIntLine(uVar1 >> 0x20);
  free(__ptr);
  return;
}


void good2(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x200000001;
  uVar1 = *__ptr;
  printIntLine(uVar1 & 0xffffffff);
  printIntLine(uVar1 >> 0x20);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_15_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x410134;
  printLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  char *apcStack48 [4];
  char **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apcStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apcStack48[3] = "string";
  *local_10 = "string";
  apcStack48[2] = *local_10;
  apcStack48[lVar1 * 0x1ffffffffffffffe] = 0x41019d;
  printLine(apcStack48[2]);
  return;
}


void good2(void)

{
  long lVar1;
  char *apcStack48 [4];
  char **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apcStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apcStack48[3] = "string";
  *local_10 = "string";
  apcStack48[2] = *local_10;
  apcStack48[lVar1 * 0x1ffffffffffffffe] = 0x410206;
  printLine(apcStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_13_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    uVar1 = *(uint *)local_18;
    (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x410282;
    printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4102e4;
    apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4102f9;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x410326;
    printIntLine((ulong)uVar1);
  }
  else {
    apuStack48[0] = (uint *)0x4102a1;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41037d;
    apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x410392;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4103bf;
    printIntLine((ulong)uVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_13_good(void)

{
  good1();
  good2();
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


void CWE758_Undefined_Behavior__struct_alloca_use_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  ulong uStack32;
  ulong **local_18;
  ulong ***local_10;
  
  uStack32 = 0x410403;
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x410450;
    printIntLine((ulong)local_18 & 0xffffffff,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x41045a;
    printIntLine((ulong)local_18 >> 0x20);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  auStack48[0] = 0x41046e;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = auStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    local_18 = 1;
    uStack20 = 2;
    *local_10 = 0x200000001;
    auStack48[1] = *local_10;
    auStack48[lVar2 * 0x1ffffffffffffffe] = 0x4104e0;
    printIntLine(auStack48[1] & 0xffffffff);
    auStack48[lVar2 * 0x1ffffffffffffffe] = 0x4104ea;
    printIntLine(auStack48[1] >> 0x20);
  }
  else {
    auStack48[0] = 0x41047c;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  auStack48[0] = 0x4104fe;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = auStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    local_18 = 1;
    uStack20 = 2;
    *local_10 = 0x200000001;
    auStack48[1] = *local_10;
    auStack48[lVar2 * 0x1ffffffffffffffe] = 0x410564;
    printIntLine(auStack48[1] & 0xffffffff);
    auStack48[lVar2 * 0x1ffffffffffffffe] = 0x41056e;
    printIntLine(auStack48[1] >> 0x20);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_17_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined *puVar3;
  undefined auStack40 [8];
  undefined8 local_20;
  undefined8 *local_18;
  int local_c;
  
  local_c = 0;
  puVar3 = auStack40;
  while (local_c < 1) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0) * -0x10;
    local_18 = (undefined8 *)((ulong)(puVar3 + lVar2 + 0xf) & 0xfffffffffffffff0);
    local_20 = *local_18;
    *(undefined8 *)(puVar3 + lVar2 + -8) = 0x4105e6;
    printLongLongLine(local_20,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    local_c = local_c + 1;
    puVar3 = puVar3 + lVar2;
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  int local_c;
  
  local_c = 0;
  puVar2 = &local_28;
  while (local_c < 1) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0) * -0x10;
    local_18 = (undefined8 *)((ulong)((undefined *)puVar2 + lVar1 + 0xf) & 0xfffffffffffffff0);
    local_20 = 5;
    *local_18 = 5;
    local_28 = *local_18;
    *(undefined8 *)((undefined *)puVar2 + lVar1 + -8) = 0x410661;
    printLongLongLine(local_28);
    local_c = local_c + 1;
    puVar2 = (undefined8 *)((undefined *)puVar2 + lVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_17_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_09_bad(void)

{
  uint uVar1;
  uint *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)uVar1);
  }
  return;
}


void good1(void)

{
  uint *__ptr;
  
  if (GLOBAL_CONST_FALSE == 0) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  apuStack32[0] = (undefined8 *)0x4107cb;
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar3 * 0x1ffffffffffffffe] = 0x41081a;
    printLongLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  apuStack48[0] = (undefined8 *)0x41082e;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41089c;
    printLongLongLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x41083c;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  apuStack48[0] = (undefined8 *)0x4108b0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x410912;
    printLongLongLine(apuStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_02_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x410981;
  printLongLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x4109e9;
  printLongLongLine(apuStack48[2]);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x410a51;
  printLongLongLine(apuStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_02_good(void)

{
  good1();
  good2();
  return;
}


void helperBad(void)

{
  return;
}


void CWE758_Undefined_Behavior__no_return_01_bad(void)

{
  uint uVar1;
  
  uVar1 = helperBad();
  printIntLine((ulong)uVar1);
  return;
}


undefined8 helperGood1(void)

{
  return 5;
}


void good1(void)

{
  uint uVar1;
  
  uVar1 = helperGood1();
  printIntLine((ulong)uVar1);
  return;
}


void CWE758_Undefined_Behavior__no_return_01_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_06_bad(void)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*__ptr;
    free(__ptr);
    printDoubleLine(*puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00410b37) */

void good1(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar1;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good2(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar1;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_01_bad(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printIntLine(uVar1 & 0xffffffff);
  printIntLine(uVar1 >> 0x20);
  return;
}


void good1(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x200000001;
  uVar1 = *__ptr;
  printIntLine(uVar1 & 0xffffffff);
  printIntLine(uVar1 >> 0x20);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_01_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_13_bad(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
  }
  return;
}


void good1(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_10_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  if (globalTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x410f29;
    printLongLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (globalFalse == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x410fa7;
    printLongLongLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x410f47;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (globalTrue != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x411019;
    printLongLongLine(apuStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_14_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  char local_11;
  undefined8 ****local_10;
  
  if (globalFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x1f);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_11 = *(char *)local_10;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x411091;
    printHexCharLine((ulong)(uint)(int)local_11,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ***local_10;
  
  if (globalFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_11 = 5;
    *(char *)local_10 = 5;
    local_12 = *(char *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x411109;
    printHexCharLine((ulong)(uint)(int)local_12);
  }
  else {
    uStack32 = 0x4110b0;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ****local_10;
  
  if (globalFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_11 = 5;
    *(char *)local_10 = 5;
    local_12 = *(char *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x411175;
    printHexCharLine((ulong)(uint)(int)local_12);
  }
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_17_bad(void)

{
  ulong uVar1;
  ulong *__ptr;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) break;
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good1(void)

{
  ulong uVar1;
  ulong *__ptr;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) break;
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__struct_malloc_use_17_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_04_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  __ptr = (uint **)malloc(8);
  if (__ptr != (uint **)0x0) {
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x004112fd) */

void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(8);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = 5;
    puVar1[1] = 6;
    *__ptr = puVar1;
    puVar1 = *__ptr;
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(8);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = 5;
    puVar1[1] = 6;
    *__ptr = puVar1;
    puVar1 = *__ptr;
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_15_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printLongLongLine(uVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_03_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  uVar1 = *(uint *)local_18;
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x4115da;
  printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x411622;
  apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x411637;
    exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  }
  *apuStack48[3] = 5;
  *local_10 = apuStack48[3];
  apuStack48[2] = *local_10;
  uVar1 = *apuStack48[2];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x411664;
  printIntLine((ulong)uVar1);
  return;
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4116ac;
  apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4116c1;
    exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  }
  *apuStack48[3] = 5;
  *local_10 = apuStack48[3];
  apuStack48[2] = *local_10;
  uVar1 = *apuStack48[2];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4116ee;
  printIntLine((ulong)uVar1);
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_04_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  ulong *puStack32;
  ulong ***local_18;
  ulong ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x411764;
  printIntLine((ulong)local_18 & 0xffffffff,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41176e;
  printIntLine((ulong)local_18 >> 0x20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00411781) */

void good1(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  local_18 = 1;
  uStack20 = 2;
  *local_10 = 0x200000001;
  auStack48[1] = *local_10;
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x4117ef;
  printIntLine(auStack48[1] & 0xffffffff);
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x4117f9;
  printIntLine(auStack48[1] >> 0x20);
  return;
}


void good2(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  local_18 = 1;
  uStack20 = 2;
  *local_10 = 0x200000001;
  auStack48[1] = *local_10;
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x41186e;
  printIntLine(auStack48[1] & 0xffffffff);
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x411878;
  printIntLine(auStack48[1] >> 0x20);
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_07_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  if (staticFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4118f2;
    printLongLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (staticFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x411971;
    printLongLongLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x411911;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (staticFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x4119e4;
    printLongLongLine(apuStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_12_bad(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *__ptr;
  
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
  }
  else {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLongLongLine(uVar1);
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
  }
  else {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_12_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_09_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
  }
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (GLOBAL_CONST_FALSE == 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(4);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    *__ptr = puVar1;
    printIntLine((ulong)**__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(4);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    *__ptr = puVar1;
    printIntLine((ulong)**__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_06_bad(void)

{
  char cVar1;
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr != (char *)0x0) {
    cVar1 = *__ptr;
    free(__ptr);
    printHexCharLine((ulong)(uint)(int)cVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00411d7e) */

void good1(void)

{
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr != (char *)0x0) {
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good2(void)

{
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr != (char *)0x0) {
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__char_malloc_use_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_09_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
  }
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (GLOBAL_CONST_FALSE == 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(8);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    puVar1[1] = 6;
    *__ptr = puVar1;
    puVar1 = *__ptr;
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(8);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    puVar1[1] = 6;
    *__ptr = puVar1;
    puVar1 = *__ptr;
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_16_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x412083;
  printLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x4120ec;
  printLongLine(apuStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_16_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_18_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  uVar1 = *(uint *)local_18;
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x412154;
  printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41219d;
  apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4121b2;
    exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  }
  *apuStack48[3] = 5;
  *local_10 = apuStack48[3];
  apuStack48[2] = *local_10;
  uVar1 = *apuStack48[2];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4121df;
  printIntLine((ulong)uVar1);
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_18_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_01_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x412244;
  printLongLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x4122ac;
  printLongLongLine(apuStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_01_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_05_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  ulong *puStack32;
  ulong ***local_18;
  ulong ****local_10;
  
  if (staticTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x412319;
    printIntLine((ulong)local_18 & 0xffffffff,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x412323;
    printIntLine((ulong)local_18 >> 0x20);
  }
  return;
}


void good1(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  if (staticFalse == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    local_18 = 1;
    uStack20 = 2;
    *local_10 = 0x200000001;
    auStack48[1] = *local_10;
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x4123a5;
    printIntLine(auStack48[1] & 0xffffffff);
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x4123af;
    printIntLine(auStack48[1] >> 0x20);
  }
  else {
    auStack48[0] = 0x412341;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  if (staticTrue != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    local_18 = 1;
    uStack20 = 2;
    *local_10 = 0x200000001;
    auStack48[1] = *local_10;
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x412425;
    printIntLine(auStack48[1] & 0xffffffff);
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x41242f;
    printIntLine(auStack48[1] >> 0x20);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_16_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printLongLine(uVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_16_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_04_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x412564;
  printLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00412577) */

void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x4125e1;
  printLongLine(apuStack48[2]);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x412652;
  printLongLine(apuStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_11_bad(void)

{
  ulong uVar1;
  int iVar2;
  ulong *__ptr;
  
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
  }
  return;
}


void good1(void)

{
  ulong uVar1;
  int iVar2;
  ulong *__ptr;
  
  iVar2 = globalReturnsFalse();
  if (iVar2 == 0) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  ulong uVar1;
  int iVar2;
  ulong *__ptr;
  
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_07_bad(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  if (staticFive == 5) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
  }
  return;
}


void good1(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  if (staticFive == 5) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  if (staticFive == 5) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_07_good(void)

{
  good1();
  good2();
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


void CWE758_Undefined_Behavior__double_pointer_malloc_use_08_bad(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *__ptr;
  
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (undefined8 *)*__ptr;
    free(__ptr);
    printDoubleLine(*puVar1);
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 *__ptr;
  undefined8 *puVar2;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (undefined8 *)malloc(8);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar2;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  undefined8 *__ptr;
  undefined8 *puVar2;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (undefined8 *)malloc(8);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar2;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_03_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = *local_10;
  apuStack48[2] = *apuStack48[3];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x412b9f;
  printDoubleLine(apuStack48[2],uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x412be7;
  local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x412bfc;
    exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  }
  *local_18 = 0x4014000000000000;
  *local_10 = local_18;
  local_20 = *local_10;
  apuStack64[2] = *local_20;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x412c38;
  printDoubleLine(apuStack64[2]);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x412c80;
  local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x412c95;
    exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  }
  *local_18 = 0x4014000000000000;
  *local_10 = local_18;
  local_20 = *local_10;
  apuStack64[2] = *local_20;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x412cd1;
  printDoubleLine(apuStack64[2]);
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_10_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  if (globalTrue != 0) {
    auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    uVar1 = *(uint *)local_18;
    (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x412d4b;
    printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
    uVar1 = *(uint *)((long)local_18 + 4);
    (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x412d59;
    printIntLine((ulong)uVar1);
  }
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (globalFalse == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x412dba;
    apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x412dcf;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    apuStack48[3][1] = 6;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x412e07;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack48[2][1];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x412e15;
    printIntLine((ulong)uVar1);
  }
  else {
    apuStack48[0] = (uint *)0x412d77;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (globalTrue != 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x412e6b;
    apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x412e80;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    apuStack48[3][1] = 6;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x412eb8;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack48[2][1];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x412ec6;
    printIntLine((ulong)uVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_09_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLongLine(uVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  if (GLOBAL_CONST_FALSE == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_01_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = *__ptr;
  free(__ptr);
  printIntLine((ulong)*puVar1);
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(4);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  *__ptr = puVar1;
  printIntLine((ulong)**__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_01_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_15_bad(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printIntLine(uVar1 & 0xffffffff);
  printIntLine(uVar1 >> 0x20);
  return;
}


void good1(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x200000001;
  uVar1 = *__ptr;
  printIntLine(uVar1 & 0xffffffff);
  printIntLine(uVar1 >> 0x20);
  free(__ptr);
  return;
}


void good2(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x200000001;
  uVar1 = *__ptr;
  printIntLine(uVar1 & 0xffffffff);
  printIntLine(uVar1 >> 0x20);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_12_bad(void)

{
  int iVar1;
  uint **__ptr;
  uint *puVar2;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (uint *)malloc(8);
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 5;
    puVar2[1] = 6;
    *__ptr = puVar2;
    puVar2 = *__ptr;
    printIntLine((ulong)*puVar2);
    printIntLine((ulong)puVar2[1]);
    free(__ptr);
  }
  else {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar2);
    printIntLine((ulong)puVar2[1]);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint **__ptr;
  uint *puVar2;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (uint *)malloc(8);
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 5;
    puVar2[1] = 6;
    *__ptr = puVar2;
    puVar2 = *__ptr;
    printIntLine((ulong)*puVar2);
    printIntLine((ulong)puVar2[1]);
    free(__ptr);
  }
  else {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (uint *)malloc(8);
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 5;
    puVar2[1] = 6;
    *__ptr = puVar2;
    puVar2 = *__ptr;
    printIntLine((ulong)*puVar2);
    printIntLine((ulong)puVar2[1]);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_12_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_18_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = *local_10;
  apuStack48[2] = *apuStack48[3];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x413505;
  printDoubleLine(apuStack48[2],uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41354e;
  local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x413563;
    exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  }
  *local_18 = 0x4014000000000000;
  *local_10 = local_18;
  local_20 = *local_10;
  apuStack64[2] = *local_20;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41359f;
  printDoubleLine(apuStack64[2]);
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_18_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_03_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  char local_11;
  undefined8 ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x1f);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_11 = *(char *)local_10;
  (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x413602;
  printHexCharLine((ulong)(uint)(int)local_11,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_11 = 5;
  *(char *)local_10 = 5;
  local_12 = *(char *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x413663;
  printHexCharLine((ulong)(uint)(int)local_12);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_11 = 5;
  *(char *)local_10 = 5;
  local_12 = *(char *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x4136c4;
  printHexCharLine((ulong)(uint)(int)local_12);
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_14_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  if (globalFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLongLine(uVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  if (globalFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  if (globalFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_12_bad(void)

{
  int iVar1;
  long lVar2;
  ulong auStack80 [3];
  undefined4 local_38;
  undefined4 uStack52;
  ulong local_28;
  ulong *local_18;
  ulong *local_10;
  
  auStack80[0] = 0x413843;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_18 = auStack80 + lVar2 * 0x1ffffffffffffffe + 2;
    local_38 = 1;
    uStack52 = 2;
    *local_18 = 0x200000001;
    auStack80[1] = *local_18;
    auStack80[lVar2 * 0x1ffffffffffffffe] = 0x4138fe;
    printIntLine(auStack80[1] & 0xffffffff);
    auStack80[lVar2 * 0x1ffffffffffffffe] = 0x413908;
    printIntLine(auStack80[1] >> 0x20);
  }
  else {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = auStack80 + lVar2 * 0x1ffffffffffffffe + 2;
    local_28 = *local_10;
    auStack80[lVar2 * 0x1ffffffffffffffe] = 0x413890;
    printIntLine(local_28 & 0xffffffff);
    auStack80[lVar2 * 0x1ffffffffffffffe] = 0x41389a;
    printIntLine(local_28 >> 0x20);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  ulong auStack96 [3];
  undefined4 local_48;
  undefined4 uStack68;
  ulong local_38;
  undefined4 local_28;
  undefined4 uStack36;
  ulong *local_18;
  ulong *local_10;
  
  auStack96[0] = 0x41391c;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_18 = auStack96 + lVar2 * 0x1ffffffffffffffe + 2;
    local_48 = 1;
    uStack68 = 2;
    *local_18 = 0x200000001;
    auStack96[1] = *local_18;
    auStack96[lVar2 * 0x1ffffffffffffffe] = 0x4139f0;
    printIntLine(auStack96[1] & 0xffffffff);
    auStack96[lVar2 * 0x1ffffffffffffffe] = 0x4139fa;
    printIntLine(auStack96[1] >> 0x20);
  }
  else {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = auStack96 + lVar2 * 0x1ffffffffffffffe + 2;
    local_28 = 1;
    uStack36 = 2;
    *local_10 = 0x200000001;
    local_38 = *local_10;
    auStack96[lVar2 * 0x1ffffffffffffffe] = 0x413982;
    printIntLine(local_38 & 0xffffffff);
    auStack96[lVar2 * 0x1ffffffffffffffe] = 0x41398c;
    printIntLine(local_38 >> 0x20);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_12_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_13_bad(void)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (undefined8 *)*__ptr;
    free(__ptr);
    printDoubleLine(*puVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (undefined8 *)malloc(8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar1;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (undefined8 *)malloc(8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar1;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_13_bad(void)

{
  char cVar1;
  char *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    cVar1 = *__ptr;
    free(__ptr);
    printHexCharLine((ulong)(uint)(int)cVar1);
  }
  return;
}


void good1(void)

{
  char *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  char *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_12_bad(void)

{
  uint uVar1;
  int iVar2;
  uint *__ptr;
  
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
  }
  else {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)uVar1);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint *__ptr;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
  }
  else {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_12_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_06_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x413ed9;
  printLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00413eed) */

void good1(void)

{
  long lVar1;
  char *apcStack48 [4];
  char **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apcStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apcStack48[3] = "string";
  *local_10 = "string";
  apcStack48[2] = *local_10;
  apcStack48[lVar1 * 0x1ffffffffffffffe] = 0x413f57;
  printLine(apcStack48[2]);
  return;
}


void good2(void)

{
  long lVar1;
  char *apcStack48 [4];
  char **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apcStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apcStack48[3] = "string";
  *local_10 = "string";
  apcStack48[2] = *local_10;
  apcStack48[lVar1 * 0x1ffffffffffffffe] = 0x413fc9;
  printLine(apcStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack80 [4];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 **local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  apuStack80[0] = (undefined8 *)0x413ff7;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_20 = apuStack80 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack80[lVar2 * 0x1ffffffffffffffe] = 0x414092;
    local_28 = (undefined8 *)malloc(8,*(undefined *)(apuStack80 + lVar2 * 0x1ffffffffffffffe));
    if (local_28 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack80[lVar2 * 0x1ffffffffffffffe] = 0x4140a7;
      exit(0xffffffff,*(undefined *)(apuStack80 + lVar2 * 0x1ffffffffffffffe));
    }
    *local_28 = 0x4014000000000000;
    *local_20 = local_28;
    local_30 = *local_20;
    apuStack80[2] = *local_30;
    apuStack80[lVar2 * 0x1ffffffffffffffe] = 0x4140e3;
    printDoubleLine(apuStack80[2]);
  }
  else {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack80 + lVar2 * 0x1ffffffffffffffe + 2;
    local_18 = *local_10;
    apuStack80[2] = *local_18;
    apuStack80[lVar2 * 0x1ffffffffffffffe] = 0x41404f;
    printDoubleLine(apuStack80[2]);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack80 [4];
  undefined8 *local_30;
  undefined8 **local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  apuStack80[0] = (undefined8 *)0x4140f7;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_28 = apuStack80 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack80[lVar2 * 0x1ffffffffffffffe] = 0x4141d1;
    local_30 = (undefined8 *)malloc(8,*(undefined *)(apuStack80 + lVar2 * 0x1ffffffffffffffe));
    if (local_30 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack80[lVar2 * 0x1ffffffffffffffe] = 0x4141e6;
      exit(0xffffffff,*(undefined *)(apuStack80 + lVar2 * 0x1ffffffffffffffe));
    }
    *local_30 = 0x4014000000000000;
    *local_28 = local_30;
    apuStack80[3] = *local_28;
    apuStack80[2] = *apuStack80[3];
    apuStack80[lVar2 * 0x1ffffffffffffffe] = 0x414222;
    printDoubleLine(apuStack80[2]);
  }
  else {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack80 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack80[lVar2 * 0x1ffffffffffffffe] = 0x41413d;
    local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack80 + lVar2 * 0x1ffffffffffffffe));
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack80[lVar2 * 0x1ffffffffffffffe] = 0x414152;
      exit(0xffffffff,*(undefined *)(apuStack80 + lVar2 * 0x1ffffffffffffffe));
    }
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack80[2] = *local_20;
    apuStack80[lVar2 * 0x1ffffffffffffffe] = 0x41418e;
    printDoubleLine(apuStack80[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_12_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_17_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) break;
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) break;
    puVar1 = (uint *)malloc(8);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    puVar1[1] = 6;
    *__ptr = puVar1;
    puVar1 = *__ptr;
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
    free(__ptr);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_17_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_15_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  uint local_14;
  undefined8 ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x22);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_14 = *(uint *)local_10;
  (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x4143b5;
  printIntLine((ulong)local_14,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_14 = 5;
  *(uint *)local_10 = 5;
  local_18 = *(uint *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x414417;
  printIntLine((ulong)local_18);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_14 = 5;
  *(uint *)local_10 = 5;
  local_18 = *(uint *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x414479;
  printIntLine((ulong)local_18);
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_15_good(void)

{
  good1();
  good2();
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


void CWE758_Undefined_Behavior__int_pointer_malloc_use_08_bad(void)

{
  uint *puVar1;
  int iVar2;
  uint **__ptr;
  
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint **__ptr;
  uint *puVar2;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (uint *)malloc(4);
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 5;
    *__ptr = puVar2;
    printIntLine((ulong)**__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint **__ptr;
  uint *puVar2;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (uint *)malloc(4);
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 5;
    *__ptr = puVar2;
    printIntLine((ulong)**__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_07_bad(void)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  if (staticFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (undefined8 *)*__ptr;
    free(__ptr);
    printDoubleLine(*puVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  if (staticFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (undefined8 *)malloc(8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar1;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  if (staticFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (undefined8 *)malloc(8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar1;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_07_good(void)

{
  good1();
  good2();
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


void CWE758_Undefined_Behavior__long_malloc_use_08_bad(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *__ptr;
  
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLongLine(uVar1);
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_11_bad(void)

{
  uint *puVar1;
  int iVar2;
  uint **__ptr;
  
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
  }
  return;
}


void good1(void)

{
  int iVar1;
  uint **__ptr;
  uint *puVar2;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (uint *)malloc(8);
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 5;
    puVar2[1] = 6;
    *__ptr = puVar2;
    puVar2 = *__ptr;
    printIntLine((ulong)*puVar2);
    printIntLine((ulong)puVar2[1]);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  uint **__ptr;
  uint *puVar2;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (uint *)malloc(8);
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 5;
    puVar2[1] = 6;
    *__ptr = puVar2;
    puVar2 = *__ptr;
    printIntLine((ulong)*puVar2);
    printIntLine((ulong)puVar2[1]);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_02_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = *__ptr;
  free(__ptr);
  printIntLine((ulong)*puVar1);
  printIntLine((ulong)puVar1[1]);
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(8);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  puVar1[1] = 6;
  *__ptr = puVar1;
  puVar1 = *__ptr;
  printIntLine((ulong)*puVar1);
  printIntLine((ulong)puVar1[1]);
  free(__ptr);
  return;
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(8);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  puVar1[1] = 6;
  *__ptr = puVar1;
  puVar1 = *__ptr;
  printIntLine((ulong)*puVar1);
  printIntLine((ulong)puVar1[1]);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 uStack48;
  char local_22;
  undefined local_21;
  undefined8 ***local_20;
  char local_11;
  undefined8 ***local_10;
  
  uStack48 = 0x414d1f;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
    local_20 = &local_20 + lVar2 * 0x1ffffffffffffffe;
    local_21 = 5;
    *(char *)local_20 = 5;
    local_22 = *(char *)local_20;
    (&uStack48)[lVar2 * 0x1ffffffffffffffe] = 0x414dc5;
    printHexCharLine((ulong)(uint)(int)local_22);
  }
  else {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
    local_10 = &local_20 + lVar2 * 0x1ffffffffffffffe;
    local_11 = *(char *)local_10;
    (&uStack48)[lVar2 * 0x1ffffffffffffffe] = 0x414d6c;
    printHexCharLine((ulong)(uint)(int)local_11);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 uStack48;
  char local_22;
  undefined local_21;
  undefined8 ***local_20;
  char local_12;
  undefined local_11;
  undefined8 ***local_10;
  
  uStack48 = 0x414dd9;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
    local_20 = &local_20 + lVar2 * 0x1ffffffffffffffe;
    local_21 = 5;
    *(char *)local_20 = 5;
    local_22 = *(char *)local_20;
    (&uStack48)[lVar2 * 0x1ffffffffffffffe] = 0x414e8d;
    printHexCharLine((ulong)(uint)(int)local_22);
  }
  else {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
    local_10 = &local_20 + lVar2 * 0x1ffffffffffffffe;
    local_11 = 5;
    *(char *)local_10 = 5;
    local_12 = *(char *)local_10;
    (&uStack48)[lVar2 * 0x1ffffffffffffffe] = 0x414e34;
    printHexCharLine((ulong)(uint)(int)local_12);
  }
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_12_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_07_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  if (staticFive == 5) {
    auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    uVar1 = *(uint *)local_18;
    (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x414efe;
    printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
    uVar1 = *(uint *)((long)local_18 + 4);
    (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x414f0c;
    printIntLine((ulong)uVar1);
  }
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (staticFive == 5) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x414f6e;
    apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x414f83;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    apuStack48[3][1] = 6;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x414fbb;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack48[2][1];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x414fc9;
    printIntLine((ulong)uVar1);
  }
  else {
    apuStack48[0] = (uint *)0x414f2b;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (staticFive == 5) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x415020;
    apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x415035;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    apuStack48[3][1] = 6;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41506d;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack48[2][1];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41507b;
    printIntLine((ulong)uVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_07_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  if (staticFive == 5) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
  }
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (staticFive == 5) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(4);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    *__ptr = puVar1;
    printIntLine((ulong)**__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (staticFive == 5) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(4);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    *__ptr = puVar1;
    printIntLine((ulong)**__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_10_bad(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  if (globalTrue != 0) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
  }
  return;
}


void good1(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  if (globalFalse == 0) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  if (globalTrue != 0) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_04_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    uVar1 = *__ptr;
    free(__ptr);
    printLongLine(uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00415405) */

void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__long_malloc_use_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_05_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  if (staticTrue != 0) {
    auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    uVar1 = *(uint *)local_18;
    (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x415548;
    printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (staticFalse == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4155a9;
    apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4155be;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4155eb;
    printIntLine((ulong)uVar1);
  }
  else {
    apuStack48[0] = (uint *)0x415566;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (staticTrue != 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x415641;
    apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x415656;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x415683;
    printIntLine((ulong)uVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_03_bad(void)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (undefined8 *)*__ptr;
  free(__ptr);
  printDoubleLine(*puVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x4014000000000000;
  *(undefined8 **)__ptr = puVar1;
  printDoubleLine(*(undefined8 *)*__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x4014000000000000;
  *(undefined8 **)__ptr = puVar1;
  printDoubleLine(*(undefined8 *)*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_10_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  if (globalTrue != 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
  }
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (globalFalse == 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(8);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    puVar1[1] = 6;
    *__ptr = puVar1;
    puVar1 = *__ptr;
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (globalTrue != 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(8);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    puVar1[1] = 6;
    *__ptr = puVar1;
    puVar1 = *__ptr;
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_03_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printLongLongLine(uVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_02_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = *local_10;
  apuStack48[2] = *apuStack48[3];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x415b88;
  printDoubleLine(apuStack48[2],uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x415bd0;
  local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x415be5;
    exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  }
  *local_18 = 0x4014000000000000;
  *local_10 = local_18;
  local_20 = *local_10;
  apuStack64[2] = *local_20;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x415c21;
  printDoubleLine(apuStack64[2]);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x415c69;
  local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x415c7e;
    exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  }
  *local_18 = 0x4014000000000000;
  *local_10 = local_18;
  local_20 = *local_10;
  apuStack64[2] = *local_20;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x415cba;
  printDoubleLine(apuStack64[2]);
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_05_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  if (staticTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x415d33;
    printLongLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (staticFalse == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x415db1;
    printLongLongLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x415d51;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (staticTrue != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x415e23;
    printLongLongLine(apuStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_18_bad(void)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (undefined8 *)*__ptr;
  free(__ptr);
  printDoubleLine(*puVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x4014000000000000;
  *(undefined8 **)__ptr = puVar1;
  printDoubleLine(*(undefined8 *)*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_18_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_17_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined *puVar3;
  undefined auStack40 [15];
  char local_19;
  char *local_18;
  int local_c;
  
  local_c = 0;
  puVar3 = auStack40;
  while (local_c < 1) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x1f);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0) * -0x10;
    local_18 = (char *)((ulong)(puVar3 + lVar2 + 0xf) & 0xfffffffffffffff0);
    local_19 = *local_18;
    *(undefined8 *)(puVar3 + lVar2 + -8) = 0x415f90;
    printHexCharLine((ulong)(uint)(int)local_19,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    local_c = local_c + 1;
    puVar3 = puVar3 + lVar2;
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined *puVar2;
  undefined auStack40 [14];
  char local_1a;
  undefined local_19;
  char *local_18;
  int local_c;
  
  local_c = 0;
  puVar2 = auStack40;
  while (local_c < 1) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0) * -0x10;
    local_18 = (char *)((ulong)(puVar2 + lVar1 + 0xf) & 0xfffffffffffffff0);
    local_19 = 5;
    *local_18 = 5;
    local_1a = *local_18;
    *(undefined8 *)(puVar2 + lVar1 + -8) = 0x416004;
    printHexCharLine((ulong)(uint)(int)local_1a);
    local_c = local_c + 1;
    puVar2 = puVar2 + lVar1;
  }
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_17_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_03_bad(void)

{
  char cVar1;
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  cVar1 = *__ptr;
  free(__ptr);
  printHexCharLine((ulong)(uint)(int)cVar1);
  return;
}


void good1(void)

{
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printHexCharLine((ulong)(uint)(int)*__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printHexCharLine((ulong)(uint)(int)*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_01_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = *__ptr;
  free(__ptr);
  printIntLine((ulong)*puVar1);
  printIntLine((ulong)puVar1[1]);
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(8);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  puVar1[1] = 6;
  *__ptr = puVar1;
  puVar1 = *__ptr;
  printIntLine((ulong)*puVar1);
  printIntLine((ulong)puVar1[1]);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_01_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_14_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  if (globalFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x416297;
    printLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [3];
  char *local_18;
  undefined8 **local_10;
  
  if (globalFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    local_18 = "string";
    *local_10 = (undefined8 *)0x42b6bd;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x416316;
    printLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x4162b6;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  char *apcStack48 [4];
  char **local_10;
  
  if (globalFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apcStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apcStack48[3] = "string";
    *local_10 = "string";
    apcStack48[2] = *local_10;
    apcStack48[lVar1 * 0x1ffffffffffffffe] = 0x416389;
    printLine(apcStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined8 uStack32;
  char local_11;
  undefined8 ***local_10;
  
  uStack32 = 0x4163b7;
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x1f);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    local_11 = *(char *)local_10;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x416404;
    printHexCharLine((ulong)(uint)(int)local_11,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ***local_10;
  
  uStack32 = 0x416418;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_11 = 5;
    *(char *)local_10 = 5;
    local_12 = *(char *)local_10;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41647f;
    printHexCharLine((ulong)(uint)(int)local_12);
  }
  else {
    uStack32 = 0x416426;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ***local_10;
  
  uStack32 = 0x416493;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_11 = 5;
    *(char *)local_10 = 5;
    local_12 = *(char *)local_10;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x4164ee;
    printHexCharLine((ulong)(uint)(int)local_12);
  }
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_02_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  char local_11;
  undefined8 ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x1f);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_11 = *(char *)local_10;
  (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41655b;
  printHexCharLine((ulong)(uint)(int)local_11,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_11 = 5;
  *(char *)local_10 = 5;
  local_12 = *(char *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x4165bc;
  printHexCharLine((ulong)(uint)(int)local_12);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_11 = 5;
  *(char *)local_10 = 5;
  local_12 = *(char *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41661d;
  printHexCharLine((ulong)(uint)(int)local_12);
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_18_bad(void)

{
  char cVar1;
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  cVar1 = *__ptr;
  free(__ptr);
  printHexCharLine((ulong)(uint)(int)cVar1);
  return;
}


void good1(void)

{
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printHexCharLine((ulong)(uint)(int)*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_18_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_10_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (globalTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = *local_10;
    apuStack48[2] = *apuStack48[3];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x416753;
    printDoubleLine(apuStack48[2],uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  if (globalFalse == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x4167b4;
    local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x4167c9;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    }
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack64[2] = *local_20;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x416805;
    printDoubleLine(apuStack64[2]);
  }
  else {
    apuStack64[0] = (undefined8 *)0x416771;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  if (globalTrue != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41685b;
    local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x416870;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    }
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack64[2] = *local_20;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x4168ac;
    printDoubleLine(apuStack64[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_05_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  if (staticTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x416925;
    printLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (staticFalse == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x4169a3;
    printLongLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x416943;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (staticTrue != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x416a15;
    printLongLine(apuStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_12_bad(void)

{
  int iVar1;
  undefined8 *__ptr;
  undefined8 *puVar2;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (undefined8 *)malloc(8);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar2;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
  }
  else {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (undefined8 *)*__ptr;
    free(__ptr);
    printDoubleLine(*puVar2);
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 *__ptr;
  undefined8 *puVar2;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (undefined8 *)malloc(8);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar2;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
  }
  else {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (undefined8 *)malloc(8);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar2;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_12_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_13_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x416cba;
    printLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x416d39;
    printLongLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x416cd9;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x416dac;
    printLongLine(apuStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_06_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  uint local_14;
  undefined8 ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x22);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_14 = *(uint *)local_10;
  (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x416e21;
  printIntLine((ulong)local_14,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00416e35) */

void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_14 = 5;
  *(uint *)local_10 = 5;
  local_18 = *(uint *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x416e98;
  printIntLine((ulong)local_18);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_14 = 5;
  *(uint *)local_10 = 5;
  local_18 = *(uint *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x416f03;
  printIntLine((ulong)local_18);
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_10_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  char local_11;
  undefined8 ****local_10;
  
  if (globalTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x1f);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_11 = *(char *)local_10;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x416f7a;
    printHexCharLine((ulong)(uint)(int)local_11,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ***local_10;
  
  if (globalFalse == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_11 = 5;
    *(char *)local_10 = 5;
    local_12 = *(char *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x416ff1;
    printHexCharLine((ulong)(uint)(int)local_12);
  }
  else {
    uStack32 = 0x416f98;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ****local_10;
  
  if (globalTrue != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_11 = 5;
    *(char *)local_10 = 5;
    local_12 = *(char *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41705c;
    printHexCharLine((ulong)(uint)(int)local_12);
  }
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_02_bad(void)

{
  uint uVar1;
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printIntLine((ulong)uVar1);
  return;
}


void good1(void)

{
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printIntLine((ulong)*__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printIntLine((ulong)*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_01_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = *local_10;
  apuStack48[2] = *apuStack48[3];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4171e6;
  printDoubleLine(apuStack48[2],uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41722e;
  local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x417243;
    exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  }
  *local_18 = 0x4014000000000000;
  *local_10 = local_18;
  local_20 = *local_10;
  apuStack64[2] = *local_20;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41727f;
  printDoubleLine(apuStack64[2]);
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_01_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_16_bad(void)

{
  uint uVar1;
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printIntLine((ulong)uVar1);
  return;
}


void good1(void)

{
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printIntLine((ulong)*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_16_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_12_bad(void)

{
  char cVar1;
  int iVar2;
  char *__ptr;
  
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
  }
  else {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    cVar1 = *__ptr;
    free(__ptr);
    printHexCharLine((ulong)(uint)(int)cVar1);
  }
  return;
}


void good1(void)

{
  int iVar1;
  char *__ptr;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
  }
  else {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_12_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_07_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  if (staticFive == 5) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
  }
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (staticFive == 5) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(8);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    puVar1[1] = 6;
    *__ptr = puVar1;
    puVar1 = *__ptr;
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (staticFive == 5) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(8);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    puVar1[1] = 6;
    *__ptr = puVar1;
    puVar1 = *__ptr;
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_15_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  uVar1 = *(uint *)local_18;
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x4176e2;
  printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41772b;
  apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x417740;
    exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  }
  *apuStack48[3] = 5;
  *local_10 = apuStack48[3];
  apuStack48[2] = *local_10;
  uVar1 = *apuStack48[2];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41776d;
  printIntLine((ulong)uVar1);
  return;
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4177b6;
  apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4177cb;
    exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  }
  *apuStack48[3] = 5;
  *local_10 = apuStack48[3];
  apuStack48[2] = *local_10;
  uVar1 = *apuStack48[2];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4177f8;
  printIntLine((ulong)uVar1);
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_16_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  ulong *puStack32;
  ulong ***local_18;
  ulong ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x417866;
  printIntLine((ulong)local_18 & 0xffffffff,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x417870;
  printIntLine((ulong)local_18 >> 0x20);
  return;
}


void good1(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  local_18 = 1;
  uStack20 = 2;
  *local_10 = 0x200000001;
  auStack48[1] = *local_10;
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x4178dd;
  printIntLine(auStack48[1] & 0xffffffff);
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x4178e7;
  printIntLine(auStack48[1] >> 0x20);
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_16_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_01_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  char local_11;
  undefined8 ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x1f);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_11 = *(char *)local_10;
  (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41794b;
  printHexCharLine((ulong)(uint)(int)local_11,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_11 = 5;
  *(char *)local_10 = 5;
  local_12 = *(char *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x4179ac;
  printHexCharLine((ulong)(uint)(int)local_12);
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_01_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_04_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x417a1a;
  printLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Removing unreachable block (ram,0x00417a2d) */

void good1(void)

{
  long lVar1;
  char *apcStack48 [4];
  char **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apcStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apcStack48[3] = "string";
  *local_10 = "string";
  apcStack48[2] = *local_10;
  apcStack48[lVar1 * 0x1ffffffffffffffe] = 0x417a97;
  printLine(apcStack48[2]);
  return;
}


void good2(void)

{
  long lVar1;
  char *apcStack48 [4];
  char **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apcStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apcStack48[3] = "string";
  *local_10 = "string";
  apcStack48[2] = *local_10;
  apcStack48[lVar1 * 0x1ffffffffffffffe] = 0x417b08;
  printLine(apcStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_16_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printLine(uVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x42b780;
  printLine(*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_16_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_11_bad(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *__ptr;
  
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (undefined8 *)*__ptr;
    free(__ptr);
    printDoubleLine(*puVar1);
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 *__ptr;
  undefined8 *puVar2;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (undefined8 *)malloc(8);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar2;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  undefined8 *__ptr;
  undefined8 *puVar2;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar2 = (undefined8 *)malloc(8);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar2 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar2;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_02_bad(void)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (undefined8 *)*__ptr;
  free(__ptr);
  printDoubleLine(*puVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x4014000000000000;
  *(undefined8 **)__ptr = puVar1;
  printDoubleLine(*(undefined8 *)*__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x4014000000000000;
  *(undefined8 **)__ptr = puVar1;
  printDoubleLine(*(undefined8 *)*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_05_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  if (staticTrue != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLongLongLine(uVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  if (staticFalse == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  if (staticTrue != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_17_bad(void)

{
  char cVar1;
  char *__ptr;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) break;
    cVar1 = *__ptr;
    free(__ptr);
    printHexCharLine((ulong)(uint)(int)cVar1);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good1(void)

{
  char *__ptr;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) break;
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__char_malloc_use_17_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_03_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x4181b5;
  printLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x41821d;
  printLongLine(apuStack48[2]);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x418285;
  printLongLine(apuStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_17_bad(void)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) break;
    puVar1 = (undefined8 *)*__ptr;
    free(__ptr);
    printDoubleLine(*puVar1);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good1(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) break;
    puVar1 = (undefined8 *)malloc(8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar1;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_17_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_09_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLine(uVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  if (GLOBAL_CONST_FALSE == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x42b7c6;
    printLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x42b7c6;
    printLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_09_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = *local_10;
    apuStack48[2] = *apuStack48[3];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x418577;
    printDoubleLine(apuStack48[2],uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x4185d8;
    local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x4185ed;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    }
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack64[2] = *local_20;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x418629;
    printDoubleLine(apuStack64[2]);
  }
  else {
    apuStack64[0] = (undefined8 *)0x418595;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41867f;
    local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x418694;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    }
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack64[2] = *local_20;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x4186d0;
    printDoubleLine(apuStack64[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_10_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  if (globalTrue != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLongLine(uVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  if (globalFalse == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  if (globalTrue != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_14_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  if (globalFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLine(uVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  if (globalFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x42b80c;
    printLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  if (globalFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x42b80c;
    printLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_11_bad(void)

{
  char cVar1;
  int iVar2;
  char *__ptr;
  
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    cVar1 = *__ptr;
    free(__ptr);
    printHexCharLine((ulong)(uint)(int)cVar1);
  }
  return;
}


void good1(void)

{
  int iVar1;
  char *__ptr;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  char *__ptr;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_02_bad(void)

{
  char cVar1;
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  cVar1 = *__ptr;
  free(__ptr);
  printHexCharLine((ulong)(uint)(int)cVar1);
  return;
}


void good1(void)

{
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printHexCharLine((ulong)(uint)(int)*__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printHexCharLine((ulong)(uint)(int)*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_18_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x418c3d;
  printLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x418ca6;
  printLongLine(apuStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_18_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_10_bad(void)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  if (globalTrue != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (undefined8 *)*__ptr;
    free(__ptr);
    printDoubleLine(*puVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  if (globalFalse == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (undefined8 *)malloc(8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar1;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  if (globalTrue != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (undefined8 *)malloc(8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar1;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_14_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  uint local_14;
  undefined8 ****local_10;
  
  if (globalFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x22);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_14 = *(uint *)local_10;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x418ed2;
    printIntLine((ulong)local_14,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ***local_10;
  
  if (globalFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_14 = 5;
    *(uint *)local_10 = 5;
    local_18 = *(uint *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x418f4a;
    printIntLine((ulong)local_18);
  }
  else {
    uStack32 = 0x418ef1;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ****local_10;
  
  if (globalFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_14 = 5;
    *(uint *)local_10 = 5;
    local_18 = *(uint *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x418fb6;
    printIntLine((ulong)local_18);
  }
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_14_good(void)

{
  good1();
  good2();
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


void CWE758_Undefined_Behavior__char_alloca_use_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined8 uStack32;
  char local_11;
  undefined8 ***local_10;
  
  uStack32 = 0x418ffa;
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x1f);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    local_11 = *(char *)local_10;
    (&uStack32)[lVar3 * 0x1ffffffffffffffe] = 0x419047;
    printHexCharLine((ulong)(uint)(int)local_11,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ***local_10;
  
  uStack32 = 0x41905b;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_11 = 5;
    *(char *)local_10 = 5;
    local_12 = *(char *)local_10;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x4190c2;
    printHexCharLine((ulong)(uint)(int)local_12);
  }
  else {
    uStack32 = 0x419069;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ***local_10;
  
  uStack32 = 0x4190d6;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_11 = 5;
    *(char *)local_10 = 5;
    local_12 = *(char *)local_10;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x419131;
    printHexCharLine((ulong)(uint)(int)local_12);
  }
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_13_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLongLine(uVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_06_bad(void)

{
  uint uVar1;
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr != (uint *)0x0) {
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00419302) */

void good1(void)

{
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr != (uint *)0x0) {
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good2(void)

{
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr != (uint *)0x0) {
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__int_malloc_use_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_10_bad(void)

{
  char cVar1;
  char *__ptr;
  
  if (globalTrue != 0) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    cVar1 = *__ptr;
    free(__ptr);
    printHexCharLine((ulong)(uint)(int)cVar1);
  }
  return;
}


void good1(void)

{
  char *__ptr;
  
  if (globalFalse == 0) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  char *__ptr;
  
  if (globalTrue != 0) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_01_bad(void)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (undefined8 *)*__ptr;
  free(__ptr);
  printDoubleLine(*puVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x4014000000000000;
  *(undefined8 **)__ptr = puVar1;
  printDoubleLine(*(undefined8 *)*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_01_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_15_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x419660;
  printLongLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x4196c9;
  printLongLongLine(apuStack48[2]);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x419732;
  printLongLongLine(apuStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack64 [4];
  undefined8 **local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  apuStack64[0] = (undefined8 *)0x419761;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_20 = apuStack64 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack64[3] = 5;
    *local_20 = (undefined8 *)0x5;
    apuStack64[2] = *local_20;
    apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x419810;
    printLongLine(apuStack64[2]);
  }
  else {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar2 * 0x1ffffffffffffffe + 2;
    local_18 = *local_10;
    apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x4197b0;
    printLongLine(local_18);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack64 [3];
  undefined8 **local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined8 **local_10;
  
  apuStack64[0] = (undefined8 *)0x419824;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_28 = apuStack64 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack64[2] = 5;
    *local_28 = (undefined8 *)0x5;
    apuStack64[1] = *local_28;
    apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x4198e6;
    printLongLine(apuStack64[1]);
  }
  else {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar2 * 0x1ffffffffffffffe + 2;
    local_18 = 5;
    *local_10 = (undefined8 *)0x5;
    local_20 = *local_10;
    apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x419886;
    printLongLine(local_20);
  }
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_12_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_09_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLongLongLine(uVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  if (GLOBAL_CONST_FALSE == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_06_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  ulong *puStack32;
  ulong ***local_18;
  ulong ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x419aa1;
  printIntLine((ulong)local_18 & 0xffffffff,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x419aab;
  printIntLine((ulong)local_18 >> 0x20);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00419abf) */

void good1(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  local_18 = 1;
  uStack20 = 2;
  *local_10 = 0x200000001;
  auStack48[1] = *local_10;
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x419b2d;
  printIntLine(auStack48[1] & 0xffffffff);
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x419b37;
  printIntLine(auStack48[1] >> 0x20);
  return;
}


void good2(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  local_18 = 1;
  uStack20 = 2;
  *local_10 = 0x200000001;
  auStack48[1] = *local_10;
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x419bad;
  printIntLine(auStack48[1] & 0xffffffff);
  auStack48[lVar1 * 0x1ffffffffffffffe] = 0x419bb7;
  printIntLine(auStack48[1] >> 0x20);
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_15_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = *__ptr;
  free(__ptr);
  printIntLine((ulong)*puVar1);
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(4);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  *__ptr = puVar1;
  printIntLine((ulong)**__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(4);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  *__ptr = puVar1;
  printIntLine((ulong)**__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_16_bad(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printIntLine(uVar1 & 0xffffffff);
  printIntLine(uVar1 >> 0x20);
  return;
}


void good1(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x200000001;
  uVar1 = *__ptr;
  printIntLine(uVar1 & 0xffffffff);
  printIntLine(uVar1 >> 0x20);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_16_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_01_bad(void)

{
  char cVar1;
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  cVar1 = *__ptr;
  free(__ptr);
  printHexCharLine((ulong)(uint)(int)cVar1);
  return;
}


void good1(void)

{
  char *__ptr;
  
  __ptr = (char *)malloc(1);
  if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printHexCharLine((ulong)(uint)(int)*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_01_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_04_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    uVar1 = *__ptr;
    free(__ptr);
    printLine(uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00419f2a) */

void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 0x42b8f9;
    printLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 0x42b8f9;
    printLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_15_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  uVar1 = *(uint *)local_18;
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x41a063;
  printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  uVar1 = *(uint *)((long)local_18 + 4);
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x41a071;
  printIntLine((ulong)uVar1);
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41a0ba;
  apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41a0cf;
    exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  }
  *apuStack48[3] = 5;
  apuStack48[3][1] = 6;
  *local_10 = apuStack48[3];
  apuStack48[2] = *local_10;
  uVar1 = *apuStack48[2];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41a107;
  printIntLine((ulong)uVar1);
  uVar1 = apuStack48[2][1];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41a115;
  printIntLine((ulong)uVar1);
  return;
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41a15e;
  apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41a173;
    exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  }
  *apuStack48[3] = 5;
  apuStack48[3][1] = 6;
  *local_10 = apuStack48[3];
  apuStack48[2] = *local_10;
  uVar1 = *apuStack48[2];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41a1ab;
  printIntLine((ulong)uVar1);
  uVar1 = apuStack48[2][1];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41a1b9;
  printIntLine((ulong)uVar1);
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_04_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  uint local_14;
  undefined8 ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x22);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_14 = *(uint *)local_10;
  (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41a22e;
  printIntLine((ulong)local_14,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041a241) */

void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_14 = 5;
  *(uint *)local_10 = 5;
  local_18 = *(uint *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41a2a4;
  printIntLine((ulong)local_18);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_14 = 5;
  *(uint *)local_10 = 5;
  local_18 = *(uint *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41a30e;
  printIntLine((ulong)local_18);
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_03_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printLongLine(uVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_09_bad(void)

{
  undefined8 *puVar1;
  undefined8 *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (undefined8 *)*__ptr;
    free(__ptr);
    printDoubleLine(*puVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  if (GLOBAL_CONST_FALSE == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (undefined8 *)malloc(8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar1;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (undefined8 *)malloc(8);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 0x4014000000000000;
    *(undefined8 **)__ptr = puVar1;
    printDoubleLine(*(undefined8 *)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__double_pointer_malloc_use_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_09_bad(void)

{
  char cVar1;
  char *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    cVar1 = *__ptr;
    free(__ptr);
    printHexCharLine((ulong)(uint)(int)cVar1);
  }
  return;
}


void good1(void)

{
  char *__ptr;
  
  if (GLOBAL_CONST_FALSE == 0) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  char *__ptr;
  
  if (GLOBAL_CONST_TRUE != 0) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  apuStack32[0] = (undefined8 *)0x41a75e;
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar3 * 0x1ffffffffffffffe] = 0x41a7ad;
    printLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  apuStack48[0] = (undefined8 *)0x41a7c1;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41a82f;
    printLongLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x41a7cf;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  apuStack48[0] = (undefined8 *)0x41a843;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41a8a5;
    printLongLine(apuStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_02_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41a914;
  printLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x41a97c;
  printLongLine(apuStack48[2]);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x41a9e4;
  printLongLine(apuStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_17_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined *puVar3;
  undefined auStack56 [8];
  undefined8 local_30;
  undefined8 *local_20;
  undefined8 *local_18;
  int local_c;
  
  local_c = 0;
  puVar3 = auStack56;
  while (local_c < 1) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0) * -0x10;
    local_18 = (undefined8 *)((ulong)(puVar3 + lVar2 + 0xf) & 0xfffffffffffffff0);
    local_20 = (undefined8 *)*local_18;
    local_30 = *local_20;
    *(undefined8 *)(puVar3 + lVar2 + -8) = 0x41aa65;
    printDoubleLine(local_30,uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    local_c = local_c + 1;
    puVar3 = puVar3 + lVar2;
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined *puVar2;
  undefined auStack56 [8];
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  int local_c;
  
  local_c = 0;
  puVar2 = auStack56;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0) * -0x10;
    local_18 = (undefined8 *)((ulong)(puVar2 + lVar1 + 0xf) & 0xfffffffffffffff0);
    *(undefined8 *)(puVar2 + lVar1 + -8) = 0x41aac3;
    local_20 = (undefined8 *)malloc(8,puVar2[lVar1 + -8]);
    if (local_20 == (undefined8 *)0x0) break;
    *local_20 = 0x4014000000000000;
    *(undefined8 **)local_18 = local_20;
    local_28 = (undefined8 *)*local_18;
    local_30 = *local_28;
    *(undefined8 *)(puVar2 + lVar1 + -8) = 0x41ab14;
    printDoubleLine(local_30);
    local_c = local_c + 1;
    puVar2 = puVar2 + lVar1;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar2 + lVar1 + -8) = 0x41aad8;
  exit(0xffffffff,puVar2[lVar1 + -8]);
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_17_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_18_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printLongLine(uVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_18_good(void)

{
  good1();
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


void CWE758_Undefined_Behavior__int64_t_malloc_use_08_bad(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *__ptr;
  
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLongLongLine(uVar1);
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_08_good(void)

{
  good1();
  good2();
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


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_08_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  int iVar3;
  long lVar4;
  uint *puStack32;
  uint ****local_18;
  uint *****local_10;
  
  puStack32 = (uint *)0x41ad89;
  iVar3 = staticReturnsTrue();
  if (iVar3 != 0) {
    auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar4 = SUB168(auVar2 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar4 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    uVar1 = *(uint *)local_18;
    (&puStack32)[lVar4 * 0x1ffffffffffffffe] = 0x41add9;
    printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
    uVar1 = *(uint *)((long)local_18 + 4);
    (&puStack32)[lVar4 * 0x1ffffffffffffffe] = 0x41ade7;
    printIntLine((ulong)uVar1);
  }
  return;
}


void good1(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *apuStack48 [4];
  uint **local_10;
  
  apuStack48[0] = (uint *)0x41adfb;
  iVar2 = staticReturnsFalse();
  if (iVar2 == 0) {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x41ae4c;
    apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar3 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x41ae61;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar3 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    apuStack48[3][1] = 6;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x41ae99;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack48[2][1];
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x41aea7;
    printIntLine((ulong)uVar1);
  }
  else {
    apuStack48[0] = (uint *)0x41ae09;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *apuStack48 [4];
  uint **local_10;
  
  apuStack48[0] = (uint *)0x41aebb;
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    lVar3 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x41af01;
    apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar3 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x41af16;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar3 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    apuStack48[3][1] = 6;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x41af4e;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack48[2][1];
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x41af5c;
    printIntLine((ulong)uVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_07_bad(void)

{
  char cVar1;
  char *__ptr;
  
  if (staticFive == 5) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    cVar1 = *__ptr;
    free(__ptr);
    printHexCharLine((ulong)(uint)(int)cVar1);
  }
  return;
}


void good1(void)

{
  char *__ptr;
  
  if (staticFive == 5) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  char *__ptr;
  
  if (staticFive == 5) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_11_bad(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *__ptr;
  
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLine(uVar1);
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x42b9b0;
    printLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x42b9b0;
    printLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_10_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  if (globalTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41b270;
    printLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (globalFalse == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x41b2ee;
    printLongLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x41b28e;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (globalTrue != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x41b360;
    printLongLine(apuStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_10_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_13_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41b3da;
    printLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [3];
  char *local_18;
  undefined8 **local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    local_18 = "string";
    *local_10 = (undefined8 *)0x42b9e1;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x41b459;
    printLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x41b3f9;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  char *apcStack48 [4];
  char **local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apcStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apcStack48[3] = "string";
    *local_10 = "string";
    apcStack48[2] = *local_10;
    apcStack48[lVar1 * 0x1ffffffffffffffe] = 0x41b4cc;
    printLine(apcStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_14_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  ulong *puStack32;
  ulong ***local_18;
  ulong ****local_10;
  
  if (globalFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41b544;
    printIntLine((ulong)local_18 & 0xffffffff,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41b54e;
    printIntLine((ulong)local_18 >> 0x20);
  }
  return;
}


void good1(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  if (globalFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    local_18 = 1;
    uStack20 = 2;
    *local_10 = 0x200000001;
    auStack48[1] = *local_10;
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x41b5d1;
    printIntLine(auStack48[1] & 0xffffffff);
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x41b5db;
    printIntLine(auStack48[1] >> 0x20);
  }
  else {
    auStack48[0] = 0x41b56d;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  if (globalFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    local_18 = 1;
    uStack20 = 2;
    *local_10 = 0x200000001;
    auStack48[1] = *local_10;
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x41b652;
    printIntLine(auStack48[1] & 0xffffffff);
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x41b65c;
    printIntLine(auStack48[1] >> 0x20);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_14_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  if (globalFive == 5) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
  }
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (globalFive == 5) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(4);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    *__ptr = puVar1;
    printIntLine((ulong)**__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (globalFive == 5) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(4);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    *__ptr = puVar1;
    printIntLine((ulong)**__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int_pointer_malloc_use_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_12_bad(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *__ptr;
  
  iVar2 = globalReturnsTrueOrFalse();
  if (iVar2 == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  else {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLongLine(uVar1);
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  else {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_12_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_06_bad(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr != (ulong *)0x0) {
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0041ba03) */

void good1(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr != (ulong *)0x0) {
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good2(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr != (ulong *)0x0) {
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__struct_malloc_use_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_05_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  if (staticTrue != 0) {
    auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    uVar1 = *(uint *)local_18;
    (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x41bb63;
    printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
    uVar1 = *(uint *)((long)local_18 + 4);
    (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x41bb71;
    printIntLine((ulong)uVar1);
  }
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (staticFalse == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41bbd2;
    apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41bbe7;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    apuStack48[3][1] = 6;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41bc1f;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack48[2][1];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41bc2d;
    printIntLine((ulong)uVar1);
  }
  else {
    apuStack48[0] = (uint *)0x41bb8f;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (staticTrue != 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41bc83;
    apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41bc98;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    apuStack48[3][1] = 6;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41bcd0;
    printIntLine((ulong)uVar1);
    uVar1 = apuStack48[2][1];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41bcde;
    printIntLine((ulong)uVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_01_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41bd4d;
  printLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x41bdb5;
  printLongLine(apuStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_01_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_06_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    uVar1 = *__ptr;
    free(__ptr);
    printLine(uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0041be2f) */

void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 0x42ba5d;
    printLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 0x42ba5d;
    printLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_09_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  ulong *puStack32;
  ulong ***local_18;
  ulong ****local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41bf70;
    printIntLine((ulong)local_18 & 0xffffffff,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41bf7a;
    printIntLine((ulong)local_18 >> 0x20);
  }
  return;
}


void good1(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    local_18 = 1;
    uStack20 = 2;
    *local_10 = 0x200000001;
    auStack48[1] = *local_10;
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x41bffc;
    printIntLine(auStack48[1] & 0xffffffff);
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x41c006;
    printIntLine(auStack48[1] >> 0x20);
  }
  else {
    auStack48[0] = 0x41bf98;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    local_18 = 1;
    uStack20 = 2;
    *local_10 = 0x200000001;
    auStack48[1] = *local_10;
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x41c07c;
    printIntLine(auStack48[1] & 0xffffffff);
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x41c086;
    printIntLine(auStack48[1] >> 0x20);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_09_good(void)

{
  good1();
  good2();
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


void CWE758_Undefined_Behavior__char_malloc_use_08_bad(void)

{
  char cVar1;
  int iVar2;
  char *__ptr;
  
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    cVar1 = *__ptr;
    free(__ptr);
    printHexCharLine((ulong)(uint)(int)cVar1);
  }
  return;
}


void good1(void)

{
  int iVar1;
  char *__ptr;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  char *__ptr;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_04_bad(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr != (ulong *)0x0) {
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0041c270) */

void good1(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr != (ulong *)0x0) {
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good2(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  __ptr = (ulong *)malloc(8);
  if (__ptr != (ulong *)0x0) {
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__struct_malloc_use_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_07_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  if (staticFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLongLongLine(uVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  if (staticFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  if (staticFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_15_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = *__ptr;
  free(__ptr);
  printIntLine((ulong)*puVar1);
  printIntLine((ulong)puVar1[1]);
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(8);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  puVar1[1] = 6;
  *__ptr = puVar1;
  puVar1 = *__ptr;
  printIntLine((ulong)*puVar1);
  printIntLine((ulong)puVar1[1]);
  free(__ptr);
  return;
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  __ptr = (uint **)malloc(8);
  if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar1 = (uint *)malloc(8);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 5;
  puVar1[1] = 6;
  *__ptr = puVar1;
  puVar1 = *__ptr;
  printIntLine((ulong)*puVar1);
  printIntLine((ulong)puVar1[1]);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_04_bad(void)

{
  uint uVar1;
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr != (uint *)0x0) {
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0041c6d0) */

void good1(void)

{
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr != (uint *)0x0) {
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good2(void)

{
  uint *__ptr;
  
  __ptr = (uint *)malloc(4);
  if (__ptr != (uint *)0x0) {
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__int_malloc_use_04_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_17_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) break;
    uVar1 = *__ptr;
    free(__ptr);
    printLongLine(uVar1);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good1(void)

{
  undefined8 *__ptr;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) break;
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__long_malloc_use_17_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_06_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41c8e5;
  printLongLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041c8f9) */

void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x41c963;
  printLongLongLine(apuStack48[2]);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x41c9d5;
  printLongLongLine(apuStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_16_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  uint local_14;
  undefined8 ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x22);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_14 = *(uint *)local_10;
  (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41ca40;
  printIntLine((ulong)local_14,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_14 = 5;
  *(uint *)local_10 = 5;
  local_18 = *(uint *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41caa2;
  printIntLine((ulong)local_18);
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_16_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_16_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printLongLongLine(uVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_16_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_07_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (staticFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = *local_10;
    apuStack48[2] = *apuStack48[3];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41cbd9;
    printDoubleLine(apuStack48[2],uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  if (staticFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41cc3b;
    local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41cc50;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    }
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack64[2] = *local_20;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41cc8c;
    printDoubleLine(apuStack64[2]);
  }
  else {
    apuStack64[0] = (undefined8 *)0x41cbf8;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  if (staticFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41cce3;
    local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41ccf8;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    }
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack64[2] = *local_20;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41cd34;
    printDoubleLine(apuStack64[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_07_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_11_bad(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *__ptr;
  
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLongLine(uVar1);
  }
  return;
}


void good1(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  undefined8 *__ptr;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_02_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printLongLine(uVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_03_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  uint local_14;
  undefined8 ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x22);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_14 = *(uint *)local_10;
  (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41d01d;
  printIntLine((ulong)local_14,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_14 = 5;
  *(uint *)local_10 = 5;
  local_18 = *(uint *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41d07e;
  printIntLine((ulong)local_18);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_14 = 5;
  *(uint *)local_10 = 5;
  local_18 = *(uint *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41d0df;
  printIntLine((ulong)local_18);
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_05_bad(void)

{
  char cVar1;
  char *__ptr;
  
  if (staticTrue != 0) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    cVar1 = *__ptr;
    free(__ptr);
    printHexCharLine((ulong)(uint)(int)cVar1);
  }
  return;
}


void good1(void)

{
  char *__ptr;
  
  if (staticFalse == 0) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  char *__ptr;
  
  if (staticTrue != 0) {
    __ptr = (char *)malloc(1);
    if (__ptr == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printHexCharLine((ulong)(uint)(int)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__char_malloc_use_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_09_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41d296;
    printLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x41d314;
    printLongLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x41d2b4;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x41d386;
    printLongLine(apuStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_18_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41d3f6;
  printLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  char *apcStack48 [4];
  char **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apcStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apcStack48[3] = "string";
  *local_10 = "string";
  apcStack48[2] = *local_10;
  apcStack48[lVar1 * 0x1ffffffffffffffe] = 0x41d45f;
  printLine(apcStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_18_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_15_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = *local_10;
  apuStack48[2] = *apuStack48[3];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41d4cd;
  printDoubleLine(apuStack48[2],uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41d516;
  local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41d52b;
    exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  }
  *local_18 = 0x4014000000000000;
  *local_10 = local_18;
  local_20 = *local_10;
  apuStack64[2] = *local_20;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41d567;
  printDoubleLine(apuStack64[2]);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41d5b0;
  local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41d5c5;
    exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
  }
  *local_18 = 0x4014000000000000;
  *local_10 = local_18;
  local_20 = *local_10;
  apuStack64[2] = *local_20;
  apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41d601;
  printDoubleLine(apuStack64[2]);
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_18_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printLongLongLine(uVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_18_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_13_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLine(uVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x42bb6d;
    printLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  if (GLOBAL_CONST_FIVE == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x42bb6d;
    printLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_14_bad(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  if (globalFive == 5) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
  }
  return;
}


void good1(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  if (globalFive == 5) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  ulong uVar1;
  ulong *__ptr;
  
  if (globalFive == 5) {
    __ptr = (ulong *)malloc(8);
    if (__ptr == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 0x200000001;
    uVar1 = *__ptr;
    printIntLine(uVar1 & 0xffffffff);
    printIntLine(uVar1 >> 0x20);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_malloc_use_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_16_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  uVar1 = *(uint *)local_18;
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x41d9f5;
  printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41da3e;
  apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41da53;
    exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  }
  *apuStack48[3] = 5;
  *local_10 = apuStack48[3];
  apuStack48[2] = *local_10;
  uVar1 = *apuStack48[2];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41da80;
  printIntLine((ulong)uVar1);
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_16_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_17_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined *puVar3;
  undefined auStack40 [12];
  uint local_1c;
  uint *local_18;
  int local_c;
  
  local_c = 0;
  puVar3 = auStack40;
  while (local_c < 1) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x22);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0) * -0x10;
    local_18 = (uint *)((ulong)(puVar3 + lVar2 + 0xf) & 0xfffffffffffffff0);
    local_1c = *local_18;
    *(undefined8 *)(puVar3 + lVar2 + -8) = 0x41daeb;
    printIntLine((ulong)local_1c,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    local_c = local_c + 1;
    puVar3 = puVar3 + lVar2;
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined *puVar2;
  undefined auStack40 [8];
  uint local_20;
  undefined4 local_1c;
  uint *local_18;
  int local_c;
  
  local_c = 0;
  puVar2 = auStack40;
  while (local_c < 1) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0) * -0x10;
    local_18 = (uint *)((ulong)(puVar2 + lVar1 + 0xf) & 0xfffffffffffffff0);
    local_1c = 5;
    *local_18 = 5;
    local_20 = *local_18;
    *(undefined8 *)(puVar2 + lVar1 + -8) = 0x41db5f;
    printIntLine((ulong)local_20);
    local_c = local_c + 1;
    puVar2 = puVar2 + lVar1;
  }
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_17_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_15_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  char local_11;
  undefined8 ****local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x1f);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
  local_11 = *(char *)local_10;
  (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41dbcc;
  printHexCharLine((ulong)(uint)(int)local_11,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_11 = 5;
  *(char *)local_10 = 5;
  local_12 = *(char *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41dc2e;
  printHexCharLine((ulong)(uint)(int)local_12);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  char local_12;
  undefined local_11;
  undefined8 ****local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
  local_11 = 5;
  *(char *)local_10 = 5;
  local_12 = *(char *)local_10;
  (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41dc90;
  printHexCharLine((ulong)(uint)(int)local_12);
  return;
}


void CWE758_Undefined_Behavior__char_alloca_use_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_13_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 uStack32;
  uint local_14;
  undefined8 ****local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x22);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_14 = *(uint *)local_10;
    (&uStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41dd07;
    printIntLine((ulong)local_14,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ***local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_14 = 5;
    *(uint *)local_10 = 5;
    local_18 = *(uint *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41dd7f;
    printIntLine((ulong)local_18);
  }
  else {
    uStack32 = 0x41dd26;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 uStack32;
  uint local_18;
  undefined4 local_14;
  undefined8 ****local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x22)) / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar1 * 0x1ffffffffffffffe;
    local_14 = 5;
    *(uint *)local_10 = 5;
    local_18 = *(uint *)local_10;
    (&uStack32)[lVar1 * 0x1ffffffffffffffe] = 0x41ddeb;
    printIntLine((ulong)local_18);
  }
  return;
}


void CWE758_Undefined_Behavior__int_alloca_use_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack64 [3];
  char *local_28;
  undefined8 **local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  apuStack64[0] = (undefined8 *)0x41de19;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_20 = apuStack64 + lVar2 * 0x1ffffffffffffffe + 2;
    local_28 = "string";
    *local_20 = (undefined8 *)0x42bb9e;
    apuStack64[2] = *local_20;
    apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x41dec8;
    printLine(apuStack64[2]);
  }
  else {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar2 * 0x1ffffffffffffffe + 2;
    local_18 = *local_10;
    apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x41de68;
    printLine(local_18);
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack64 [2];
  char *local_30;
  undefined8 **local_28;
  undefined8 *local_20;
  char *local_18;
  undefined8 **local_10;
  
  apuStack64[0] = (undefined8 *)0x41dedc;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_28 = apuStack64 + lVar2 * 0x1ffffffffffffffe + 2;
    local_30 = "string";
    *local_28 = (undefined8 *)0x42bb9e;
    apuStack64[1] = *local_28;
    apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x41df9e;
    printLine(apuStack64[1]);
  }
  else {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar2 * 0x1ffffffffffffffe + 2;
    local_18 = "string";
    *local_10 = (undefined8 *)0x42bb9e;
    local_20 = *local_10;
    apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x41df3e;
    printLine(local_20);
  }
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_12_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_05_bad(void)

{
  uint *puVar1;
  uint **__ptr;
  
  if (staticTrue != 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
  }
  return;
}


void good1(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (staticFalse == 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(8);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    puVar1[1] = 6;
    *__ptr = puVar1;
    puVar1 = *__ptr;
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint **__ptr;
  uint *puVar1;
  
  if (staticTrue != 0) {
    __ptr = (uint **)malloc(8);
    if (__ptr == (uint **)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    puVar1 = (uint *)malloc(8);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *puVar1 = 5;
    puVar1[1] = 6;
    *__ptr = puVar1;
    puVar1 = *__ptr;
    printIntLine((ulong)*puVar1);
    printIntLine((ulong)puVar1[1]);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_malloc_use_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_14_bad(void)

{
  uint uVar1;
  uint *__ptr;
  
  if (globalFive == 5) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printIntLine((ulong)uVar1);
  }
  return;
}


void good1(void)

{
  uint *__ptr;
  
  if (globalFive == 5) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint *__ptr;
  
  if (globalFive == 5) {
    __ptr = (uint *)malloc(4);
    if (__ptr == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printIntLine((ulong)*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__int_malloc_use_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_01_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printLongLine(uVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 5;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_01_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_09_bad(undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    uVar1 = *(uint *)local_18;
    (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x41e3e2;
    printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (GLOBAL_CONST_FALSE == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41e443;
    apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41e458;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41e485;
    printIntLine((ulong)uVar1);
  }
  else {
    apuStack48[0] = (uint *)0x41e400;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41e4db;
    apuStack48[3] = (uint *)malloc(4,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41e4f0;
      exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
    }
    *apuStack48[3] = 5;
    *local_10 = apuStack48[3];
    apuStack48[2] = *local_10;
    uVar1 = *apuStack48[2];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41e51d;
    printIntLine((ulong)uVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__int_pointer_alloca_use_09_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_14_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  if (globalFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41e597;
    printLongLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (globalFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x41e616;
    printLongLongLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x41e5b6;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (globalFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x41e689;
    printLongLongLine(apuStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_14_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_17_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined *puVar3;
  undefined auStack40 [8];
  undefined8 local_20;
  undefined8 *local_18;
  int local_c;
  
  local_c = 0;
  puVar3 = auStack40;
  while (local_c < 1) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0) * -0x10;
    local_18 = (undefined8 *)((ulong)(puVar3 + lVar2 + 0xf) & 0xfffffffffffffff0);
    local_20 = *local_18;
    *(undefined8 *)(puVar3 + lVar2 + -8) = 0x41e701;
    printLongLine(local_20,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    local_c = local_c + 1;
    puVar3 = puVar3 + lVar2;
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  int local_c;
  
  local_c = 0;
  puVar2 = &local_28;
  while (local_c < 1) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0) * -0x10;
    local_18 = (undefined8 *)((ulong)((undefined *)puVar2 + lVar1 + 0xf) & 0xfffffffffffffff0);
    local_20 = 5;
    *local_18 = 5;
    local_28 = *local_18;
    *(undefined8 *)((undefined *)puVar2 + lVar1 + -8) = 0x41e77c;
    printLongLine(local_28);
    local_c = local_c + 1;
    puVar2 = (undefined8 *)((undefined *)puVar2 + lVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_17_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_06_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    uVar1 = *__ptr;
    free(__ptr);
    printLongLongLine(uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x0041e800) */

void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void good2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 5;
    printLongLongLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE758_Undefined_Behavior__int64_t_malloc_use_06_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_17_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined *puVar3;
  undefined auStack40 [8];
  undefined8 local_20;
  undefined8 *local_18;
  int local_c;
  
  local_c = 0;
  puVar3 = auStack40;
  while (local_c < 1) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0) * -0x10;
    local_18 = (undefined8 *)((ulong)(puVar3 + lVar2 + 0xf) & 0xfffffffffffffff0);
    local_20 = *local_18;
    *(undefined8 *)(puVar3 + lVar2 + -8) = 0x41e942;
    printLine(local_20,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    local_c = local_c + 1;
    puVar3 = puVar3 + lVar2;
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  char *local_20;
  undefined8 *local_18;
  int local_c;
  
  local_c = 0;
  puVar2 = &local_28;
  while (local_c < 1) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0) * -0x10;
    local_18 = (undefined8 *)((ulong)((undefined *)puVar2 + lVar1 + 0xf) & 0xfffffffffffffff0);
    local_20 = "string";
    *local_18 = 0x42bc15;
    local_28 = *local_18;
    *(undefined8 *)((undefined *)puVar2 + lVar1 + -8) = 0x41e9bd;
    printLine(local_28);
    local_c = local_c + 1;
    puVar2 = (undefined8 *)((undefined *)puVar2 + lVar1);
  }
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_17_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_15_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41ea2c;
  printLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x41ea95;
  printLongLine(apuStack48[2]);
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apuStack48[3] = 5;
  *local_10 = (undefined8 *)0x5;
  apuStack48[2] = *local_10;
  apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x41eafe;
  printLongLine(apuStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__long_alloca_use_15_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_13_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41eb79;
    printLongLongLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x41ebf8;
    printLongLongLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x41eb98;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (GLOBAL_CONST_FIVE == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = 5;
    *local_10 = (undefined8 *)0x5;
    apuStack48[2] = *local_10;
    apuStack48[lVar1 * 0x1ffffffffffffffe] = 0x41ec6b;
    printLongLongLine(apuStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__int64_t_alloca_use_13_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_05_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  if (staticTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = *local_10;
    apuStack48[2] = *apuStack48[3];
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41eced;
    printDoubleLine(apuStack48[2],uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  if (staticFalse == 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41ed4e;
    local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41ed63;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    }
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack64[2] = *local_20;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41ed9f;
    printDoubleLine(apuStack64[2]);
  }
  else {
    apuStack64[0] = (undefined8 *)0x41ed0b;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  if (staticTrue != 0) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar1 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41edf5;
    local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41ee0a;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar1 * 0x1ffffffffffffffe));
    }
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack64[2] = *local_20;
    apuStack64[lVar1 * 0x1ffffffffffffffe] = 0x41ee46;
    printDoubleLine(apuStack64[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_05_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_03_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  uVar1 = *__ptr;
  free(__ptr);
  printLine(uVar1);
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x42bc46;
  printLine(*__ptr);
  free(__ptr);
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x42bc46;
  printLine(*__ptr);
  free(__ptr);
  return;
}


void CWE758_Undefined_Behavior__char_pointer_malloc_use_03_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_01_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  uint uVar1;
  undefined auVar2 [16];
  long lVar3;
  uint **ppuStack32;
  uint ****local_18;
  uint *****local_10;
  
  auVar2 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar3 = SUB168(auVar2 / ZEXT816(0x10),0);
  local_10 = &local_10 + lVar3 * 0x1ffffffffffffffe;
  local_18 = *local_10;
  uVar1 = *(uint *)local_18;
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x41efda;
  printIntLine((ulong)uVar1,uParm2,SUB168(auVar2 % ZEXT816(0x10),0));
  uVar1 = *(uint *)((long)local_18 + 4);
  (&ppuStack32)[lVar3 * 0x1ffffffffffffffe] = 0x41efe8;
  printIntLine((ulong)uVar1);
  return;
}


void good1(void)

{
  uint uVar1;
  long lVar2;
  uint *apuStack48 [4];
  uint **local_10;
  
  lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41f030;
  apuStack48[3] = (uint *)malloc(8,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  if (apuStack48[3] == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41f045;
    exit(0xffffffff,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  }
  *apuStack48[3] = 5;
  apuStack48[3][1] = 6;
  *local_10 = apuStack48[3];
  apuStack48[2] = *local_10;
  uVar1 = *apuStack48[2];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41f07d;
  printIntLine((ulong)uVar1);
  uVar1 = apuStack48[2][1];
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41f08b;
  printIntLine((ulong)uVar1);
  return;
}


void CWE758_Undefined_Behavior__struct_pointer_alloca_use_01_good(void)

{
  good1();
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_07_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  ulong *puStack32;
  ulong ***local_18;
  ulong ****local_10;
  
  if (staticFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = &local_10 + lVar2 * 0x1ffffffffffffffe;
    local_18 = *local_10;
    (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41f0f9;
    printIntLine((ulong)local_18 & 0xffffffff,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
    (&puStack32)[lVar2 * 0x1ffffffffffffffe] = 0x41f103;
    printIntLine((ulong)local_18 >> 0x20);
  }
  return;
}


void good1(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  if (staticFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    local_18 = 1;
    uStack20 = 2;
    *local_10 = 0x200000001;
    auStack48[1] = *local_10;
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x41f186;
    printIntLine(auStack48[1] & 0xffffffff);
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x41f190;
    printIntLine(auStack48[1] >> 0x20);
  }
  else {
    auStack48[0] = 0x41f122;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  long lVar1;
  ulong auStack48 [3];
  undefined4 local_18;
  undefined4 uStack20;
  ulong *local_10;
  
  if (staticFive == 5) {
    lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = auStack48 + lVar1 * 0x1ffffffffffffffe + 2;
    local_18 = 1;
    uStack20 = 2;
    *local_10 = 0x200000001;
    auStack48[1] = *local_10;
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x41f207;
    printIntLine(auStack48[1] & 0xffffffff);
    auStack48[lVar1 * 0x1ffffffffffffffe] = 0x41f211;
    printIntLine(auStack48[1] >> 0x20);
  }
  return;
}


void CWE758_Undefined_Behavior__struct_alloca_use_07_good(void)

{
  good1();
  good2();
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


void CWE758_Undefined_Behavior__double_pointer_alloca_use_08_bad
               (undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined8 *apuStack48 [4];
  undefined8 **local_10;
  
  apuStack48[0] = (undefined8 *)0x41f255;
  iVar2 = staticReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack48[3] = *local_10;
    apuStack48[2] = *apuStack48[3];
    apuStack48[lVar3 * 0x1ffffffffffffffe] = 0x41f2ad;
    printDoubleLine(apuStack48[2],uParm1,uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  apuStack64[0] = (undefined8 *)0x41f2c1;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x41f312;
    local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar2 * 0x1ffffffffffffffe));
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x41f327;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar2 * 0x1ffffffffffffffe));
    }
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack64[2] = *local_20;
    apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x41f363;
    printDoubleLine(apuStack64[2]);
  }
  else {
    apuStack64[0] = (undefined8 *)0x41f2cf;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack64 [4];
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 **local_10;
  
  apuStack64[0] = (undefined8 *)0x41f377;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack64 + lVar2 * 0x1ffffffffffffffe + 2;
    apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x41f3bd;
    local_18 = (undefined8 *)malloc(8,*(undefined *)(apuStack64 + lVar2 * 0x1ffffffffffffffe));
    if (local_18 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x41f3d2;
      exit(0xffffffff,*(undefined *)(apuStack64 + lVar2 * 0x1ffffffffffffffe));
    }
    *local_18 = 0x4014000000000000;
    *local_10 = local_18;
    local_20 = *local_10;
    apuStack64[2] = *local_20;
    apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x41f40e;
    printDoubleLine(apuStack64[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__double_pointer_alloca_use_08_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  apuStack32[0] = (undefined8 *)0x41f43c;
  iVar2 = globalReturnsTrue();
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    local_10 = apuStack32 + lVar3 * 0x1ffffffffffffffe + 2;
    apuStack32[1] = *local_10;
    apuStack32[lVar3 * 0x1ffffffffffffffe] = 0x41f48b;
    printLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  }
  return;
}


void good1(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack48 [3];
  char *local_18;
  undefined8 **local_10;
  
  apuStack48[0] = (undefined8 *)0x41f49f;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    local_18 = "string";
    *local_10 = (undefined8 *)0x42bc8c;
    apuStack48[2] = *local_10;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41f50d;
    printLine(apuStack48[2]);
  }
  else {
    apuStack48[0] = (undefined8 *)0x41f4ad;
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  int iVar1;
  long lVar2;
  undefined8 *apuStack48 [3];
  char *local_18;
  undefined8 **local_10;
  
  apuStack48[0] = (undefined8 *)0x41f521;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
    local_10 = apuStack48 + lVar2 * 0x1ffffffffffffffe + 2;
    local_18 = "string";
    *local_10 = (undefined8 *)0x42bc8c;
    apuStack48[2] = *local_10;
    apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x41f583;
    printLine(apuStack48[2]);
  }
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_11_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_02_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  undefined8 *apuStack32 [2];
  undefined8 **local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x26);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  local_10 = apuStack32 + lVar2 * 0x1ffffffffffffffe + 2;
  apuStack32[1] = *local_10;
  apuStack32[lVar2 * 0x1ffffffffffffffe] = 0x41f5f2;
  printLine(apuStack32[1],uParm2,SUB168(auVar1 % ZEXT816(0x10),0));
  return;
}


void good1(void)

{
  long lVar1;
  char *apcStack48 [4];
  char **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apcStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apcStack48[3] = "string";
  *local_10 = "string";
  apcStack48[2] = *local_10;
  apcStack48[lVar1 * 0x1ffffffffffffffe] = 0x41f65a;
  printLine(apcStack48[2]);
  return;
}


void good2(void)

{
  long lVar1;
  char *apcStack48 [4];
  char **local_10;
  
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x26)) / ZEXT816(0x10),0);
  local_10 = apcStack48 + lVar1 * 0x1ffffffffffffffe + 2;
  apcStack48[3] = "string";
  *local_10 = "string";
  apcStack48[2] = *local_10;
  apcStack48[lVar1 * 0x1ffffffffffffffe] = 0x41f6c2;
  printLine(apcStack48[2]);
  return;
}


void CWE758_Undefined_Behavior__char_pointer_alloca_use_02_good(void)

{
  good1();
  good2();
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_07_bad(void)

{
  undefined8 uVar1;
  undefined8 *__ptr;
  
  if (staticFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    uVar1 = *__ptr;
    free(__ptr);
    printLongLine(uVar1);
  }
  return;
}


void good1(void)

{
  undefined8 *__ptr;
  
  if (staticFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void good2(void)

{
  undefined8 *__ptr;
  
  if (staticFive == 5) {
    __ptr = (undefined8 *)malloc(8);
    if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *__ptr = 5;
    printLongLine(*__ptr);
    free(__ptr);
  }
  return;
}


void CWE758_Undefined_Behavior__long_malloc_use_07_good(void)

{
  good1();
  good2();
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
  printf((char *)(double)fParm1,&DAT_0042bccd);
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
  printf(pcParm1,&DAT_0042bcea);
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
    __isoc99_sscanf(lVar1,&DAT_0042bcf8,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_0042bd00,&local_14);
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

