
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___0062aff8;
  if (PTR___gmon_start___0062aff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_004008d0(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_0062b010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0062b018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0062b020)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_0062b028)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0062b030)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_0062b038)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0062b040)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_0062b048)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0062b050)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0062b058)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_0062b060)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0062b068)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_0062b070)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_0062b078)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_0062b080)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_0062b088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0062b090)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_0062b098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_0062b0a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0062b0a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0062b0b0)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___0062aff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400a77) */
/* WARNING: Removing unreachable block (ram,0x00400a81) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400ab4) */
/* WARNING: Removing unreachable block (ram,0x00400abe) */

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


/* WARNING: Removing unreachable block (ram,0x00400b04) */
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
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_22_good();");
  CWE563_Unused_Variable__unused_value_struct_22_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_09_good();");
  CWE563_Unused_Variable__unused_value_struct_09_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_16_good();");
  CWE563_Unused_Variable__unused_init_variable_long_16_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_13_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int_13_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_11_good();");
  CWE563_Unused_Variable__unused_value_long_11_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_02_good();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_02_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_04_good();");
  CWE563_Unused_Variable__unused_value_long_04_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_02_good();");
  CWE563_Unused_Variable__unused_init_variable_char_02_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_10_good();");
  CWE563_Unused_Variable__unused_init_variable_int_10_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_16_good();");
  CWE563_Unused_Variable__unused_uninit_variable_char_16_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_01_good();");
  CWE563_Unused_Variable__unused_init_variable_long_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_06_good();");
  CWE563_Unused_Variable__unused_value_long_06_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_15_good();");
  CWE563_Unused_Variable__unused_init_variable_int_15_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_15_good();");
  CWE563_Unused_Variable__unused_init_variable_long_15_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_06_good();");
  CWE563_Unused_Variable__unused_value_struct_06_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_10_good();");
  CWE563_Unused_Variable__unused_init_variable_struct_10_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_03_good();");
  CWE563_Unused_Variable__unused_init_variable_char_03_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_09_good();");
  CWE563_Unused_Variable__unused_uninit_variable_char_09_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_06_good();");
  CWE563_Unused_Variable__unused_uninit_variable_char_06_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_02_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int_02_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_05_good();");
  CWE563_Unused_Variable__unused_value_struct_05_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_09_good();");
  CWE563_Unused_Variable__unused_init_variable_struct_09_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_17_good();");
  CWE563_Unused_Variable__unused_value_int_17_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_15_good();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_15_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_04_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_04_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_16_good();");
  CWE563_Unused_Variable__unused_init_variable_char_16_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_17_good();");
  CWE563_Unused_Variable__unused_init_variable_int_17_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_04_good();");
  CWE563_Unused_Variable__unused_value_int_04_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_03_good();");
  CWE563_Unused_Variable__unused_uninit_variable_char_03_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_01_good();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_09_good();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_09_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_04_good();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_04_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_10_good();");
  CWE563_Unused_Variable__unused_value_long_10_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_17_good();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_17_good();
  printLine("Calling CWE563_Unused_Variable__unused_static_global_variable_01_good();");
  CWE563_Unused_Variable__unused_static_global_variable_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_14_good();");
  CWE563_Unused_Variable__unused_init_variable_int_14_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_21_good();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_21_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_17_good();");
  CWE563_Unused_Variable__unused_uninit_variable_char_17_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_21_good();");
  CWE563_Unused_Variable__unused_value_long_21_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_22_good();");
  CWE563_Unused_Variable__unused_uninit_variable_char_22_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_02_good();");
  CWE563_Unused_Variable__unused_uninit_variable_char_02_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_06_good();");
  CWE563_Unused_Variable__unused_init_variable_int_06_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_06_good();");
  CWE563_Unused_Variable__unused_init_variable_char_06_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_10_good();");
  CWE563_Unused_Variable__unused_uninit_variable_char_10_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_08_good();");
  CWE563_Unused_Variable__unused_value_char_08_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_11_good();");
  CWE563_Unused_Variable__unused_value_int64_t_11_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_17_good();");
  CWE563_Unused_Variable__unused_init_variable_long_17_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_08_good();");
  CWE563_Unused_Variable__unused_init_variable_long_08_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_14_good();");
  CWE563_Unused_Variable__unused_uninit_variable_char_14_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_13_good();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_13_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_14_good();");
  CWE563_Unused_Variable__unused_value_int_14_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_04_good();");
  CWE563_Unused_Variable__unused_init_variable_long_04_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_06_good();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_06_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_22_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_22_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_09_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_09_good();
  printLine("Calling CWE563_Unused_Variable__unused_parameter_value_01_good();");
  CWE563_Unused_Variable__unused_parameter_value_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_14_good();");
  CWE563_Unused_Variable__unused_value_int64_t_14_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_14_good();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_14_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_13_good();");
  CWE563_Unused_Variable__unused_value_int_13_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_15_good();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_15_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_21_good();");
  CWE563_Unused_Variable__unused_value_struct_21_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_22_good();");
  CWE563_Unused_Variable__unused_init_variable_int_22_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_09_good();");
  CWE563_Unused_Variable__unused_value_char_09_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_17_good();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_17_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_05_good();");
  CWE563_Unused_Variable__unused_init_variable_long_05_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_17_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int_17_good();
  printLine("Calling CWE563_Unused_Variable__unused_static_global_value_01_good();");
  CWE563_Unused_Variable__unused_static_global_value_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_16_good();");
  CWE563_Unused_Variable__unused_value_int_16_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_07_good();");
  CWE563_Unused_Variable__unused_value_int64_t_07_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_03_good();");
  CWE563_Unused_Variable__unused_value_struct_03_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_22_good();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_22_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_14_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_14_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_18_good();");
  CWE563_Unused_Variable__unused_value_struct_18_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_10_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int_10_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_03_good();");
  CWE563_Unused_Variable__unused_value_long_03_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_06_good();");
  CWE563_Unused_Variable__unused_init_variable_struct_06_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_18_good();");
  CWE563_Unused_Variable__unused_init_variable_int_18_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_17_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_17_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_07_good();");
  CWE563_Unused_Variable__unused_value_struct_07_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_05_good();");
  CWE563_Unused_Variable__unused_uninit_variable_long_05_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_07_good();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_07_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_03_good();");
  CWE563_Unused_Variable__unused_init_variable_struct_03_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_13_good();");
  CWE563_Unused_Variable__unused_init_variable_int_13_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_16_good();");
  CWE563_Unused_Variable__unused_init_variable_struct_16_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_21_good();");
  CWE563_Unused_Variable__unused_value_char_21_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_06_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int_06_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_21_good();");
  CWE563_Unused_Variable__unused_uninit_variable_char_21_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_14_good();");
  CWE563_Unused_Variable__unused_value_long_14_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_08_good();");
  CWE563_Unused_Variable__unused_init_variable_struct_08_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_02_good();");
  CWE563_Unused_Variable__unused_init_variable_long_02_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_13_good();");
  CWE563_Unused_Variable__unused_uninit_variable_char_13_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_05_good();");
  CWE563_Unused_Variable__unused_init_variable_char_05_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_22_good();");
  CWE563_Unused_Variable__unused_uninit_variable_long_22_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_10_good();");
  CWE563_Unused_Variable__unused_value_int_10_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_11_good();");
  CWE563_Unused_Variable__unused_uninit_variable_long_11_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_03_good();");
  CWE563_Unused_Variable__unused_init_variable_long_03_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_15_good();");
  CWE563_Unused_Variable__unused_uninit_variable_char_15_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_11_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_11_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_01_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_15_good();");
  CWE563_Unused_Variable__unused_value_int64_t_15_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_15_good();");
  CWE563_Unused_Variable__unused_value_char_15_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_21_good();");
  CWE563_Unused_Variable__unused_value_int_21_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_03_good();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_03_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_22_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int_22_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_22_good();");
  CWE563_Unused_Variable__unused_value_long_22_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_05_good();");
  CWE563_Unused_Variable__unused_value_char_05_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_02_good();");
  CWE563_Unused_Variable__unused_value_long_02_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_22_good();");
  CWE563_Unused_Variable__unused_value_int64_t_22_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_01_good();");
  CWE563_Unused_Variable__unused_value_int64_t_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_07_good();");
  CWE563_Unused_Variable__unused_value_int_07_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_03_good();");
  CWE563_Unused_Variable__unused_value_int_03_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_17_good();");
  CWE563_Unused_Variable__unused_init_variable_char_17_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_04_good();");
  CWE563_Unused_Variable__unused_uninit_variable_long_04_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_11_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int_11_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_08_good();");
  CWE563_Unused_Variable__unused_value_long_08_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_08_good();");
  CWE563_Unused_Variable__unused_value_struct_08_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_10_good();");
  CWE563_Unused_Variable__unused_uninit_variable_long_10_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_09_good();");
  CWE563_Unused_Variable__unused_init_variable_int_09_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_06_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_06_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_10_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_10_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_05_good();");
  CWE563_Unused_Variable__unused_uninit_variable_char_05_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_16_good();");
  CWE563_Unused_Variable__unused_value_long_16_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_04_good();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_04_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_07_good();");
  CWE563_Unused_Variable__unused_value_char_07_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_10_good();");
  CWE563_Unused_Variable__unused_init_variable_long_10_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_15_good();");
  CWE563_Unused_Variable__unused_value_struct_15_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_05_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int_05_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_13_good();");
  CWE563_Unused_Variable__unused_init_variable_long_13_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_11_good();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_11_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_03_good();");
  CWE563_Unused_Variable__unused_init_variable_int_03_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_16_good();");
  CWE563_Unused_Variable__unused_uninit_variable_long_16_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_09_good();");
  CWE563_Unused_Variable__unused_init_variable_char_09_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_15_good();");
  CWE563_Unused_Variable__unused_uninit_variable_long_15_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_02_good();");
  CWE563_Unused_Variable__unused_value_int64_t_02_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_09_good();");
  CWE563_Unused_Variable__unused_init_variable_long_09_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_08_good();");
  CWE563_Unused_Variable__unused_init_variable_int_08_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_21_good();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_21_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_18_good();");
  CWE563_Unused_Variable__unused_init_variable_struct_18_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_03_good();");
  CWE563_Unused_Variable__unused_value_char_03_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_21_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int_21_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_05_good();");
  CWE563_Unused_Variable__unused_init_variable_int_05_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_18_good();");
  CWE563_Unused_Variable__unused_value_int_18_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_11_good();");
  CWE563_Unused_Variable__unused_init_variable_char_11_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_11_good();");
  CWE563_Unused_Variable__unused_init_variable_struct_11_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_07_good();");
  CWE563_Unused_Variable__unused_init_variable_char_07_good();
  printLine("Calling CWE563_Unused_Variable__unused_parameter_variable_01_good();");
  CWE563_Unused_Variable__unused_parameter_variable_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_01_good();");
  CWE563_Unused_Variable__unused_init_variable_int_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_16_good();");
  CWE563_Unused_Variable__unused_value_struct_16_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_02_good();");
  CWE563_Unused_Variable__unused_uninit_variable_long_02_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_18_good();");
  CWE563_Unused_Variable__unused_init_variable_long_18_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_21_good();");
  CWE563_Unused_Variable__unused_init_variable_long_21_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_15_good();");
  CWE563_Unused_Variable__unused_value_int_15_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_02_good();");
  CWE563_Unused_Variable__unused_value_struct_02_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_03_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int_03_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_22_good();");
  CWE563_Unused_Variable__unused_init_variable_long_22_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_11_good();");
  CWE563_Unused_Variable__unused_value_char_11_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_13_good();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_13_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_10_good();");
  CWE563_Unused_Variable__unused_value_char_10_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_17_good();");
  CWE563_Unused_Variable__unused_value_char_17_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_18_good();");
  CWE563_Unused_Variable__unused_uninit_variable_long_18_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_15_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_15_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_06_good();");
  CWE563_Unused_Variable__unused_value_int_06_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_18_good();");
  CWE563_Unused_Variable__unused_init_variable_char_18_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_18_good();");
  CWE563_Unused_Variable__unused_value_int64_t_18_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_10_good();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_10_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_05_good();");
  CWE563_Unused_Variable__unused_value_long_05_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_17_good();");
  CWE563_Unused_Variable__unused_value_struct_17_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_01_good();");
  CWE563_Unused_Variable__unused_value_long_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_17_good();");
  CWE563_Unused_Variable__unused_uninit_variable_long_17_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_14_good();");
  CWE563_Unused_Variable__unused_init_variable_long_14_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_07_good();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_07_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_15_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int_15_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_07_good();");
  CWE563_Unused_Variable__unused_value_long_07_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_01_good();");
  CWE563_Unused_Variable__unused_value_struct_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_04_good();");
  CWE563_Unused_Variable__unused_value_struct_04_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_04_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int_04_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_05_good();");
  CWE563_Unused_Variable__unused_init_variable_struct_05_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_15_good();");
  CWE563_Unused_Variable__unused_init_variable_char_15_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_05_good();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_05_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_22_good();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_22_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_03_good();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_03_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_21_good();");
  CWE563_Unused_Variable__unused_init_variable_int_21_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_10_good();");
  CWE563_Unused_Variable__unused_init_variable_char_10_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_01_good();");
  CWE563_Unused_Variable__unused_uninit_variable_long_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_04_good();");
  CWE563_Unused_Variable__unused_value_char_04_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_13_good();");
  CWE563_Unused_Variable__unused_init_variable_struct_13_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_06_good();");
  CWE563_Unused_Variable__unused_value_int64_t_06_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_07_good();");
  CWE563_Unused_Variable__unused_init_variable_struct_07_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_16_good();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_16_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_16_good();");
  CWE563_Unused_Variable__unused_value_char_16_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_05_good();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_05_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_11_good();");
  CWE563_Unused_Variable__unused_uninit_variable_char_11_good();
  printLine("Calling CWE563_Unused_Variable__unused_global_value_01_good();");
  CWE563_Unused_Variable__unused_global_value_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_16_good();");
  CWE563_Unused_Variable__unused_value_int64_t_16_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_06_good();");
  CWE563_Unused_Variable__unused_value_char_06_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_06_good();");
  CWE563_Unused_Variable__unused_init_variable_long_06_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_15_good();");
  CWE563_Unused_Variable__unused_init_variable_struct_15_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_11_good();");
  CWE563_Unused_Variable__unused_init_variable_long_11_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_14_good();");
  CWE563_Unused_Variable__unused_value_struct_14_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_04_good();");
  CWE563_Unused_Variable__unused_init_variable_char_04_good();
  printLine("Calling CWE563_Unused_Variable__unused_global_variable_01_good();");
  CWE563_Unused_Variable__unused_global_variable_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_06_good();");
  CWE563_Unused_Variable__unused_uninit_variable_long_06_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_11_good();");
  CWE563_Unused_Variable__unused_init_variable_int_11_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_01_good();");
  CWE563_Unused_Variable__unused_value_char_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_13_good();");
  CWE563_Unused_Variable__unused_value_struct_13_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_02_good();");
  CWE563_Unused_Variable__unused_value_char_02_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_08_good();");
  CWE563_Unused_Variable__unused_value_int_08_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_02_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_02_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_04_good();");
  CWE563_Unused_Variable__unused_uninit_variable_char_04_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_01_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_02_good();");
  CWE563_Unused_Variable__unused_value_int_02_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_02_good();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_02_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_16_good();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_16_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_06_good();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_06_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_13_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_13_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_16_good();");
  CWE563_Unused_Variable__unused_init_variable_int_16_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_04_good();");
  CWE563_Unused_Variable__unused_init_variable_struct_04_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_09_good();");
  CWE563_Unused_Variable__unused_value_int64_t_09_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_14_good();");
  CWE563_Unused_Variable__unused_init_variable_char_14_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_14_good();");
  CWE563_Unused_Variable__unused_uninit_variable_long_14_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_09_good();");
  CWE563_Unused_Variable__unused_uninit_variable_long_09_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_08_good();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_08_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_08_good();");
  CWE563_Unused_Variable__unused_uninit_variable_long_08_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_17_good();");
  CWE563_Unused_Variable__unused_value_long_17_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_10_good();");
  CWE563_Unused_Variable__unused_value_int64_t_10_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_01_good();");
  CWE563_Unused_Variable__unused_uninit_variable_char_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_21_good();");
  CWE563_Unused_Variable__unused_init_variable_char_21_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_22_good();");
  CWE563_Unused_Variable__unused_value_char_22_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_22_good();");
  CWE563_Unused_Variable__unused_init_variable_struct_22_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_08_good();");
  CWE563_Unused_Variable__unused_uninit_variable_char_08_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_03_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_03_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_03_good();");
  CWE563_Unused_Variable__unused_value_int64_t_03_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_17_good();");
  CWE563_Unused_Variable__unused_init_variable_struct_17_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_21_good();");
  CWE563_Unused_Variable__unused_value_int64_t_21_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_10_good();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_10_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_18_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int_18_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_05_good();");
  CWE563_Unused_Variable__unused_value_int64_t_05_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_21_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_21_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_21_good();");
  CWE563_Unused_Variable__unused_uninit_variable_long_21_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_22_good();");
  CWE563_Unused_Variable__unused_value_int_22_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_18_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_18_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_14_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int_14_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_08_good();");
  CWE563_Unused_Variable__unused_value_int64_t_08_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_15_good();");
  CWE563_Unused_Variable__unused_value_long_15_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_18_good();");
  CWE563_Unused_Variable__unused_value_long_18_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_02_good();");
  CWE563_Unused_Variable__unused_init_variable_int_02_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_07_good();");
  CWE563_Unused_Variable__unused_init_variable_int_07_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_13_good();");
  CWE563_Unused_Variable__unused_value_char_13_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_13_good();");
  CWE563_Unused_Variable__unused_uninit_variable_long_13_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_18_good();");
  CWE563_Unused_Variable__unused_value_char_18_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_10_good();");
  CWE563_Unused_Variable__unused_value_struct_10_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_04_good();");
  CWE563_Unused_Variable__unused_init_variable_int_04_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_09_good();");
  CWE563_Unused_Variable__unused_value_int_09_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_02_good();");
  CWE563_Unused_Variable__unused_init_variable_struct_02_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_07_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int_07_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_01_good();");
  CWE563_Unused_Variable__unused_init_variable_struct_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_01_good();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_18_good();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_18_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_13_good();");
  CWE563_Unused_Variable__unused_value_int64_t_13_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_03_good();");
  CWE563_Unused_Variable__unused_uninit_variable_long_03_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_05_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_05_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_13_good();");
  CWE563_Unused_Variable__unused_value_long_13_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_07_good();");
  CWE563_Unused_Variable__unused_uninit_variable_char_07_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_16_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_16_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_08_good();");
  CWE563_Unused_Variable__unused_init_variable_char_08_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_09_good();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_09_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_13_good();");
  CWE563_Unused_Variable__unused_init_variable_char_13_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_11_good();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_11_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_11_good();");
  CWE563_Unused_Variable__unused_value_int_11_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_07_good();");
  CWE563_Unused_Variable__unused_uninit_variable_long_07_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_14_good();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_14_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_07_good();");
  CWE563_Unused_Variable__unused_init_variable_long_07_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_21_good();");
  CWE563_Unused_Variable__unused_init_variable_struct_21_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_08_good();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_08_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_17_good();");
  CWE563_Unused_Variable__unused_value_int64_t_17_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_01_good();");
  CWE563_Unused_Variable__unused_value_int_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_16_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int_16_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_08_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int_08_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_07_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_07_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_05_good();");
  CWE563_Unused_Variable__unused_value_int_05_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_09_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int_09_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_08_good();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_08_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_01_good();");
  CWE563_Unused_Variable__unused_init_variable_char_01_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_11_good();");
  CWE563_Unused_Variable__unused_value_struct_11_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_09_good();");
  CWE563_Unused_Variable__unused_value_long_09_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_14_good();");
  CWE563_Unused_Variable__unused_init_variable_struct_14_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_04_good();");
  CWE563_Unused_Variable__unused_value_int64_t_04_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_14_good();");
  CWE563_Unused_Variable__unused_value_char_14_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_18_good();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_18_good();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_22_good();");
  CWE563_Unused_Variable__unused_init_variable_char_22_good();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_18_good();");
  CWE563_Unused_Variable__unused_uninit_variable_char_18_good();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_22_bad();");
  CWE563_Unused_Variable__unused_value_struct_22_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_09_bad();");
  CWE563_Unused_Variable__unused_value_struct_09_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_16_bad();");
  CWE563_Unused_Variable__unused_init_variable_long_16_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_13_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int_13_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_11_bad();");
  CWE563_Unused_Variable__unused_value_long_11_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_02_bad();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_02_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_04_bad();");
  CWE563_Unused_Variable__unused_value_long_04_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_02_bad();");
  CWE563_Unused_Variable__unused_init_variable_char_02_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_10_bad();");
  CWE563_Unused_Variable__unused_init_variable_int_10_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_16_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_char_16_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_01_bad();");
  CWE563_Unused_Variable__unused_init_variable_long_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_06_bad();");
  CWE563_Unused_Variable__unused_value_long_06_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_15_bad();");
  CWE563_Unused_Variable__unused_init_variable_int_15_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_15_bad();");
  CWE563_Unused_Variable__unused_init_variable_long_15_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_06_bad();");
  CWE563_Unused_Variable__unused_value_struct_06_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_10_bad();");
  CWE563_Unused_Variable__unused_init_variable_struct_10_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_03_bad();");
  CWE563_Unused_Variable__unused_init_variable_char_03_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_09_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_char_09_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_06_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_char_06_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_02_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int_02_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_05_bad();");
  CWE563_Unused_Variable__unused_value_struct_05_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_09_bad();");
  CWE563_Unused_Variable__unused_init_variable_struct_09_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_17_bad();");
  CWE563_Unused_Variable__unused_value_int_17_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_15_bad();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_15_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_04_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_04_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_16_bad();");
  CWE563_Unused_Variable__unused_init_variable_char_16_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_17_bad();");
  CWE563_Unused_Variable__unused_init_variable_int_17_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_04_bad();");
  CWE563_Unused_Variable__unused_value_int_04_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_03_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_char_03_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_01_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_09_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_09_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_04_bad();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_04_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_10_bad();");
  CWE563_Unused_Variable__unused_value_long_10_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_17_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_17_bad();
  printLine("Calling CWE563_Unused_Variable__unused_static_global_variable_01_bad();");
  CWE563_Unused_Variable__unused_static_global_variable_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_14_bad();");
  CWE563_Unused_Variable__unused_init_variable_int_14_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_21_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_21_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_17_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_char_17_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_21_bad();");
  CWE563_Unused_Variable__unused_value_long_21_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_22_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_char_22_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_02_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_char_02_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_06_bad();");
  CWE563_Unused_Variable__unused_init_variable_int_06_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_06_bad();");
  CWE563_Unused_Variable__unused_init_variable_char_06_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_10_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_char_10_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_08_bad();");
  CWE563_Unused_Variable__unused_value_char_08_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_11_bad();");
  CWE563_Unused_Variable__unused_value_int64_t_11_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_17_bad();");
  CWE563_Unused_Variable__unused_init_variable_long_17_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_08_bad();");
  CWE563_Unused_Variable__unused_init_variable_long_08_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_14_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_char_14_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_13_bad();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_13_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_14_bad();");
  CWE563_Unused_Variable__unused_value_int_14_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_04_bad();");
  CWE563_Unused_Variable__unused_init_variable_long_04_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_06_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_06_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_22_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_22_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_09_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_09_bad();
  printLine("Calling CWE563_Unused_Variable__unused_parameter_value_01_bad();");
  CWE563_Unused_Variable__unused_parameter_value_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_14_bad();");
  CWE563_Unused_Variable__unused_value_int64_t_14_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_14_bad();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_14_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_13_bad();");
  CWE563_Unused_Variable__unused_value_int_13_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_15_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_15_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_21_bad();");
  CWE563_Unused_Variable__unused_value_struct_21_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_22_bad();");
  CWE563_Unused_Variable__unused_init_variable_int_22_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_09_bad();");
  CWE563_Unused_Variable__unused_value_char_09_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_17_bad();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_17_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_05_bad();");
  CWE563_Unused_Variable__unused_init_variable_long_05_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_17_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int_17_bad();
  printLine("Calling CWE563_Unused_Variable__unused_static_global_value_01_bad();");
  CWE563_Unused_Variable__unused_static_global_value_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_16_bad();");
  CWE563_Unused_Variable__unused_value_int_16_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_07_bad();");
  CWE563_Unused_Variable__unused_value_int64_t_07_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_03_bad();");
  CWE563_Unused_Variable__unused_value_struct_03_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_22_bad();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_22_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_14_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_14_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_18_bad();");
  CWE563_Unused_Variable__unused_value_struct_18_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_10_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int_10_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_03_bad();");
  CWE563_Unused_Variable__unused_value_long_03_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_06_bad();");
  CWE563_Unused_Variable__unused_init_variable_struct_06_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_18_bad();");
  CWE563_Unused_Variable__unused_init_variable_int_18_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_17_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_17_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_07_bad();");
  CWE563_Unused_Variable__unused_value_struct_07_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_05_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_long_05_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_07_bad();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_07_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_03_bad();");
  CWE563_Unused_Variable__unused_init_variable_struct_03_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_13_bad();");
  CWE563_Unused_Variable__unused_init_variable_int_13_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_16_bad();");
  CWE563_Unused_Variable__unused_init_variable_struct_16_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_21_bad();");
  CWE563_Unused_Variable__unused_value_char_21_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_06_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int_06_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_21_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_char_21_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_14_bad();");
  CWE563_Unused_Variable__unused_value_long_14_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_08_bad();");
  CWE563_Unused_Variable__unused_init_variable_struct_08_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_02_bad();");
  CWE563_Unused_Variable__unused_init_variable_long_02_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_13_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_char_13_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_05_bad();");
  CWE563_Unused_Variable__unused_init_variable_char_05_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_22_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_long_22_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_10_bad();");
  CWE563_Unused_Variable__unused_value_int_10_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_11_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_long_11_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_03_bad();");
  CWE563_Unused_Variable__unused_init_variable_long_03_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_15_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_char_15_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_11_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_11_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_01_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_15_bad();");
  CWE563_Unused_Variable__unused_value_int64_t_15_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_15_bad();");
  CWE563_Unused_Variable__unused_value_char_15_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_21_bad();");
  CWE563_Unused_Variable__unused_value_int_21_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_03_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_03_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_22_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int_22_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_22_bad();");
  CWE563_Unused_Variable__unused_value_long_22_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_05_bad();");
  CWE563_Unused_Variable__unused_value_char_05_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_02_bad();");
  CWE563_Unused_Variable__unused_value_long_02_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_22_bad();");
  CWE563_Unused_Variable__unused_value_int64_t_22_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_01_bad();");
  CWE563_Unused_Variable__unused_value_int64_t_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_07_bad();");
  CWE563_Unused_Variable__unused_value_int_07_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_03_bad();");
  CWE563_Unused_Variable__unused_value_int_03_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_17_bad();");
  CWE563_Unused_Variable__unused_init_variable_char_17_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_04_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_long_04_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_11_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int_11_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_08_bad();");
  CWE563_Unused_Variable__unused_value_long_08_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_08_bad();");
  CWE563_Unused_Variable__unused_value_struct_08_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_10_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_long_10_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_09_bad();");
  CWE563_Unused_Variable__unused_init_variable_int_09_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_06_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_06_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_10_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_10_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_05_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_char_05_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_16_bad();");
  CWE563_Unused_Variable__unused_value_long_16_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_04_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_04_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_07_bad();");
  CWE563_Unused_Variable__unused_value_char_07_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_10_bad();");
  CWE563_Unused_Variable__unused_init_variable_long_10_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_15_bad();");
  CWE563_Unused_Variable__unused_value_struct_15_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_05_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int_05_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_13_bad();");
  CWE563_Unused_Variable__unused_init_variable_long_13_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_11_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_11_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_03_bad();");
  CWE563_Unused_Variable__unused_init_variable_int_03_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_16_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_long_16_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_09_bad();");
  CWE563_Unused_Variable__unused_init_variable_char_09_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_15_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_long_15_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_02_bad();");
  CWE563_Unused_Variable__unused_value_int64_t_02_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_09_bad();");
  CWE563_Unused_Variable__unused_init_variable_long_09_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_08_bad();");
  CWE563_Unused_Variable__unused_init_variable_int_08_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_21_bad();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_21_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_18_bad();");
  CWE563_Unused_Variable__unused_init_variable_struct_18_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_03_bad();");
  CWE563_Unused_Variable__unused_value_char_03_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_21_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int_21_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_05_bad();");
  CWE563_Unused_Variable__unused_init_variable_int_05_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_18_bad();");
  CWE563_Unused_Variable__unused_value_int_18_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_11_bad();");
  CWE563_Unused_Variable__unused_init_variable_char_11_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_11_bad();");
  CWE563_Unused_Variable__unused_init_variable_struct_11_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_07_bad();");
  CWE563_Unused_Variable__unused_init_variable_char_07_bad();
  printLine("Calling CWE563_Unused_Variable__unused_parameter_variable_01_bad();");
  CWE563_Unused_Variable__unused_parameter_variable_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_01_bad();");
  CWE563_Unused_Variable__unused_init_variable_int_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_16_bad();");
  CWE563_Unused_Variable__unused_value_struct_16_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_02_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_long_02_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_18_bad();");
  CWE563_Unused_Variable__unused_init_variable_long_18_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_21_bad();");
  CWE563_Unused_Variable__unused_init_variable_long_21_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_15_bad();");
  CWE563_Unused_Variable__unused_value_int_15_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_02_bad();");
  CWE563_Unused_Variable__unused_value_struct_02_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_03_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int_03_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_22_bad();");
  CWE563_Unused_Variable__unused_init_variable_long_22_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_11_bad();");
  CWE563_Unused_Variable__unused_value_char_11_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_13_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_13_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_10_bad();");
  CWE563_Unused_Variable__unused_value_char_10_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_17_bad();");
  CWE563_Unused_Variable__unused_value_char_17_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_18_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_long_18_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_15_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_15_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_06_bad();");
  CWE563_Unused_Variable__unused_value_int_06_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_18_bad();");
  CWE563_Unused_Variable__unused_init_variable_char_18_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_18_bad();");
  CWE563_Unused_Variable__unused_value_int64_t_18_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_10_bad();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_10_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_05_bad();");
  CWE563_Unused_Variable__unused_value_long_05_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_17_bad();");
  CWE563_Unused_Variable__unused_value_struct_17_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_01_bad();");
  CWE563_Unused_Variable__unused_value_long_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_17_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_long_17_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_14_bad();");
  CWE563_Unused_Variable__unused_init_variable_long_14_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_07_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_07_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_15_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int_15_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_07_bad();");
  CWE563_Unused_Variable__unused_value_long_07_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_01_bad();");
  CWE563_Unused_Variable__unused_value_struct_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_04_bad();");
  CWE563_Unused_Variable__unused_value_struct_04_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_04_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int_04_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_05_bad();");
  CWE563_Unused_Variable__unused_init_variable_struct_05_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_15_bad();");
  CWE563_Unused_Variable__unused_init_variable_char_15_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_05_bad();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_05_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_22_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_22_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_03_bad();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_03_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_21_bad();");
  CWE563_Unused_Variable__unused_init_variable_int_21_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_10_bad();");
  CWE563_Unused_Variable__unused_init_variable_char_10_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_01_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_long_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_04_bad();");
  CWE563_Unused_Variable__unused_value_char_04_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_13_bad();");
  CWE563_Unused_Variable__unused_init_variable_struct_13_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_06_bad();");
  CWE563_Unused_Variable__unused_value_int64_t_06_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_07_bad();");
  CWE563_Unused_Variable__unused_init_variable_struct_07_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_16_bad();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_16_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_16_bad();");
  CWE563_Unused_Variable__unused_value_char_16_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_05_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_05_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_11_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_char_11_bad();
  printLine("Calling CWE563_Unused_Variable__unused_global_value_01_bad();");
  CWE563_Unused_Variable__unused_global_value_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_16_bad();");
  CWE563_Unused_Variable__unused_value_int64_t_16_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_06_bad();");
  CWE563_Unused_Variable__unused_value_char_06_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_06_bad();");
  CWE563_Unused_Variable__unused_init_variable_long_06_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_15_bad();");
  CWE563_Unused_Variable__unused_init_variable_struct_15_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_11_bad();");
  CWE563_Unused_Variable__unused_init_variable_long_11_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_14_bad();");
  CWE563_Unused_Variable__unused_value_struct_14_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_04_bad();");
  CWE563_Unused_Variable__unused_init_variable_char_04_bad();
  printLine("Calling CWE563_Unused_Variable__unused_global_variable_01_bad();");
  CWE563_Unused_Variable__unused_global_variable_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_06_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_long_06_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_11_bad();");
  CWE563_Unused_Variable__unused_init_variable_int_11_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_01_bad();");
  CWE563_Unused_Variable__unused_value_char_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_13_bad();");
  CWE563_Unused_Variable__unused_value_struct_13_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_02_bad();");
  CWE563_Unused_Variable__unused_value_char_02_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_08_bad();");
  CWE563_Unused_Variable__unused_value_int_08_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_02_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_02_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_04_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_char_04_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_01_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_02_bad();");
  CWE563_Unused_Variable__unused_value_int_02_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_02_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_02_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_16_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_16_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_06_bad();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_06_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_13_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_13_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_16_bad();");
  CWE563_Unused_Variable__unused_init_variable_int_16_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_04_bad();");
  CWE563_Unused_Variable__unused_init_variable_struct_04_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_09_bad();");
  CWE563_Unused_Variable__unused_value_int64_t_09_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_14_bad();");
  CWE563_Unused_Variable__unused_init_variable_char_14_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_14_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_long_14_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_09_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_long_09_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_08_bad();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_08_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_08_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_long_08_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_17_bad();");
  CWE563_Unused_Variable__unused_value_long_17_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_10_bad();");
  CWE563_Unused_Variable__unused_value_int64_t_10_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_01_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_char_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_21_bad();");
  CWE563_Unused_Variable__unused_init_variable_char_21_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_22_bad();");
  CWE563_Unused_Variable__unused_value_char_22_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_22_bad();");
  CWE563_Unused_Variable__unused_init_variable_struct_22_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_08_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_char_08_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_03_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_03_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_03_bad();");
  CWE563_Unused_Variable__unused_value_int64_t_03_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_17_bad();");
  CWE563_Unused_Variable__unused_init_variable_struct_17_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_21_bad();");
  CWE563_Unused_Variable__unused_value_int64_t_21_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_10_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_10_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_18_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int_18_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_05_bad();");
  CWE563_Unused_Variable__unused_value_int64_t_05_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_21_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_21_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_21_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_long_21_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_22_bad();");
  CWE563_Unused_Variable__unused_value_int_22_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_18_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_18_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_14_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int_14_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_08_bad();");
  CWE563_Unused_Variable__unused_value_int64_t_08_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_15_bad();");
  CWE563_Unused_Variable__unused_value_long_15_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_18_bad();");
  CWE563_Unused_Variable__unused_value_long_18_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_02_bad();");
  CWE563_Unused_Variable__unused_init_variable_int_02_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_07_bad();");
  CWE563_Unused_Variable__unused_init_variable_int_07_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_13_bad();");
  CWE563_Unused_Variable__unused_value_char_13_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_13_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_long_13_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_18_bad();");
  CWE563_Unused_Variable__unused_value_char_18_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_10_bad();");
  CWE563_Unused_Variable__unused_value_struct_10_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int_04_bad();");
  CWE563_Unused_Variable__unused_init_variable_int_04_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_09_bad();");
  CWE563_Unused_Variable__unused_value_int_09_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_02_bad();");
  CWE563_Unused_Variable__unused_init_variable_struct_02_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_07_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int_07_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_01_bad();");
  CWE563_Unused_Variable__unused_init_variable_struct_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_01_bad();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_18_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_18_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_13_bad();");
  CWE563_Unused_Variable__unused_value_int64_t_13_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_03_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_long_03_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_05_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_05_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_13_bad();");
  CWE563_Unused_Variable__unused_value_long_13_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_07_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_char_07_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_16_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_16_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_08_bad();");
  CWE563_Unused_Variable__unused_init_variable_char_08_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_09_bad();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_09_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_13_bad();");
  CWE563_Unused_Variable__unused_init_variable_char_13_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_11_bad();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_11_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_11_bad();");
  CWE563_Unused_Variable__unused_value_int_11_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_long_07_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_long_07_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_14_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_14_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_long_07_bad();");
  CWE563_Unused_Variable__unused_init_variable_long_07_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_21_bad();");
  CWE563_Unused_Variable__unused_init_variable_struct_21_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_struct_08_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_struct_08_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_17_bad();");
  CWE563_Unused_Variable__unused_value_int64_t_17_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_01_bad();");
  CWE563_Unused_Variable__unused_value_int_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_16_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int_16_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_08_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int_08_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_07_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_07_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int_05_bad();");
  CWE563_Unused_Variable__unused_value_int_05_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int_09_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int_09_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_int64_t_08_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_08_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_01_bad();");
  CWE563_Unused_Variable__unused_init_variable_char_01_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_struct_11_bad();");
  CWE563_Unused_Variable__unused_value_struct_11_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_long_09_bad();");
  CWE563_Unused_Variable__unused_value_long_09_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_struct_14_bad();");
  CWE563_Unused_Variable__unused_init_variable_struct_14_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_int64_t_04_bad();");
  CWE563_Unused_Variable__unused_value_int64_t_04_bad();
  printLine("Calling CWE563_Unused_Variable__unused_value_char_14_bad();");
  CWE563_Unused_Variable__unused_value_char_14_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_int64_t_18_bad();");
  CWE563_Unused_Variable__unused_init_variable_int64_t_18_bad();
  printLine("Calling CWE563_Unused_Variable__unused_init_variable_char_22_bad();");
  CWE563_Unused_Variable__unused_init_variable_char_22_bad();
  printLine("Calling CWE563_Unused_Variable__unused_uninit_variable_char_18_bad();");
  CWE563_Unused_Variable__unused_uninit_variable_char_18_bad();
  return 0;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_05_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (staticFalse == 0) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLongLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_05_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_06_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403972) */

void goodB2G1(void)

{
  printIntLine(5);
  return;
}


void goodB2G2(void)

{
  printIntLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_06_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void badSink(void)

{
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_21_bad(void)

{
  badStatic = 1;
  badSink(0x43);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    printHexCharLine((ulong)(uint)(int)cParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(0x43);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if (goodB2G2Static != 0) {
    printHexCharLine((ulong)(uint)(int)cParm1);
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0x43);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_21_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_struct_11_bad(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    local_14 = 0;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    local_14 = 0;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    local_14 = 0;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printStructLine(&local_18);
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_struct_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_value_struct_02_bad(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void goodG2B1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_value_struct_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_06_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403dbf) */

void goodB2G1(void)

{
  printLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_06_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_22_badSink(void)

{
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_22_goodB2G1Sink(char cParm1)

{
  if (CWE563_Unused_Variable__unused_init_variable_char_22_goodB2G1Global == 0) {
    printHexCharLine((ulong)(uint)(int)cParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_22_goodB2G2Sink(char cParm1)

{
  if (CWE563_Unused_Variable__unused_init_variable_char_22_goodB2G2Global != 0) {
    printHexCharLine((ulong)(uint)(int)cParm1);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_11_bad(void)

{
  globalReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine(0x43);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_11_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_02_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printHexCharLine(0x43);
  return;
}


void goodB2G2(void)

{
  printHexCharLine(0x43);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_02_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void badSink(void)

{
  if (badStatic != 0) {
    printLongLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_21_bad(void)

{
  badStatic = 1;
  badSink(5);
  return;
}


void goodB2G1Sink(undefined8 uParm1)

{
  if (goodB2G1Static == 0) {
    printLongLongLine(uParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(5);
  return;
}


void goodB2G2Sink(undefined8 uParm1)

{
  if (goodB2G2Static != 0) {
    printLongLongLine(uParm1);
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(5);
  return;
}


void goodG2BSink(void)

{
  if (goodG2BStatic != 0) {
    printLongLongLine(10);
  }
  return;
}


void goodG2B(void)

{
  printLongLongLine(5);
  goodG2BStatic = 1;
  goodG2BSink(5);
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_03_bad(void)

{
  printLongLongLine(10);
  return;
}


void goodB2G1(void)

{
  printLongLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLongLine(5);
  return;
}


void goodG2B1(void)

{
  printLongLongLine(5);
  printLongLongLine(10);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(5);
  printLongLongLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_05_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (staticFalse == 0) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticTrue != 0) {
    printIntLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_05_good(void)

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


void CWE563_Unused_Variable__unused_value_char_08_bad(void)

{
  int iVar1;
  
  staticReturnsTrue();
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine(0x5a);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char local_9;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 'C';
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  char local_9;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 'C';
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine(0x5a);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine(0x43);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine(0x5a);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_char_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_value_struct_10_bad(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (globalTrue != 0) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (globalTrue != 0) {
    local_18 = 0;
    local_14 = 0;
  }
  if (globalFalse == 0) {
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (globalTrue != 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  return;
}


void goodG2B1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (globalFalse == 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (globalTrue != 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  if (globalTrue != 0) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_struct_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_13_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_13_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_18_bad(void)

{
  printLongLongLine(10);
  return;
}


void goodB2G(void)

{
  printLongLongLine(5);
  return;
}


void goodG2B(void)

{
  printLongLongLine(5);
  printLongLongLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_06_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404690) */

void goodB2G1(void)

{
  printIntLine(5);
  return;
}


void goodB2G2(void)

{
  printIntLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_06_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_10_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (globalFalse == 0) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(0x43);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_10_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_22_bad(void)

{
  CWE563_Unused_Variable__unused_init_variable_char_22_badGlobal = 1;
  CWE563_Unused_Variable__unused_init_variable_char_22_badSink(0x43);
  return;
}


void goodB2G1(void)

{
  CWE563_Unused_Variable__unused_init_variable_char_22_goodB2G1Global = 0;
  CWE563_Unused_Variable__unused_init_variable_char_22_goodB2G1Sink(0x43);
  return;
}


void goodB2G2(void)

{
  CWE563_Unused_Variable__unused_init_variable_char_22_goodB2G2Global = 1;
  CWE563_Unused_Variable__unused_init_variable_char_22_goodB2G2Sink(0x43);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_22_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_15_bad(void)

{
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_15_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_01_bad(void)

{
  return;
}


void goodB2G(void)

{
  printHexCharLine(0x43);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_01_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  return;
}


void goodB2G(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printLongLongLine(5);
    local_c = local_c + 1;
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_17_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_value_char_06_bad(void)

{
  printHexCharLine(0x5a);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040493e) */

void goodB2G1(void)

{
  printHexCharLine(0x43);
  return;
}


void goodB2G2(void)

{
  printHexCharLine(0x43);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404996) */

void goodG2B1(void)

{
  printHexCharLine(0x43);
  printHexCharLine(0x5a);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0x43);
  printHexCharLine(0x5a);
  return;
}


void CWE563_Unused_Variable__unused_value_char_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_value_struct_18_bad(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


void goodB2G(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_value_struct_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_14_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (globalFive == 5) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalFive == 5) {
    printLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_14_good(void)

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


void CWE563_Unused_Variable__unused_value_long_08_bad(void)

{
  int iVar1;
  
  staticReturnsTrue();
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLine(10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined8 local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 5;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printLongLine(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined8 local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 5;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLine(local_10);
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLine(10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLine(5);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_long_08_good(void)

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


void CWE563_Unused_Variable__unused_uninit_variable_long_21_bad(void)

{
  undefined8 local_10;
  
  badStatic = 1;
  badSink(local_10);
  return;
}


void goodB2G1Sink(void)

{
  if (goodB2G1Static == 0) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  goodB2G1Static = 0;
  goodB2G1Sink(local_10);
  return;
}


void goodB2G2Sink(void)

{
  if (goodB2G2Static != 0) {
    printLongLine(5);
  }
  return;
}


void goodB2G2(void)

{
  undefined8 local_10;
  
  goodB2G2Static = 1;
  goodB2G2Sink(local_10);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_21_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_03_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_03_good(void)

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


void CWE563_Unused_Variable__unused_init_variable_int64_t_08_bad(void)

{
  staticReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_08_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_04_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00404f29) */

void goodB2G1(void)

{
  printLongLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_04_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_struct_09_bad(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = 0;
    local_14 = 0;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  return;
}


void goodG2B1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_struct_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_13_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0x43);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_13_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_02_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printLongLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_02_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_07_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (staticFive == 5) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticFive == 5) {
    printHexCharLine(0x43);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_07_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_11_bad(void)

{
  int iVar1;
  
  globalReturnsTrue();
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined8 local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 5;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printLongLongLine(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined8 local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 5;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10);
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(5);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_02_bad(void)

{
  printLongLongLine(10);
  return;
}


void goodB2G1(void)

{
  printLongLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLongLine(5);
  return;
}


void goodG2B1(void)

{
  printLongLongLine(5);
  printLongLongLine(10);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(5);
  printLongLongLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_05_bad(void)

{
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  if (staticFalse == 0) {
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  if (staticTrue != 0) {
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_05_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_15_bad(void)

{
  printLongLongLine(10);
  return;
}


void goodB2G1(void)

{
  printLongLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLongLine(5);
  return;
}


void goodG2B1(void)

{
  printLongLongLine(5);
  printLongLongLine(10);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(5);
  printLongLongLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_04_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004056c3) */

void goodB2G1(void)

{
  printLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_04_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_18_bad(void)

{
  return;
}


void goodB2G(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_18_good(void)

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


void CWE563_Unused_Variable__unused_init_variable_char_08_bad(void)

{
  staticReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine(0x43);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_08_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_10_bad(void)

{
  if (globalTrue != 0) {
    printLongLongLine(10);
  }
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  if (globalTrue != 0) {
    local_10 = 5;
  }
  if (globalFalse == 0) {
    printLongLongLine(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLongLongLine(5);
  }
  return;
}


void goodG2B1(void)

{
  if (globalFalse == 0) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printLongLongLine(10);
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printLongLongLine(5);
  }
  if (globalTrue != 0) {
    printLongLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_value_char_14_bad(void)

{
  if (globalFive == 5) {
    printHexCharLine(0x5a);
  }
  return;
}


void goodB2G1(void)

{
  if (globalFive == 5) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalFive == 5) {
    printHexCharLine(0x43);
  }
  return;
}


void goodG2B1(void)

{
  if (globalFive == 5) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printHexCharLine(0x5a);
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printHexCharLine(0x43);
  }
  if (globalFive == 5) {
    printHexCharLine(0x5a);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_char_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_06_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405ad7) */

void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_06_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_long_16_bad(void)

{
  printLongLine(10);
  return;
}


void goodB2G(void)

{
  printLongLine(5);
  return;
}


void goodG2B(void)

{
  printLongLine(5);
  printLongLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_long_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_global_variable_01_bad(void)

{
  printLine(
           "This function does not use the global variable: CWE563_Unused_Variable__unused_global_variable_01_globalBad."
           );
  return;
}


void good1(void)

{
  printIntLine((ulong)CWE563_Unused_Variable__unused_global_variable_01_globalGood1);
  return;
}


void CWE563_Unused_Variable__unused_global_variable_01_good(void)

{
  good1();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_03_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printHexCharLine(0x43);
  return;
}


void goodB2G2(void)

{
  printHexCharLine(0x43);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_03_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_01_bad(void)

{
  printLongLongLine(10);
  return;
}


void goodG2B(void)

{
  printLongLongLine(5);
  printLongLongLine(10);
  return;
}


void goodB2G(void)

{
  printLongLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_04_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405d0d) */

void goodB2G1(void)

{
  printIntLine(5);
  return;
}


void goodB2G2(void)

{
  printIntLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_04_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  return;
}


void goodB2G(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printLongLine(5);
    local_c = local_c + 1;
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_17_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_16_bad(void)

{
  return;
}


void goodB2G(void)

{
  printLongLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_16_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_22_badSink(void)

{
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_22_goodB2G1Sink(undefined8 uParm1)

{
  if (CWE563_Unused_Variable__unused_init_variable_long_22_goodB2G1Global == 0) {
    printLongLine(uParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_22_goodB2G2Sink(undefined8 uParm1)

{
  if (CWE563_Unused_Variable__unused_init_variable_long_22_goodB2G2Global != 0) {
    printLongLine(uParm1);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_18_bad(void)

{
  return;
}


void goodB2G(void)

{
  printHexCharLine(0x43);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_18_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_11_bad(void)

{
  globalReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_11_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_02_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_02_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_int_15_bad(void)

{
  printIntLine(10);
  return;
}


void goodB2G1(void)

{
  printIntLine(5);
  return;
}


void goodB2G2(void)

{
  printIntLine(5);
  return;
}


void goodG2B1(void)

{
  printIntLine(5);
  printIntLine(10);
  return;
}


void goodG2B2(void)

{
  printIntLine(5);
  printIntLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_int_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_10_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (globalFalse == 0) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalTrue != 0) {
    printIntLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_10_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_long_10_bad(void)

{
  if (globalTrue != 0) {
    printLongLine(10);
  }
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  if (globalTrue != 0) {
    local_10 = 5;
  }
  if (globalFalse == 0) {
    printLongLine(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLongLine(5);
  }
  return;
}


void goodG2B1(void)

{
  if (globalFalse == 0) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printLongLine(10);
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printLongLine(5);
  }
  if (globalTrue != 0) {
    printLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_long_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_value_int_22_badSink(void)

{
  if (CWE563_Unused_Variable__unused_value_int_22_badGlobal != 0) {
    printIntLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int_22_goodB2G1Sink(uint uParm1)

{
  if (CWE563_Unused_Variable__unused_value_int_22_goodB2G1Global == 0) {
    printIntLine((ulong)uParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int_22_goodB2G2Sink(uint uParm1)

{
  if (CWE563_Unused_Variable__unused_value_int_22_goodB2G2Global != 0) {
    printIntLine((ulong)uParm1);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int_22_goodG2BSink(void)

{
  if (CWE563_Unused_Variable__unused_value_int_22_goodG2BGlobal != 0) {
    printIntLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  return;
}


void goodB2G(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printIntLine(5);
    local_c = local_c + 1;
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_17_good(void)

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


void CWE563_Unused_Variable__unused_uninit_variable_long_08_bad(void)

{
  staticReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_08_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_struct_14_bad(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (globalFive == 5) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (globalFive == 5) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (globalFive == 5) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  return;
}


void goodG2B1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (globalFive == 5) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (globalFive == 5) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  if (globalFive == 5) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_struct_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_16_bad(void)

{
  return;
}


void goodB2G(void)

{
  printHexCharLine(0x43);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_16_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_22_badSink(void)

{
  if (CWE563_Unused_Variable__unused_value_int64_t_22_badGlobal != 0) {
    printLongLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_22_goodB2G1Sink(undefined8 uParm1)

{
  if (CWE563_Unused_Variable__unused_value_int64_t_22_goodB2G1Global == 0) {
    printLongLongLine(uParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_22_goodB2G2Sink(undefined8 uParm1)

{
  if (CWE563_Unused_Variable__unused_value_int64_t_22_goodB2G2Global != 0) {
    printLongLongLine(uParm1);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_22_goodG2BSink(void)

{
  if (CWE563_Unused_Variable__unused_value_int64_t_22_goodG2BGlobal != 0) {
    printLongLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_11_bad(void)

{
  globalReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_11_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_02_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printIntLine(5);
  return;
}


void goodB2G2(void)

{
  printIntLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_02_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_14_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (globalFive == 5) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalFive == 5) {
    printHexCharLine(0x43);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_14_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_long_01_bad(void)

{
  printLongLine(10);
  return;
}


void goodG2B(void)

{
  printLongLine(5);
  printLongLine(10);
  return;
}


void goodB2G(void)

{
  printLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_value_long_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void badSink(void)

{
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_21_bad(void)

{
  badStatic = 1;
  badSink(0);
  return;
}


void goodB2G1Sink(undefined8 uParm1)

{
  undefined8 local_18 [2];
  
  if (goodB2G1Static == 0) {
    local_18[0] = uParm1;
    printStructLine(local_18);
  }
  else {
    local_18[0] = uParm1;
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(0);
  return;
}


void goodB2G2Sink(undefined8 uParm1)

{
  undefined8 local_18 [2];
  
  if (goodB2G2Static != 0) {
    local_18[0] = uParm1;
    printStructLine(local_18);
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_21_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_03_bad(void)

{
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_03_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_07_bad(void)

{
  if (staticFive == 5) {
    printLongLongLine(10);
  }
  return;
}


void goodB2G1(void)

{
  if (staticFive == 5) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticFive == 5) {
    printLongLongLine(5);
  }
  return;
}


void goodG2B1(void)

{
  if (staticFive == 5) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printLongLongLine(10);
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printLongLongLine(5);
  }
  if (staticFive == 5) {
    printLongLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_09_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (GLOBAL_CONST_FALSE == 0) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0x43);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_09_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_16_bad(void)

{
  return;
}


void goodB2G(void)

{
  printLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_16_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_22_bad(void)

{
  CWE563_Unused_Variable__unused_init_variable_int64_t_22_badGlobal = 1;
  CWE563_Unused_Variable__unused_init_variable_int64_t_22_badSink(5);
  return;
}


void goodB2G1(void)

{
  CWE563_Unused_Variable__unused_init_variable_int64_t_22_goodB2G1Global = 0;
  CWE563_Unused_Variable__unused_init_variable_int64_t_22_goodB2G1Sink(5);
  return;
}


void goodB2G2(void)

{
  CWE563_Unused_Variable__unused_init_variable_int64_t_22_goodB2G2Global = 1;
  CWE563_Unused_Variable__unused_init_variable_int64_t_22_goodB2G2Sink(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_22_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_10_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (globalFalse == 0) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalTrue != 0) {
    printIntLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_10_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_18_bad(void)

{
  return;
}


void goodB2G(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_18_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_value_int_22_bad(void)

{
  CWE563_Unused_Variable__unused_value_int_22_badGlobal = 1;
  CWE563_Unused_Variable__unused_value_int_22_badSink(5);
  return;
}


void goodB2G1(void)

{
  CWE563_Unused_Variable__unused_value_int_22_goodB2G1Global = 0;
  CWE563_Unused_Variable__unused_value_int_22_goodB2G1Sink(5);
  return;
}


void goodB2G2(void)

{
  CWE563_Unused_Variable__unused_value_int_22_goodB2G2Global = 1;
  CWE563_Unused_Variable__unused_value_int_22_goodB2G2Sink(5);
  return;
}


void goodG2B(void)

{
  printIntLine(5);
  CWE563_Unused_Variable__unused_value_int_22_goodG2BGlobal = 1;
  CWE563_Unused_Variable__unused_value_int_22_goodG2BSink(5);
  return;
}


void CWE563_Unused_Variable__unused_value_int_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_07_bad(void)

{
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  if (staticFive == 5) {
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  if (staticFive == 5) {
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_07_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_06_bad(void)

{
  printLongLongLine(10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406f0b) */

void goodB2G1(void)

{
  printLongLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLongLine(5);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00406f69) */

void goodG2B1(void)

{
  printLongLongLine(5);
  printLongLongLine(10);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(5);
  printLongLongLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_value_struct_04_bad(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407089) */

void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004070ea) */

void goodG2B1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_value_struct_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_01_bad(void)

{
  return;
}


void goodB2G(void)

{
  printIntLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_01_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_15_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printIntLine(5);
  return;
}


void goodB2G2(void)

{
  printIntLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_15_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_long_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLine(10);
  }
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = 5;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    printLongLine(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLine(5);
  }
  return;
}


void goodG2B1(void)

{
  if (GLOBAL_CONST_FALSE == 0) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLine(10);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLine(5);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_long_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_04_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004073cb) */

void goodB2G1(void)

{
  printHexCharLine(0x43);
  return;
}


void goodB2G2(void)

{
  printHexCharLine(0x43);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_04_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_22_badSink(void)

{
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_22_goodB2G1Sink(void)

{
  if (CWE563_Unused_Variable__unused_uninit_variable_int64_t_22_goodB2G1Global == 0) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_22_goodB2G2Sink(void)

{
  if (CWE563_Unused_Variable__unused_uninit_variable_int64_t_22_goodB2G2Global != 0) {
    printLongLongLine(5);
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


void CWE563_Unused_Variable__unused_uninit_variable_char_08_bad(void)

{
  staticReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine(0x43);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_08_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_13_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_13_good(void)

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


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_08_bad(void)

{
  staticReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_08_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_04_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040766d) */

void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_04_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_07_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (staticFive == 5) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticFive == 5) {
    printLongLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_07_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_char_15_bad(void)

{
  printHexCharLine(0x5a);
  return;
}


void goodB2G1(void)

{
  printHexCharLine(0x43);
  return;
}


void goodB2G2(void)

{
  printHexCharLine(0x43);
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0x43);
  printHexCharLine(0x5a);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0x43);
  printHexCharLine(0x5a);
  return;
}


void CWE563_Unused_Variable__unused_value_char_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_05_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (staticFalse == 0) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_05_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_static_global_value_01_bad(void)

{
  staticGlobalBad = 10;
  printIntLine(10);
  return;
}


void good1(void)

{
  printIntLine((ulong)staticGlobalGood1);
  return;
}


void CWE563_Unused_Variable__unused_static_global_value_01_good(void)

{
  good1();
  return;
}


void CWE563_Unused_Variable__unused_value_int_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(10);
  }
  return;
}


void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(5);
  }
  return;
}


void goodG2B1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(10);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(5);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_value_struct_22_badSink(void)

{
  undefined8 local_18 [2];
  
  if (CWE563_Unused_Variable__unused_value_struct_22_badGlobal != 0) {
    local_18[0] = 0x100000001;
    printStructLine(local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_struct_22_goodB2G1Sink(undefined8 uParm1)

{
  undefined8 local_18 [2];
  
  if (CWE563_Unused_Variable__unused_value_struct_22_goodB2G1Global == 0) {
    local_18[0] = uParm1;
    printStructLine(local_18);
  }
  else {
    local_18[0] = uParm1;
    printLine("Benign, fixed string");
  }
  return;
}


void CWE563_Unused_Variable__unused_value_struct_22_goodB2G2Sink(undefined8 uParm1)

{
  undefined8 local_18 [2];
  
  if (CWE563_Unused_Variable__unused_value_struct_22_goodB2G2Global != 0) {
    local_18[0] = uParm1;
    printStructLine(local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_struct_22_goodG2BSink(void)

{
  undefined8 local_18 [2];
  
  if (CWE563_Unused_Variable__unused_value_struct_22_goodG2BGlobal != 0) {
    local_18[0] = 0x100000001;
    printStructLine(local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  return;
}


void goodB2G(void)

{
  undefined4 local_18;
  undefined4 local_14;
  int local_c;
  
  local_18 = 0;
  local_14 = 0;
  local_c = 0;
  while (local_c < 1) {
    printStructLine(&local_18);
    local_c = local_c + 1;
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_17_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_16_bad(void)

{
  return;
}


void goodB2G(void)

{
  printHexCharLine(0x43);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_16_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_06_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00407bcc) */

void goodB2G1(void)

{
  printLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_06_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_22_badSink(void)

{
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_22_goodB2G1Sink(void)

{
  if (CWE563_Unused_Variable__unused_uninit_variable_char_22_goodB2G1Global == 0) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_22_goodB2G2Sink(void)

{
  if (CWE563_Unused_Variable__unused_uninit_variable_char_22_goodB2G2Global != 0) {
    printHexCharLine(0x43);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_14_bad(void)

{
  if (globalFive == 5) {
    printLongLongLine(10);
  }
  return;
}


void goodB2G1(void)

{
  if (globalFive == 5) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalFive == 5) {
    printLongLongLine(5);
  }
  return;
}


void goodG2B1(void)

{
  if (globalFive == 5) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printLongLongLine(10);
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printLongLongLine(5);
  }
  if (globalFive == 5) {
    printLongLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_02_bad(void)

{
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_02_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_22_badSink(void)

{
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_22_goodB2G1Sink(undefined8 uParm1)

{
  undefined8 local_18 [2];
  
  if (CWE563_Unused_Variable__unused_init_variable_struct_22_goodB2G1Global == 0) {
    local_18[0] = uParm1;
    printStructLine(local_18);
  }
  else {
    local_18[0] = uParm1;
    printLine("Benign, fixed string");
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_22_goodB2G2Sink(undefined8 uParm1)

{
  undefined8 local_18 [2];
  
  if (CWE563_Unused_Variable__unused_init_variable_struct_22_goodB2G2Global != 0) {
    local_18[0] = uParm1;
    printStructLine(local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_05_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (staticFalse == 0) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticTrue != 0) {
    printIntLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_05_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_03_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printLongLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_03_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_09_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (GLOBAL_CONST_FALSE == 0) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_09_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_10_bad(void)

{
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  if (globalFalse == 0) {
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  if (globalTrue != 0) {
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_10_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_int_03_bad(void)

{
  printIntLine(10);
  return;
}


void goodB2G1(void)

{
  printIntLine(5);
  return;
}


void goodB2G2(void)

{
  printIntLine(5);
  return;
}


void goodG2B1(void)

{
  printIntLine(5);
  printIntLine(10);
  return;
}


void goodG2B2(void)

{
  printIntLine(5);
  printIntLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_int_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_11_bad(void)

{
  globalReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_11_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_struct_22_bad(void)

{
  CWE563_Unused_Variable__unused_value_struct_22_badGlobal = 1;
  CWE563_Unused_Variable__unused_value_struct_22_badSink(0);
  return;
}


void goodB2G1(void)

{
  CWE563_Unused_Variable__unused_value_struct_22_goodB2G1Global = 0;
  CWE563_Unused_Variable__unused_value_struct_22_goodB2G1Sink(0);
  return;
}


void goodB2G2(void)

{
  CWE563_Unused_Variable__unused_value_struct_22_goodB2G2Global = 1;
  CWE563_Unused_Variable__unused_value_struct_22_goodB2G2Sink(0);
  return;
}


void goodG2B(void)

{
  undefined4 local_18;
  undefined4 uStack20;
  
  local_18 = 0;
  uStack20 = 0;
  printStructLine(&local_18);
  CWE563_Unused_Variable__unused_value_struct_22_goodG2BGlobal = 1;
  CWE563_Unused_Variable__unused_value_struct_22_goodG2BSink(CONCAT44(uStack20,local_18));
  return;
}


void CWE563_Unused_Variable__unused_value_struct_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_14_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (globalFive == 5) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalFive == 5) {
    printIntLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_14_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_char_10_bad(void)

{
  if (globalTrue != 0) {
    printHexCharLine(0x5a);
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  if (globalTrue != 0) {
    local_9 = 'C';
  }
  if (globalFalse == 0) {
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(0x43);
  }
  return;
}


void goodG2B1(void)

{
  if (globalFalse == 0) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printHexCharLine(0x5a);
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(0x43);
  }
  if (globalTrue != 0) {
    printHexCharLine(0x5a);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_char_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_value_char_05_bad(void)

{
  if (staticTrue != 0) {
    printHexCharLine(0x5a);
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  if (staticTrue != 0) {
    local_9 = 'C';
  }
  if (staticFalse == 0) {
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(0x43);
  }
  return;
}


void goodG2B1(void)

{
  if (staticFalse == 0) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printHexCharLine(0x5a);
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(0x43);
  }
  if (staticTrue != 0) {
    printHexCharLine(0x5a);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_char_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_value_int_18_bad(void)

{
  printIntLine(10);
  return;
}


void goodB2G(void)

{
  printIntLine(5);
  return;
}


void goodG2B(void)

{
  printIntLine(5);
  printIntLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_int_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_01_bad(void)

{
  return;
}


void goodB2G(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_01_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_10_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (globalFalse == 0) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLongLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_10_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_04_bad(void)

{
  printLongLongLine(10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004087fc) */

void goodB2G1(void)

{
  printLongLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLongLine(5);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408857) */

void goodG2B1(void)

{
  printLongLongLine(5);
  printLongLongLine(10);
  return;
}


void goodG2B2(void)

{
  printLongLongLine(5);
  printLongLongLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_14_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (globalFive == 5) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalFive == 5) {
    printLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_14_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_01_bad(void)

{
  return;
}


void goodB2G(void)

{
  printLongLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_01_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_15_bad(void)

{
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_15_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_03_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printIntLine(5);
  return;
}


void goodB2G2(void)

{
  printIntLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_03_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_char_22_bad(void)

{
  CWE563_Unused_Variable__unused_value_char_22_badGlobal = 1;
  CWE563_Unused_Variable__unused_value_char_22_badSink(0x43);
  return;
}


void goodB2G1(void)

{
  CWE563_Unused_Variable__unused_value_char_22_goodB2G1Global = 0;
  CWE563_Unused_Variable__unused_value_char_22_goodB2G1Sink(0x43);
  return;
}


void goodB2G2(void)

{
  CWE563_Unused_Variable__unused_value_char_22_goodB2G2Global = 1;
  CWE563_Unused_Variable__unused_value_char_22_goodB2G2Sink(0x43);
  return;
}


void goodG2B(void)

{
  printHexCharLine(0x43);
  CWE563_Unused_Variable__unused_value_char_22_goodG2BGlobal = 1;
  CWE563_Unused_Variable__unused_value_char_22_goodG2BSink(0x43);
  return;
}


void CWE563_Unused_Variable__unused_value_char_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_value_struct_13_bad(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  return;
}


void goodG2B1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_struct_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_22_bad(void)

{
  undefined8 local_10;
  
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_22_badGlobal = 1;
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_22_badSink(local_10);
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_22_goodB2G1Global = 0;
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_22_goodB2G1Sink(local_10);
  return;
}


void goodB2G2(void)

{
  undefined8 local_10;
  
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_22_goodB2G2Global = 1;
  CWE563_Unused_Variable__unused_uninit_variable_int64_t_22_goodB2G2Sink(local_10);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_22_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_13_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0x43);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_13_good(void)

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


void CWE563_Unused_Variable__unused_init_variable_struct_08_bad(void)

{
  staticReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_08_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_long_15_bad(void)

{
  printLongLine(10);
  return;
}


void goodB2G1(void)

{
  printLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLine(5);
  return;
}


void goodG2B1(void)

{
  printLongLine(5);
  printLongLine(10);
  return;
}


void goodG2B2(void)

{
  printLongLine(5);
  printLongLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_long_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_11_bad(void)

{
  globalReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_11_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_05_bad(void)

{
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (staticFalse == 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (staticTrue != 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_05_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_04_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x004090ce) */

void goodB2G1(void)

{
  printLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_04_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_int_11_bad(void)

{
  int iVar1;
  
  globalReturnsTrue();
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine(10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint local_c;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 5;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printIntLine((ulong)local_c);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  uint local_c;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_c = 5;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)local_c);
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine(10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine(5);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_value_int_02_bad(void)

{
  printIntLine(10);
  return;
}


void goodB2G1(void)

{
  printIntLine(5);
  return;
}


void goodB2G2(void)

{
  printIntLine(5);
  return;
}


void goodG2B1(void)

{
  printIntLine(5);
  printIntLine(10);
  return;
}


void goodG2B2(void)

{
  printIntLine(5);
  printIntLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_int_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_value_char_07_bad(void)

{
  if (staticFive == 5) {
    printHexCharLine(0x5a);
  }
  return;
}


void goodB2G1(void)

{
  if (staticFive == 5) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticFive == 5) {
    printHexCharLine(0x43);
  }
  return;
}


void goodG2B1(void)

{
  if (staticFive == 5) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printHexCharLine(0x5a);
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printHexCharLine(0x43);
  }
  if (staticFive == 5) {
    printHexCharLine(0x5a);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_char_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_value_struct_03_bad(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void goodG2B1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_value_struct_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_22_bad(void)

{
  CWE563_Unused_Variable__unused_init_variable_struct_22_badGlobal = 1;
  CWE563_Unused_Variable__unused_init_variable_struct_22_badSink(0);
  return;
}


void goodB2G1(void)

{
  CWE563_Unused_Variable__unused_init_variable_struct_22_goodB2G1Global = 0;
  CWE563_Unused_Variable__unused_init_variable_struct_22_goodB2G1Sink(0);
  return;
}


void goodB2G2(void)

{
  CWE563_Unused_Variable__unused_init_variable_struct_22_goodB2G2Global = 1;
  CWE563_Unused_Variable__unused_init_variable_struct_22_goodB2G2Sink(0);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_22_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_10_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (globalFalse == 0) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLongLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_10_good(void)

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


void CWE563_Unused_Variable__unused_init_variable_int_08_bad(void)

{
  staticReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_08_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_22_bad(void)

{
  char local_9;
  
  CWE563_Unused_Variable__unused_uninit_variable_char_22_badGlobal = 1;
  CWE563_Unused_Variable__unused_uninit_variable_char_22_badSink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  CWE563_Unused_Variable__unused_uninit_variable_char_22_goodB2G1Global = 0;
  CWE563_Unused_Variable__unused_uninit_variable_char_22_goodB2G1Sink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G2(void)

{
  char local_9;
  
  CWE563_Unused_Variable__unused_uninit_variable_char_22_goodB2G2Global = 1;
  CWE563_Unused_Variable__unused_uninit_variable_char_22_goodB2G2Sink((ulong)(uint)(int)local_9);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_22_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_14_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (globalFive == 5) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalFive == 5) {
    printHexCharLine(0x43);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_14_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_struct_16_bad(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


void goodB2G(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_value_struct_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_22_bad(void)

{
  CWE563_Unused_Variable__unused_value_int64_t_22_badGlobal = 1;
  CWE563_Unused_Variable__unused_value_int64_t_22_badSink(5);
  return;
}


void goodB2G1(void)

{
  CWE563_Unused_Variable__unused_value_int64_t_22_goodB2G1Global = 0;
  CWE563_Unused_Variable__unused_value_int64_t_22_goodB2G1Sink(5);
  return;
}


void goodB2G2(void)

{
  CWE563_Unused_Variable__unused_value_int64_t_22_goodB2G2Global = 1;
  CWE563_Unused_Variable__unused_value_int64_t_22_goodB2G2Sink(5);
  return;
}


void goodG2B(void)

{
  printLongLongLine(5);
  CWE563_Unused_Variable__unused_value_int64_t_22_goodG2BGlobal = 1;
  CWE563_Unused_Variable__unused_value_int64_t_22_goodG2BSink(5);
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_22_good(void)

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


void CWE563_Unused_Variable__unused_uninit_variable_char_21_bad(void)

{
  char local_9;
  
  badStatic = 1;
  badSink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G1Sink(void)

{
  if (goodB2G1Static == 0) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)(uint)(int)local_9);
  return;
}


void goodB2G2Sink(void)

{
  if (goodB2G2Static != 0) {
    printHexCharLine(0x43);
  }
  return;
}


void goodB2G2(void)

{
  char local_9;
  
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)(uint)(int)local_9);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_21_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_03_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printHexCharLine(0x43);
  return;
}


void goodB2G2(void)

{
  printHexCharLine(0x43);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_03_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_int_10_bad(void)

{
  if (globalTrue != 0) {
    printIntLine(10);
  }
  return;
}


void goodB2G1(void)

{
  uint local_c;
  
  if (globalTrue != 0) {
    local_c = 5;
  }
  if (globalFalse == 0) {
    printIntLine((ulong)local_c);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalTrue != 0) {
    printIntLine(5);
  }
  return;
}


void goodG2B1(void)

{
  if (globalFalse == 0) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalTrue != 0) {
    printIntLine(10);
  }
  return;
}


void goodG2B2(void)

{
  if (globalTrue != 0) {
    printIntLine(5);
  }
  if (globalTrue != 0) {
    printIntLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int_10_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_16_bad(void)

{
  return;
}


void goodB2G(void)

{
  printLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_16_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_01_bad(void)

{
  return;
}


void goodB2G(void)

{
  printLongLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_01_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_15_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printLongLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_15_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_22_badSink(void)

{
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_22_goodB2G1Sink(void)

{
  if (CWE563_Unused_Variable__unused_uninit_variable_long_22_goodB2G1Global == 0) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_22_goodB2G2Sink(void)

{
  if (CWE563_Unused_Variable__unused_uninit_variable_long_22_goodB2G2Global != 0) {
    printLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_18_bad(void)

{
  return;
}


void goodB2G(void)

{
  printHexCharLine(0x43);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_18_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_09_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (GLOBAL_CONST_FALSE == 0) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_09_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(10);
  }
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = 5;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    printLongLongLine(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(5);
  }
  return;
}


void goodG2B1(void)

{
  if (GLOBAL_CONST_FALSE == 0) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(10);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(5);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_09_good(void)

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


void CWE563_Unused_Variable__unused_init_variable_int64_t_21_bad(void)

{
  badStatic = 1;
  badSink(5);
  return;
}


void goodB2G1Sink(undefined8 uParm1)

{
  if (goodB2G1Static == 0) {
    printLongLongLine(uParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(5);
  return;
}


void goodB2G2Sink(undefined8 uParm1)

{
  if (goodB2G2Static != 0) {
    printLongLongLine(uParm1);
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_21_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_09_bad(void)

{
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_09_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_07_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (staticFive == 5) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticFive == 5) {
    printIntLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_07_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(10);
  }
  return;
}


void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(5);
  }
  return;
}


void goodG2B1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(10);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(5);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_04_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a3cb) */

void goodB2G1(void)

{
  printHexCharLine(0x43);
  return;
}


void goodB2G2(void)

{
  printHexCharLine(0x43);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_04_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  return;
}


void goodB2G(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printHexCharLine(0x43);
    local_c = local_c + 1;
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_17_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_18_bad(void)

{
  return;
}


void goodB2G(void)

{
  printLongLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_18_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_value_long_05_bad(void)

{
  if (staticTrue != 0) {
    printLongLine(10);
  }
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  if (staticTrue != 0) {
    local_10 = 5;
  }
  if (staticFalse == 0) {
    printLongLine(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLongLine(5);
  }
  return;
}


void goodG2B1(void)

{
  if (staticFalse == 0) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printLongLine(10);
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printLongLine(5);
  }
  if (staticTrue != 0) {
    printLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_long_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_09_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (GLOBAL_CONST_FALSE == 0) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_09_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_22_bad(void)

{
  undefined8 local_10;
  
  CWE563_Unused_Variable__unused_uninit_variable_long_22_badGlobal = 1;
  CWE563_Unused_Variable__unused_uninit_variable_long_22_badSink(local_10);
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  CWE563_Unused_Variable__unused_uninit_variable_long_22_goodB2G1Global = 0;
  CWE563_Unused_Variable__unused_uninit_variable_long_22_goodB2G1Sink(local_10);
  return;
}


void goodB2G2(void)

{
  undefined8 local_10;
  
  CWE563_Unused_Variable__unused_uninit_variable_long_22_goodB2G2Global = 1;
  CWE563_Unused_Variable__unused_uninit_variable_long_22_goodB2G2Sink(local_10);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_22_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_struct_17_bad(void)

{
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = 0;
    local_14 = 0;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printStructLine(&local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE563_Unused_Variable__unused_value_struct_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_value_char_16_bad(void)

{
  printHexCharLine(0x5a);
  return;
}


void goodB2G(void)

{
  printHexCharLine(0x43);
  return;
}


void goodG2B(void)

{
  printHexCharLine(0x43);
  printHexCharLine(0x5a);
  return;
}


void CWE563_Unused_Variable__unused_value_char_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_value_int_07_bad(void)

{
  if (staticFive == 5) {
    printIntLine(10);
  }
  return;
}


void goodB2G1(void)

{
  if (staticFive == 5) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticFive == 5) {
    printIntLine(5);
  }
  return;
}


void goodG2B1(void)

{
  if (staticFive == 5) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printIntLine(10);
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printIntLine(5);
  }
  if (staticFive == 5) {
    printIntLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_11_bad(void)

{
  globalReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine(0x43);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_11_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  return;
}


void goodB2G(void)

{
  undefined4 local_18;
  undefined4 local_14;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
    local_c = local_c + 1;
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_17_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_07_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (staticFive == 5) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticFive == 5) {
    printHexCharLine(0x43);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_07_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_long_07_bad(void)

{
  if (staticFive == 5) {
    printLongLine(10);
  }
  return;
}


void goodB2G1(void)

{
  if (staticFive == 5) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticFive == 5) {
    printLongLine(5);
  }
  return;
}


void goodG2B1(void)

{
  if (staticFive == 5) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    printLongLine(10);
  }
  return;
}


void goodG2B2(void)

{
  if (staticFive == 5) {
    printLongLine(5);
  }
  if (staticFive == 5) {
    printLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_long_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  if (badStatic != 0) {
    printLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_long_21_bad(void)

{
  badStatic = 1;
  badSink(5);
  return;
}


void goodB2G1Sink(undefined8 uParm1)

{
  if (goodB2G1Static == 0) {
    printLongLine(uParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(5);
  return;
}


void goodB2G2Sink(undefined8 uParm1)

{
  if (goodB2G2Static != 0) {
    printLongLine(uParm1);
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(5);
  return;
}


void goodG2BSink(void)

{
  if (goodG2BStatic != 0) {
    printLongLine(10);
  }
  return;
}


void goodG2B(void)

{
  printLongLine(5);
  goodG2BStatic = 1;
  goodG2BSink(5);
  return;
}


void CWE563_Unused_Variable__unused_value_long_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_value_char_04_bad(void)

{
  printHexCharLine(0x5a);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040aece) */

void goodB2G1(void)

{
  printHexCharLine(0x43);
  return;
}


void goodB2G2(void)

{
  printHexCharLine(0x43);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040af23) */

void goodG2B1(void)

{
  printHexCharLine(0x43);
  printHexCharLine(0x5a);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0x43);
  printHexCharLine(0x5a);
  return;
}


void CWE563_Unused_Variable__unused_value_char_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_10_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (globalFalse == 0) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_10_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_22_badSink(void)

{
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_22_goodB2G1Sink(void)

{
  if (CWE563_Unused_Variable__unused_uninit_variable_int_22_goodB2G1Global == 0) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_22_goodB2G2Sink(void)

{
  if (CWE563_Unused_Variable__unused_uninit_variable_int_22_goodB2G2Global != 0) {
    printIntLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_14_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (globalFive == 5) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalFive == 5) {
    printIntLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_14_good(void)

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


void CWE563_Unused_Variable__unused_value_int64_t_08_bad(void)

{
  int iVar1;
  
  staticReturnsTrue();
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined8 local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 5;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printLongLongLine(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined8 local_10;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 5;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(local_10);
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(5);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_08_good(void)

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


void CWE563_Unused_Variable__unused_init_variable_long_08_bad(void)

{
  staticReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_08_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_14_bad(void)

{
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (globalFive == 5) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (globalFive == 5) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_14_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void badSink(void)

{
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_21_bad(void)

{
  undefined8 local_18;
  
  badStatic = 1;
  badSink(local_18);
  return;
}


void goodB2G1Sink(undefined8 uParm1)

{
  undefined8 local_18 [2];
  
  if (goodB2G1Static == 0) {
    local_18[0] = 0;
    printStructLine(local_18);
  }
  else {
    local_18[0] = uParm1;
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  undefined8 local_18;
  
  goodB2G1Static = 0;
  goodB2G1Sink(local_18);
  return;
}


void goodB2G2Sink(void)

{
  undefined8 local_18 [2];
  
  if (goodB2G2Static != 0) {
    local_18[0] = 0;
    printStructLine(local_18);
  }
  return;
}


void goodB2G2(void)

{
  undefined8 local_18;
  
  goodB2G2Static = 1;
  goodB2G2Sink(local_18);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_21_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_06_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b51c) */

void goodB2G1(void)

{
  printHexCharLine(0x43);
  return;
}


void goodB2G2(void)

{
  printHexCharLine(0x43);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_06_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_22_bad(void)

{
  CWE563_Unused_Variable__unused_init_variable_long_22_badGlobal = 1;
  CWE563_Unused_Variable__unused_init_variable_long_22_badSink(5);
  return;
}


void goodB2G1(void)

{
  CWE563_Unused_Variable__unused_init_variable_long_22_goodB2G1Global = 0;
  CWE563_Unused_Variable__unused_init_variable_long_22_goodB2G1Sink(5);
  return;
}


void goodB2G2(void)

{
  CWE563_Unused_Variable__unused_init_variable_long_22_goodB2G2Global = 1;
  CWE563_Unused_Variable__unused_init_variable_long_22_goodB2G2Sink(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_22_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_long_02_bad(void)

{
  printLongLine(10);
  return;
}


void goodB2G1(void)

{
  printLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLine(5);
  return;
}


void goodG2B1(void)

{
  printLongLine(5);
  printLongLine(10);
  return;
}


void goodG2B2(void)

{
  printLongLine(5);
  printLongLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_long_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_01_bad(void)

{
  return;
}


void goodB2G(void)

{
  printLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_01_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_13_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_13_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_long_06_bad(void)

{
  printLongLine(10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b802) */

void goodB2G1(void)

{
  printLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLine(5);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040b860) */

void goodG2B1(void)

{
  printLongLine(5);
  printLongLine(10);
  return;
}


void goodG2B2(void)

{
  printLongLine(5);
  printLongLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_long_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_05_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (staticFalse == 0) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLongLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_05_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_char_22_badSink(void)

{
  if (CWE563_Unused_Variable__unused_value_char_22_badGlobal != 0) {
    printHexCharLine(0x5a);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_char_22_goodB2G1Sink(char cParm1)

{
  if (CWE563_Unused_Variable__unused_value_char_22_goodB2G1Global == 0) {
    printHexCharLine((ulong)(uint)(int)cParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE563_Unused_Variable__unused_value_char_22_goodB2G2Sink(char cParm1)

{
  if (CWE563_Unused_Variable__unused_value_char_22_goodB2G2Global != 0) {
    printHexCharLine((ulong)(uint)(int)cParm1);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_char_22_goodG2BSink(void)

{
  if (CWE563_Unused_Variable__unused_value_char_22_goodG2BGlobal != 0) {
    printHexCharLine(0x5a);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int_05_bad(void)

{
  if (staticTrue != 0) {
    printIntLine(10);
  }
  return;
}


void goodB2G1(void)

{
  uint local_c;
  
  if (staticTrue != 0) {
    local_c = 5;
  }
  if (staticFalse == 0) {
    printIntLine((ulong)local_c);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticTrue != 0) {
    printIntLine(5);
  }
  return;
}


void goodG2B1(void)

{
  if (staticFalse == 0) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printIntLine(10);
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printIntLine(5);
  }
  if (staticTrue != 0) {
    printIntLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_02_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printHexCharLine(0x43);
  return;
}


void goodB2G2(void)

{
  printHexCharLine(0x43);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_02_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_22_bad(void)

{
  uint local_c;
  
  CWE563_Unused_Variable__unused_uninit_variable_int_22_badGlobal = 1;
  CWE563_Unused_Variable__unused_uninit_variable_int_22_badSink((ulong)local_c);
  return;
}


void goodB2G1(void)

{
  uint local_c;
  
  CWE563_Unused_Variable__unused_uninit_variable_int_22_goodB2G1Global = 0;
  CWE563_Unused_Variable__unused_uninit_variable_int_22_goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2(void)

{
  uint local_c;
  
  CWE563_Unused_Variable__unused_uninit_variable_int_22_goodB2G2Global = 1;
  CWE563_Unused_Variable__unused_uninit_variable_int_22_goodB2G2Sink((ulong)local_c);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_22_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_10_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (globalFalse == 0) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalTrue != 0) {
    printHexCharLine(0x43);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_10_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_07_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (staticFive == 5) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticFive == 5) {
    printLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_07_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_struct_15_bad(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void goodG2B1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_value_struct_15_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_16_bad(void)

{
  return;
}


void goodB2G(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_16_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_13_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_13_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_16_bad(void)

{
  return;
}


void goodB2G(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_16_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_07_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (staticFive == 5) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticFive == 5) {
    printLongLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_07_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_01_bad(void)

{
  return;
}


void goodB2G(void)

{
  printHexCharLine(0x43);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_01_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_15_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printHexCharLine(0x43);
  return;
}


void goodB2G2(void)

{
  printHexCharLine(0x43);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_15_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_int_17_bad(void)

{
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine(10);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  uint local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_14 = 5;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine((ulong)local_14);
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printIntLine(5);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printIntLine(10);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_value_long_14_bad(void)

{
  if (globalFive == 5) {
    printLongLine(10);
  }
  return;
}


void goodB2G1(void)

{
  if (globalFive == 5) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalFive == 5) {
    printLongLine(5);
  }
  return;
}


void goodG2B1(void)

{
  if (globalFive == 5) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printLongLine(10);
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printLongLine(5);
  }
  if (globalFive == 5) {
    printLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_long_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_22_badSink(void)

{
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_22_goodB2G1Sink(undefined8 uParm1)

{
  undefined8 local_18 [2];
  
  if (CWE563_Unused_Variable__unused_uninit_variable_struct_22_goodB2G1Global == 0) {
    local_18[0] = 0;
    printStructLine(local_18);
  }
  else {
    local_18[0] = uParm1;
    printLine("Benign, fixed string");
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_22_goodB2G2Sink(void)

{
  undefined8 local_18 [2];
  
  if (CWE563_Unused_Variable__unused_uninit_variable_struct_22_goodB2G2Global != 0) {
    local_18[0] = 0;
    printStructLine(local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_18_bad(void)

{
  return;
}


void goodB2G(void)

{
  printIntLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_18_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_global_value_01_bad(void)

{
  CWE563_Unused_Variable__unused_global_value_01_badGlobal = 10;
  printIntLine(10);
  return;
}


void good1(void)

{
  printIntLine((ulong)CWE563_Unused_Variable__unused_global_value_01_globalGood1);
  return;
}


void CWE563_Unused_Variable__unused_global_value_01_good(void)

{
  good1();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_09_bad(void)

{
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  if (GLOBAL_CONST_FALSE == 0) {
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  if (GLOBAL_CONST_TRUE != 0) {
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_09_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_06_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040c49e) */

void goodB2G1(void)

{
  printLongLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_06_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void badSink(void)

{
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_21_bad(void)

{
  badStatic = 1;
  badSink(5);
  return;
}


void goodB2G1Sink(undefined8 uParm1)

{
  if (goodB2G1Static == 0) {
    printLongLine(uParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(5);
  return;
}


void goodB2G2Sink(undefined8 uParm1)

{
  if (goodB2G2Static != 0) {
    printLongLine(uParm1);
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_21_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_03_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_03_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_14_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (globalFive == 5) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalFive == 5) {
    printLongLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_14_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void badSink(void)

{
  if (badStatic != 0) {
    printIntLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int_21_bad(void)

{
  badStatic = 1;
  badSink(5);
  return;
}


void goodB2G1Sink(uint uParm1)

{
  if (goodB2G1Static == 0) {
    printIntLine((ulong)uParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(5);
  return;
}


void goodB2G2Sink(uint uParm1)

{
  if (goodB2G2Static != 0) {
    printIntLine((ulong)uParm1);
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(5);
  return;
}


void goodG2BSink(void)

{
  if (goodG2BStatic != 0) {
    printIntLine(10);
  }
  return;
}


void goodG2B(void)

{
  printIntLine(5);
  goodG2BStatic = 1;
  goodG2BSink(5);
  return;
}


void CWE563_Unused_Variable__unused_value_int_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_value_char_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0x5a);
  }
  return;
}


void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0x43);
  }
  return;
}


void goodG2B1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0x5a);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0x43);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printHexCharLine(0x5a);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_char_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_18_bad(void)

{
  return;
}


void goodB2G(void)

{
  printLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_18_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_value_struct_07_bad(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (staticFive == 5) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (staticFive == 5) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (staticFive == 5) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  return;
}


void goodG2B1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (staticFive == 5) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticFive == 5) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (staticFive == 5) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  if (staticFive == 5) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_struct_07_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_09_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (GLOBAL_CONST_FALSE == 0) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0x43);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_09_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_struct_05_bad(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (staticTrue != 0) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (staticTrue != 0) {
    local_18 = 0;
    local_14 = 0;
  }
  if (staticFalse == 0) {
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (staticTrue != 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  return;
}


void goodG2B1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (staticFalse == 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (staticTrue != 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  if (staticTrue != 0) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_struct_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_03_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printIntLine(5);
  return;
}


void goodB2G2(void)

{
  printIntLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_03_good(void)

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


void CWE563_Unused_Variable__unused_uninit_variable_struct_08_bad(void)

{
  staticReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_08_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_15_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_15_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_22_bad(void)

{
  undefined8 local_18;
  
  CWE563_Unused_Variable__unused_uninit_variable_struct_22_badGlobal = 1;
  CWE563_Unused_Variable__unused_uninit_variable_struct_22_badSink(local_18);
  return;
}


void goodB2G1(void)

{
  undefined8 local_18;
  
  CWE563_Unused_Variable__unused_uninit_variable_struct_22_goodB2G1Global = 0;
  CWE563_Unused_Variable__unused_uninit_variable_struct_22_goodB2G1Sink(local_18);
  return;
}


void goodB2G2(void)

{
  undefined8 local_18;
  
  CWE563_Unused_Variable__unused_uninit_variable_struct_22_goodB2G2Global = 1;
  CWE563_Unused_Variable__unused_uninit_variable_struct_22_goodB2G2Sink(local_18);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_22_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_long_04_bad(void)

{
  printLongLine(10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040cfca) */

void goodB2G1(void)

{
  printLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLine(5);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040d025) */

void goodG2B1(void)

{
  printLongLine(5);
  printLongLine(10);
  return;
}


void goodG2B2(void)

{
  printLongLine(5);
  printLongLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_long_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_05_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (staticFalse == 0) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(0x43);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_05_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  return;
}


void goodB2G(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printIntLine(5);
    local_c = local_c + 1;
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_17_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_06_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040d1d3) */

void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_06_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void badSink(void)

{
  if (badStatic != 0) {
    printHexCharLine(0x5a);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_char_21_bad(void)

{
  badStatic = 1;
  badSink(0x43);
  return;
}


void goodB2G1Sink(char cParm1)

{
  if (goodB2G1Static == 0) {
    printHexCharLine((ulong)(uint)(int)cParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(0x43);
  return;
}


void goodB2G2Sink(char cParm1)

{
  if (goodB2G2Static != 0) {
    printHexCharLine((ulong)(uint)(int)cParm1);
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0x43);
  return;
}


void goodG2BSink(void)

{
  if (goodG2BStatic != 0) {
    printHexCharLine(0x5a);
  }
  return;
}


void goodG2B(void)

{
  printHexCharLine(0x43);
  goodG2BStatic = 1;
  goodG2BSink(0x43);
  return;
}


void CWE563_Unused_Variable__unused_value_char_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_value_char_03_bad(void)

{
  printHexCharLine(0x5a);
  return;
}


void goodB2G1(void)

{
  printHexCharLine(0x43);
  return;
}


void goodB2G2(void)

{
  printHexCharLine(0x43);
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0x43);
  printHexCharLine(0x5a);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0x43);
  printHexCharLine(0x5a);
  return;
}


void CWE563_Unused_Variable__unused_value_char_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_value_long_22_badSink(void)

{
  if (CWE563_Unused_Variable__unused_value_long_22_badGlobal != 0) {
    printLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_long_22_goodB2G1Sink(undefined8 uParm1)

{
  if (CWE563_Unused_Variable__unused_value_long_22_goodB2G1Global == 0) {
    printLongLine(uParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE563_Unused_Variable__unused_value_long_22_goodB2G2Sink(undefined8 uParm1)

{
  if (CWE563_Unused_Variable__unused_value_long_22_goodB2G2Global != 0) {
    printLongLine(uParm1);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_long_22_goodG2BSink(void)

{
  if (CWE563_Unused_Variable__unused_value_long_22_goodG2BGlobal != 0) {
    printLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_char_18_bad(void)

{
  printHexCharLine(0x5a);
  return;
}


void goodB2G(void)

{
  printHexCharLine(0x43);
  return;
}


void goodG2B(void)

{
  printHexCharLine(0x43);
  printHexCharLine(0x5a);
  return;
}


void CWE563_Unused_Variable__unused_value_char_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_04_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040d5b0) */

void goodB2G1(void)

{
  printIntLine(5);
  return;
}


void goodB2G2(void)

{
  printIntLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_04_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  return;
}


void goodB2G(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printLongLine(5);
    local_c = local_c + 1;
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_17_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_18_bad(void)

{
  return;
}


void goodB2G(void)

{
  printLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_18_good(void)

{
  goodB2G();
  return;
}


void badSink(void)

{
  undefined8 local_18 [2];
  
  if (badStatic != 0) {
    local_18[0] = 0x100000001;
    printStructLine(local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_struct_21_bad(void)

{
  badStatic = 1;
  badSink(0);
  return;
}


void goodB2G1Sink(undefined8 uParm1)

{
  undefined8 local_18 [2];
  
  if (goodB2G1Static == 0) {
    local_18[0] = uParm1;
    printStructLine(local_18);
  }
  else {
    local_18[0] = uParm1;
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(0);
  return;
}


void goodB2G2Sink(undefined8 uParm1)

{
  undefined8 local_18 [2];
  
  if (goodB2G2Static != 0) {
    local_18[0] = uParm1;
    printStructLine(local_18);
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(0);
  return;
}


void goodG2BSink(void)

{
  undefined8 local_18 [2];
  
  if (goodG2BStatic != 0) {
    local_18[0] = 0x100000001;
    printStructLine(local_18);
  }
  return;
}


void goodG2B(void)

{
  undefined4 local_18;
  undefined4 uStack20;
  
  local_18 = 0;
  uStack20 = 0;
  printStructLine(&local_18);
  goodG2BStatic = 1;
  goodG2BSink(CONCAT44(uStack20,local_18));
  return;
}


void CWE563_Unused_Variable__unused_value_struct_21_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_13_bad(void)

{
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_13_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_16_bad(void)

{
  return;
}


void goodB2G(void)

{
  printLongLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_16_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_value_int_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(10);
  }
  return;
}


void goodB2G1(void)

{
  uint local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_c = 5;
  }
  if (GLOBAL_CONST_FALSE == 0) {
    printIntLine((ulong)local_c);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(5);
  }
  return;
}


void goodG2B1(void)

{
  if (GLOBAL_CONST_FALSE == 0) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(10);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(5);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_15_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printIntLine(5);
  return;
}


void goodB2G2(void)

{
  printIntLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_15_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_11_bad(void)

{
  globalReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_11_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_02_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_02_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_09_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (GLOBAL_CONST_FALSE == 0) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_09_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_int_16_bad(void)

{
  printIntLine(10);
  return;
}


void goodB2G(void)

{
  printIntLine(5);
  return;
}


void goodG2B(void)

{
  printIntLine(5);
  printIntLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_int_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_10_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (globalFalse == 0) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalTrue != 0) {
    printLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_10_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_struct_01_bad(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


void goodG2B(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


void goodB2G(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_value_struct_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_22_badSink(void)

{
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_22_goodB2G1Sink(uint uParm1)

{
  if (CWE563_Unused_Variable__unused_init_variable_int_22_goodB2G1Global == 0) {
    printIntLine((ulong)uParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_22_goodB2G2Sink(uint uParm1)

{
  if (CWE563_Unused_Variable__unused_init_variable_int_22_goodB2G2Global != 0) {
    printIntLine((ulong)uParm1);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_11_bad(void)

{
  globalReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printIntLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_11_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_02_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printIntLine(5);
  return;
}


void goodB2G2(void)

{
  printIntLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_02_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_14_bad(void)

{
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  if (globalFive == 5) {
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  if (globalFive == 5) {
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_14_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_13_bad(void)

{
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  if (GLOBAL_CONST_FIVE == 5) {
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_13_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void helperBad(void)

{
  printLine("This function does not use the parameter variable: intBad.");
  return;
}


void CWE563_Unused_Variable__unused_parameter_variable_01_bad(void)

{
  helperBad(5);
  return;
}


void helperGood1(uint uParm1)

{
  printIntLine((ulong)uParm1);
  return;
}


void good1(void)

{
  helperGood1(10);
  return;
}


void CWE563_Unused_Variable__unused_parameter_variable_01_good(void)

{
  good1();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_03_bad(void)

{
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_03_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_16_bad(void)

{
  return;
}


void goodB2G(void)

{
  printIntLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_16_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_05_bad(void)

{
  if (staticTrue != 0) {
    printLongLongLine(10);
  }
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  if (staticTrue != 0) {
    local_10 = 5;
  }
  if (staticFalse == 0) {
    printLongLongLine(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLongLongLine(5);
  }
  return;
}


void goodG2B1(void)

{
  if (staticFalse == 0) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (staticTrue != 0) {
    printLongLongLine(10);
  }
  return;
}


void goodG2B2(void)

{
  if (staticTrue != 0) {
    printLongLongLine(5);
  }
  if (staticTrue != 0) {
    printLongLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_05_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_value_char_17_bad(void)

{
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printHexCharLine(0x5a);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  char local_11;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_11 = 'C';
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printHexCharLine((ulong)(uint)(int)local_11);
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printHexCharLine(0x43);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printHexCharLine(0x5a);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE563_Unused_Variable__unused_value_char_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_01_bad(void)

{
  return;
}


void goodB2G(void)

{
  printLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_01_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_15_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_15_good(void)

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


void CWE563_Unused_Variable__unused_value_int_08_bad(void)

{
  int iVar1;
  
  staticReturnsTrue();
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine(10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  uint local_c;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 5;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printIntLine((ulong)local_c);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  uint local_c;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_c = 5;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine((ulong)local_c);
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine(10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine(5);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_09_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (GLOBAL_CONST_FALSE == 0) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printIntLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_09_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_17_bad(void)

{
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printLongLongLine(10);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = 5;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printLongLongLine(local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printLongLongLine(5);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printLongLongLine(10);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(void)

{
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_21_bad(void)

{
  uint local_c;
  
  badStatic = 1;
  badSink((ulong)local_c);
  return;
}


void goodB2G1Sink(void)

{
  if (goodB2G1Static == 0) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  uint local_c;
  
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)local_c);
  return;
}


void goodB2G2Sink(void)

{
  if (goodB2G2Static != 0) {
    printIntLine(5);
  }
  return;
}


void goodB2G2(void)

{
  uint local_c;
  
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)local_c);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_21_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_char_11_bad(void)

{
  int iVar1;
  
  globalReturnsTrue();
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine(0x5a);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  char local_9;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 'C';
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  char local_9;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_9 = 'C';
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine(0x5a);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine(0x43);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printHexCharLine(0x5a);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_char_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_value_char_02_bad(void)

{
  printHexCharLine(0x5a);
  return;
}


void goodB2G1(void)

{
  printHexCharLine(0x43);
  return;
}


void goodB2G2(void)

{
  printHexCharLine(0x43);
  return;
}


void goodG2B1(void)

{
  printHexCharLine(0x43);
  printHexCharLine(0x5a);
  return;
}


void goodG2B2(void)

{
  printHexCharLine(0x43);
  printHexCharLine(0x5a);
  return;
}


void CWE563_Unused_Variable__unused_value_char_02_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_18_bad(void)

{
  return;
}


void goodB2G(void)

{
  printLongLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_18_good(void)

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


void CWE563_Unused_Variable__unused_value_struct_08_bad(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    local_14 = 0;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    local_14 = 0;
  }
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    local_14 = 0;
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printStructLine(&local_18);
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 1;
    local_14 = 1;
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_struct_08_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_06_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040ecab) */

void goodB2G1(void)

{
  printLongLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_06_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_22_bad(void)

{
  CWE563_Unused_Variable__unused_init_variable_int_22_badGlobal = 1;
  CWE563_Unused_Variable__unused_init_variable_int_22_badSink(5);
  return;
}


void goodB2G1(void)

{
  CWE563_Unused_Variable__unused_init_variable_int_22_goodB2G1Global = 0;
  CWE563_Unused_Variable__unused_init_variable_int_22_goodB2G1Sink(5);
  return;
}


void goodB2G2(void)

{
  CWE563_Unused_Variable__unused_init_variable_int_22_goodB2G2Global = 1;
  CWE563_Unused_Variable__unused_init_variable_int_22_goodB2G2Sink(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_22_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_01_bad(void)

{
  return;
}


void goodB2G(void)

{
  printIntLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_01_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_value_long_13_bad(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLine(10);
  }
  return;
}


void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLine(5);
  }
  return;
}


void goodG2B1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLine(10);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLine(5);
  }
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_long_13_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_16_bad(void)

{
  return;
}


void goodB2G(void)

{
  printIntLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_16_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_value_int_06_bad(void)

{
  printIntLine(10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040efce) */

void goodB2G1(void)

{
  printIntLine(5);
  return;
}


void goodB2G2(void)

{
  printIntLine(5);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f027) */

void goodG2B1(void)

{
  printIntLine(5);
  printIntLine(10);
  return;
}


void goodG2B2(void)

{
  printIntLine(5);
  printIntLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_int_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_04_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f102) */

void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_struct_04_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_07_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (staticFive == 5) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticFive == 5) {
    printLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_07_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_char_01_bad(void)

{
  printHexCharLine(0x5a);
  return;
}


void goodG2B(void)

{
  printHexCharLine(0x43);
  printHexCharLine(0x5a);
  return;
}


void goodB2G(void)

{
  printHexCharLine(0x43);
  return;
}


void CWE563_Unused_Variable__unused_value_char_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_05_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (staticFalse == 0) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticTrue != 0) {
    printLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_long_05_good(void)

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


void CWE563_Unused_Variable__unused_uninit_variable_int_08_bad(void)

{
  staticReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    printIntLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_08_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_15_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printHexCharLine(0x43);
  return;
}


void goodB2G2(void)

{
  printHexCharLine(0x43);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_15_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_13_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printIntLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_13_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_07_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (staticFive == 5) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticFive == 5) {
    printIntLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int_07_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_long_03_bad(void)

{
  printLongLine(10);
  return;
}


void goodB2G1(void)

{
  printLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLine(5);
  return;
}


void goodG2B1(void)

{
  printLongLine(5);
  printLongLine(10);
  return;
}


void goodG2B2(void)

{
  printLongLine(5);
  printLongLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_long_03_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_11_bad(void)

{
  globalReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_11_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_02_bad(void)

{
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_02_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_14_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (globalFive == 5) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalFive == 5) {
    printLongLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_14_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_long_18_bad(void)

{
  printLongLine(10);
  return;
}


void goodB2G(void)

{
  printLongLine(5);
  return;
}


void goodG2B(void)

{
  printLongLine(5);
  printLongLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_long_18_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void badSink(void)

{
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_21_bad(void)

{
  undefined8 local_10;
  
  badStatic = 1;
  badSink(local_10);
  return;
}


void goodB2G1Sink(void)

{
  if (goodB2G1Static == 0) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  undefined8 local_10;
  
  goodB2G1Static = 0;
  goodB2G1Sink(local_10);
  return;
}


void goodB2G2Sink(void)

{
  if (goodB2G2Static != 0) {
    printLongLongLine(5);
  }
  return;
}


void goodB2G2(void)

{
  undefined8 local_10;
  
  goodB2G2Static = 1;
  goodB2G2Sink(local_10);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_21_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_03_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printLongLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_03_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_13_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_FIVE == 5) {
    printLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_long_13_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_16_bad(void)

{
  printLongLongLine(10);
  return;
}


void goodB2G(void)

{
  printLongLongLine(5);
  return;
}


void goodG2B(void)

{
  printLongLongLine(5);
  printLongLongLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_int64_t_16_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_value_int_14_bad(void)

{
  if (globalFive == 5) {
    printIntLine(10);
  }
  return;
}


void goodB2G1(void)

{
  if (globalFive == 5) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (globalFive == 5) {
    printIntLine(5);
  }
  return;
}


void goodG2B1(void)

{
  if (globalFive == 5) {
    printIntLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (globalFive == 5) {
    printIntLine(10);
  }
  return;
}


void goodG2B2(void)

{
  if (globalFive == 5) {
    printIntLine(5);
  }
  if (globalFive == 5) {
    printIntLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_int_14_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_value_char_09_bad(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0x5a);
  }
  return;
}


void goodB2G1(void)

{
  char local_9;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_9 = 'C';
  }
  if (GLOBAL_CONST_FALSE == 0) {
    printHexCharLine((ulong)(uint)(int)local_9);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0x43);
  }
  return;
}


void goodG2B1(void)

{
  if (GLOBAL_CONST_FALSE == 0) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0x5a);
  }
  return;
}


void goodG2B2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0x43);
  }
  if (GLOBAL_CONST_TRUE != 0) {
    printHexCharLine(0x5a);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_char_09_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_10_bad(void)

{
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (globalFalse == 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (globalTrue != 0) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_10_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_long_22_bad(void)

{
  CWE563_Unused_Variable__unused_value_long_22_badGlobal = 1;
  CWE563_Unused_Variable__unused_value_long_22_badSink(5);
  return;
}


void goodB2G1(void)

{
  CWE563_Unused_Variable__unused_value_long_22_goodB2G1Global = 0;
  CWE563_Unused_Variable__unused_value_long_22_goodB2G1Sink(5);
  return;
}


void goodB2G2(void)

{
  CWE563_Unused_Variable__unused_value_long_22_goodB2G2Global = 1;
  CWE563_Unused_Variable__unused_value_long_22_goodB2G2Sink(5);
  return;
}


void goodG2B(void)

{
  printLongLine(5);
  CWE563_Unused_Variable__unused_value_long_22_goodG2BGlobal = 1;
  CWE563_Unused_Variable__unused_value_long_22_goodG2BSink(5);
  return;
}


void CWE563_Unused_Variable__unused_value_long_22_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_15_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printLongLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_15_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  return;
}


void goodB2G(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printHexCharLine(0x43);
    local_c = local_c + 1;
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_17_good(void)

{
  goodB2G();
  return;
}


void badSink(void)

{
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_21_bad(void)

{
  badStatic = 1;
  badSink(5);
  return;
}


void goodB2G1Sink(uint uParm1)

{
  if (goodB2G1Static == 0) {
    printIntLine((ulong)uParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  goodB2G1Static = 0;
  goodB2G1Sink(5);
  return;
}


void goodB2G2Sink(uint uParm1)

{
  if (goodB2G2Static != 0) {
    printIntLine((ulong)uParm1);
  }
  return;
}


void goodB2G2(void)

{
  goodB2G2Static = 1;
  goodB2G2Sink(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_21_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_01_bad(void)

{
  return;
}


void goodB2G(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_01_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_05_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (staticFalse == 0) {
    printHexCharLine(0x43);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (staticTrue != 0) {
    printHexCharLine(0x43);
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_char_05_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_struct_06_bad(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410102) */

void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410166) */

void goodG2B1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


void goodG2B2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  printStructLine(&local_18);
  local_18 = 1;
  local_14 = 1;
  printStructLine(&local_18);
  return;
}


void CWE563_Unused_Variable__unused_value_struct_06_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void helperBad(void)

{
  printIntLine(0);
  return;
}


void CWE563_Unused_Variable__unused_parameter_value_01_bad(void)

{
  helperBad(5);
  return;
}


void helperGood1(uint uParm1)

{
  printIntLine((ulong)uParm1);
  return;
}


void good1(void)

{
  helperGood1(10);
  return;
}


void CWE563_Unused_Variable__unused_parameter_value_01_good(void)

{
  good1();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_18_bad(void)

{
  return;
}


void goodB2G(void)

{
  printIntLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int_18_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_static_global_variable_01_bad(void)

{
  printLine("This function does not use the static global variable: global_bad.");
  return;
}


void good1(void)

{
  printIntLine((ulong)staticGlobalGood1);
  return;
}


void CWE563_Unused_Variable__unused_static_global_variable_01_good(void)

{
  good1();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_04_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x0041032b) */

void goodB2G1(void)

{
  printLongLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_04_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_int_01_bad(void)

{
  printIntLine(10);
  return;
}


void goodG2B(void)

{
  printIntLine(5);
  printIntLine(10);
  return;
}


void goodB2G(void)

{
  printIntLine(5);
  return;
}


void CWE563_Unused_Variable__unused_value_int_01_good(void)

{
  goodG2B();
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_06_bad(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410421) */

void goodB2G1(void)

{
  printHexCharLine(0x43);
  return;
}


void goodB2G2(void)

{
  printHexCharLine(0x43);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_char_06_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_value_int_04_bad(void)

{
  printIntLine(10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x004104d0) */

void goodB2G1(void)

{
  printIntLine(5);
  return;
}


void goodB2G2(void)

{
  printIntLine(5);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00410526) */

void goodG2B1(void)

{
  printIntLine(5);
  printIntLine(10);
  return;
}


void goodG2B2(void)

{
  printIntLine(5);
  printIntLine(10);
  return;
}


void CWE563_Unused_Variable__unused_value_int_04_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_value_long_17_bad(void)

{
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printLongLine(10);
    local_10 = local_10 + 1;
  }
  return;
}


void goodB2G(void)

{
  undefined8 local_18;
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_18 = 5;
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printLongLine(local_18);
    local_10 = local_10 + 1;
  }
  return;
}


void goodG2B(void)

{
  int local_10;
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printLongLine(5);
    local_c = local_c + 1;
  }
  local_10 = 0;
  while (local_10 < 1) {
    printLongLine(10);
    local_10 = local_10 + 1;
  }
  return;
}


void CWE563_Unused_Variable__unused_value_long_17_good(void)

{
  goodB2G();
  goodG2B();
  return;
}


void CWE563_Unused_Variable__unused_value_long_11_bad(void)

{
  int iVar1;
  
  globalReturnsTrue();
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLine(10);
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  undefined8 local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 5;
  }
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printLongLine(local_10);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  undefined8 local_10;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = 5;
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLine(local_10);
  }
  return;
}


void goodG2B1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLine(10);
  }
  return;
}


void goodG2B2(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLine(5);
  }
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLine(10);
  }
  return;
}


void CWE563_Unused_Variable__unused_value_long_11_good(void)

{
  goodB2G1();
  goodB2G2();
  goodG2B1();
  goodG2B2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_07_bad(void)

{
  return;
}


void goodB2G1(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (staticFive == 5) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (staticFive == 5) {
    local_18 = 0;
    local_14 = 0;
    printStructLine(&local_18);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_struct_07_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_17_bad(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    local_c = local_c + 1;
  }
  return;
}


void goodB2G(void)

{
  int local_c;
  
  local_c = 0;
  while (local_c < 1) {
    printLongLongLine(5);
    local_c = local_c + 1;
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_17_good(void)

{
  goodB2G();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_09_bad(void)

{
  return;
}


void goodB2G1(void)

{
  if (GLOBAL_CONST_FALSE == 0) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  if (GLOBAL_CONST_TRUE != 0) {
    printLongLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_09_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_22_badSink(void)

{
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_22_goodB2G1Sink(undefined8 uParm1)

{
  if (CWE563_Unused_Variable__unused_init_variable_int64_t_22_goodB2G1Global == 0) {
    printLongLongLine(uParm1);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE563_Unused_Variable__unused_init_variable_int64_t_22_goodB2G2Sink(undefined8 uParm1)

{
  if (CWE563_Unused_Variable__unused_init_variable_int64_t_22_goodB2G2Global != 0) {
    printLongLongLine(uParm1);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_11_bad(void)

{
  globalReturnsTrue();
  return;
}


void goodB2G1(void)

{
  int iVar1;
  
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    printLongLongLine(5);
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int iVar1;
  
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    printLongLongLine(5);
  }
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_11_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_02_bad(void)

{
  return;
}


void goodB2G1(void)

{
  printLongLongLine(5);
  return;
}


void goodB2G2(void)

{
  printLongLongLine(5);
  return;
}


void CWE563_Unused_Variable__unused_uninit_variable_int64_t_02_good(void)

{
  goodB2G1();
  goodB2G2();
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
  printf((char *)(double)fParm1,&DAT_0041c26d);
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
  printf(pcParm1,&DAT_0041c28a);
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
    __isoc99_sscanf(lVar1,&DAT_0041c298,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_0041c2a0,&local_14);
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

