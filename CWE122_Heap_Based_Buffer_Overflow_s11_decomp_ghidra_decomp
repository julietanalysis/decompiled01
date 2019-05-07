
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00615ff8;
  if (PTR___gmon_start___00615ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400900(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00616010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00616018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00616020)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00616028)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00616030)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00616038)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00616040)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00616048)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00616050)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00616058)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00616060)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_00616068)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00616070)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_00616078)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_00616080)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_00616088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_00616090)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_00616098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_006160a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_006160a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_006160b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_006160b8)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___00615ff8)();
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
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_good();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_good();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_bad();
  printLine("Calling CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_bad();");
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_bad();
  return 0;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 1;
  __ptr[1] = 2;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 1;
  __ptr[1] = 2;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_31_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 0x7e444ecd0d33972b;
    printDoubleLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00401edb) */

void goodG2B1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 0x7e444ecd0d33972b;
    printDoubleLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 0x7e444ecd0d33972b;
    printDoubleLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65b_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65b_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67b_badSink(puVar1);
  return;
}


void goodG2B(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67b_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64b_badSink(void **ppvParm1)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)*ppvParm1;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64b_goodG2BSink(void **ppvParm1)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)*ppvParm1;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


undefined4 * CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_badSource(undefined4 *puParm1)

{
  undefined4 *local_10;
  
  local_10 = puParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_badGlobal != 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  return local_10;
}


undefined4 * CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_goodG2B1Source(undefined4 *puParm1)

{
  undefined4 *local_10;
  
  if (CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_goodG2B1Global == 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  else {
    printLine("Benign, fixed string");
    local_10 = puParm1;
  }
  return local_10;
}


undefined4 * CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_goodG2B2Source(undefined4 *puParm1)

{
  undefined4 *local_10;
  
  local_10 = puParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_goodG2B2Global != 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_bad(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  else {
    printLine("Benign, fixed string");
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_bad(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(8);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(8);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_64_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_bad(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  else {
    printLine("Benign, fixed string");
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65b_badSink(puVar1,uParm2,puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65b_goodG2BSink(puVar1,uParm2,puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_65_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_bad(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  else {
    printLine("Benign, fixed string");
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 1;
  __ptr[1] = 2;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 1;
  __ptr[1] = 2;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 1;
  __ptr[1] = 2;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64b_badSink(void **ppvParm1)

{
  void *__ptr;
  
  __ptr = *ppvParm1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64b_goodG2BSink(void **ppvParm1)

{
  void *__ptr;
  
  __ptr = *ppvParm1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


undefined4 * badSource(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  return puVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_bad(void)

{
  void *__ptr;
  
  __ptr = (void *)badSource(0);
  printStructLine(__ptr);
  free(__ptr);
  return;
}


undefined4 * goodG2BSource(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  return puVar1;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = (void *)goodG2BSource(0);
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_42_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67b_badSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67b_goodG2BSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7ffffffb;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7ffffffb;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_31_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67b_badSink(undefined8 *puParm1)

{
  printDoubleLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67b_goodG2BSink(undefined8 *puParm1)

{
  printDoubleLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_bad(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54b_badSink(puVar1);
  return;
}


void goodG2B(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54b_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_bad(void)

{
  void *__ptr;
  
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_badGlobal = 1;
  __ptr = (void *)CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_badSource(0);
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_goodG2B1Global = 0;
  __ptr = (void *)CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_goodG2B1Source(0);
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_goodG2B2Global = 1;
  __ptr = (void *)CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_goodG2B2Source(0);
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68b_badSink(void)

{
  void *__ptr;
  
  __ptr = CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_badData;
  printStructLine(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_badData);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68b_goodG2BSink(void)

{
  void *__ptr;
  
  __ptr = CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_goodG2BData;
  printStructLine(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_goodG2BData);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_bad(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(8);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(8);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7ffffffb;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7ffffffb;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7ffffffb;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_15_good(void)

{
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


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_bad(void)

{
  int iVar1;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  else {
    printLine("Benign, fixed string");
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 0x7ffffffb;
    printLongLongLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x004031f1) */

void goodG2B1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 0x7ffffffb;
    printLongLongLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 0x7ffffffb;
    printLongLongLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65b_badSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65b_goodG2BSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 0x7e444ecd0d33972b;
    printDoubleLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00403395) */

void goodG2B1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 0x7e444ecd0d33972b;
    printDoubleLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 0x7e444ecd0d33972b;
    printDoubleLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7e444ecd0d33972b;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7e444ecd0d33972b;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_31_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52c_badSink(undefined8 *puParm1)

{
  printDoubleLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52c_goodG2BSink(undefined8 *puParm1)

{
  printDoubleLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54d_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54e_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54d_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54e_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65b_badSink(undefined8 *puParm1)

{
  printDoubleLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65b_goodG2BSink(undefined8 *puParm1)

{
  printDoubleLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_bad(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticFalse == 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_badSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void goodG2B(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_41_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_bad(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67b_badSink(puVar1);
  return;
}


void goodG2B(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67b_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_67_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_bad(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52c_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52c_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_bad(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67b_badSink(puVar1);
  return;
}


void goodG2B(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67b_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63b_badSink(void **ppvParm1)

{
  void *__ptr;
  
  __ptr = *ppvParm1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63b_goodG2BSink(void **ppvParm1)

{
  void *__ptr;
  
  __ptr = *ppvParm1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_badData = puVar1;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_goodG2BData = puVar1;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68b_goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_68_good(void)

{
  goodG2B();
  return;
}


undefined8 * CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_badSource(undefined8 *puParm1)

{
  undefined8 *local_10;
  
  local_10 = puParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_badGlobal != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  return local_10;
}


undefined8 *
CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_goodG2B1Source(undefined8 *puParm1)

{
  undefined8 *local_10;
  
  if (CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_goodG2B1Global == 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  else {
    printLine("Benign, fixed string");
    local_10 = puParm1;
  }
  return local_10;
}


undefined8 *
CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_goodG2B2Source(undefined8 *puParm1)

{
  undefined8 *local_10;
  
  local_10 = puParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_goodG2B2Global != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  return local_10;
}


undefined8 * CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_badSource(undefined8 *puParm1)

{
  undefined8 *local_10;
  
  local_10 = puParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_badGlobal != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  return local_10;
}


undefined8 * CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_goodG2B1Source(undefined8 *puParm1)

{
  undefined8 *local_10;
  
  if (CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_goodG2B1Global == 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  else {
    printLine("Benign, fixed string");
    local_10 = puParm1;
  }
  return local_10;
}


undefined8 * CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_goodG2B2Source(undefined8 *puParm1)

{
  undefined8 *local_10;
  
  local_10 = puParm1;
  if (CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_goodG2B2Global != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66b_badSink(long lParm1)

{
  void *__ptr;
  
  __ptr = *(void **)(lParm1 + 0x10);
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66b_goodG2BSink(long lParm1)

{
  void *__ptr;
  
  __ptr = *(void **)(lParm1 + 0x10);
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53d_badSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53d_goodG2BSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65b_badSink(puVar1,uParm2,puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65b_goodG2BSink(puVar1,uParm2,puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_65_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65b_badSink(puVar1,uParm2,puVar1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65b_goodG2BSink(puVar1,uParm2,puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_65_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7e444ecd0d33972b;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7e444ecd0d33972b;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_01_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7e444ecd0d33972b;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7e444ecd0d33972b;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7e444ecd0d33972b;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53b_badSink(puVar1);
  return;
}


void goodG2B(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53b_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  undefined8 *__ptr;
  
  __ptr = CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_badData;
  printLongLongLine(*CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_badData);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_bad(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_badData = puVar1;
  badSink();
  return;
}


void goodG2BSink(void)

{
  undefined8 *__ptr;
  
  __ptr = CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_goodG2BData;
  printLongLongLine(*CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_goodG2BData);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_goodG2BData = puVar1;
  goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_45_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 1;
  __ptr[1] = 2;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 1;
  __ptr[1] = 2;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_18_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_bad(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52b_badSink(puVar1);
  return;
}


void goodG2B(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52b_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_bad(void)

{
  undefined8 *__ptr;
  
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_badGlobal = 1;
  __ptr = (undefined8 *)CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_badSource(0);
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  undefined8 *__ptr;
  
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_goodG2B1Global = 0;
  __ptr = (undefined8 *)CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_goodG2B1Source(0);
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  undefined8 *__ptr;
  
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_goodG2B2Global = 1;
  __ptr = (undefined8 *)CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_goodG2B2Source(0);
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68b_badSink(void)

{
  undefined8 *__ptr;
  
  __ptr = CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_badData;
  printDoubleLine(*CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_badData);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68b_goodG2BSink(void)

{
  undefined8 *__ptr;
  
  __ptr = CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_goodG2BData;
  printDoubleLine(*CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_goodG2BData);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54e_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54e_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_bad(void)

{
  undefined local_38 [16];
  undefined4 *local_28;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_28 = (undefined4 *)malloc(8);
  if (local_28 == (undefined4 *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_28 = 1;
  local_28[1] = 2;
  local_10 = local_28;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  undefined4 *local_28;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_28 = (undefined4 *)malloc(8);
  if (local_28 == (undefined4 *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_28 = 1;
  local_28[1] = 2;
  local_10 = local_28;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66b_goodG2BSink(local_38);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_66_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54c_goodG2BSink(uParm1);
  return;
}


undefined8 * badSource(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  return puVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)badSource(0);
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


undefined8 * goodG2BSource(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  return puVar1;
}


void goodG2B(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)goodG2BSource(0);
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_42_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54d_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54e_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54d_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54e_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64b_badSink(void **ppvParm1)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)*ppvParm1;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_64b_goodG2BSink(void **ppvParm1)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)*ppvParm1;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54d_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54e_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54d_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54e_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_bad(void)

{
  int iVar1;
  undefined4 *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  else {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  undefined4 *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  else {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_12_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_bad(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFalse == 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  else {
    printLine("Benign, fixed string");
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_badSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_bad(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_badSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_goodG2BSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void goodG2B(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_41_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_bad(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFalse == 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  else {
    printLine("Benign, fixed string");
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_badSink(undefined8 *puParm1)

{
  printDoubleLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_bad(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_badSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_goodG2BSink(undefined8 *puParm1)

{
  printDoubleLine(*puParm1);
  free(puParm1);
  return;
}


void goodG2B(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_41_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68b_badSink(void)

{
  undefined8 *__ptr;
  
  __ptr = CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_badData;
  printLongLongLine(*CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_badData);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68b_goodG2BSink(void)

{
  undefined8 *__ptr;
  
  __ptr = CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_goodG2BData;
  printLongLongLine(*CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_goodG2BData);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_bad(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  else {
    printLine("Benign, fixed string");
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52c_badSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52c_goodG2BSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7ffffffb;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7ffffffb;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_01_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63b_badSink(void **ppvParm1)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)*ppvParm1;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63b_goodG2BSink(void **ppvParm1)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)*ppvParm1;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_bad(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  else {
    printLine("Benign, fixed string");
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63b_badSink(void **ppvParm1)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)*ppvParm1;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63b_goodG2BSink(void **ppvParm1)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)*ppvParm1;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7ffffffb;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7ffffffb;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_34_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_bad(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_badData = puVar1;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_goodG2BData = puVar1;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68b_goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_68_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_bad(void)

{
  undefined4 *local_18;
  int local_c;
  
  local_18 = (undefined4 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      printStructLine(local_18);
      free(local_18);
      return;
    }
    local_18 = (undefined4 *)malloc(8);
    if (local_18 == (undefined4 *)0x0) break;
    *local_18 = 1;
    local_18[1] = 2;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  undefined4 *local_18;
  int local_c;
  
  local_18 = (undefined4 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      printStructLine(local_18);
      free(local_18);
      return;
    }
    local_18 = (undefined4 *)malloc(8);
    if (local_18 == (undefined4 *)0x0) break;
    *local_18 = 1;
    local_18[1] = 2;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_17_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7e444ecd0d33972b;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7e444ecd0d33972b;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_34_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66b_badSink(long lParm1)

{
  undefined8 *__ptr;
  
  __ptr = *(undefined8 **)(lParm1 + 0x10);
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66b_goodG2BSink(long lParm1)

{
  undefined8 *__ptr;
  
  __ptr = *(undefined8 **)(lParm1 + 0x10);
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_bad(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51b_badSink(puVar1);
  return;
}


void goodG2B(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51b_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_bad(void)

{
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = 0;
  local_20 = (undefined8 *)0x0;
  local_20 = (undefined8 *)malloc(8);
  if (local_20 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 0x7e444ecd0d33972b;
  *(undefined8 **)local_10 = local_20;
  local_28 = (undefined8 *)*local_18;
  printDoubleLine(*local_28);
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = 0;
  local_20 = (undefined8 *)0x0;
  local_20 = (undefined8 *)malloc(8);
  if (local_20 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 0x7e444ecd0d33972b;
  *(undefined8 **)local_10 = local_20;
  local_28 = (undefined8 *)*local_18;
  printDoubleLine(*local_28);
  free(local_28);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_32_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66b_badSink(long lParm1)

{
  undefined8 *__ptr;
  
  __ptr = *(undefined8 **)(lParm1 + 0x10);
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66b_goodG2BSink(long lParm1)

{
  undefined8 *__ptr;
  
  __ptr = *(undefined8 **)(lParm1 + 0x10);
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_bad(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 1;
  __ptr[1] = 2;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 1;
  __ptr[1] = 2;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 1;
  __ptr[1] = 2;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52b_badSink(puVar1);
  return;
}


void goodG2B(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52b_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_52_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51b_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51b_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_bad(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53b_badSink(puVar1);
  return;
}


void goodG2B(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53b_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53_good(void)

{
  goodG2B();
  return;
}


undefined8 * badSource(undefined8 *puParm1)

{
  undefined8 *local_10;
  
  local_10 = puParm1;
  if (badStatic != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_bad(void)

{
  undefined8 *__ptr;
  
  badStatic = 1;
  __ptr = (undefined8 *)badSource(0);
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


undefined8 * goodG2B1Source(undefined8 *puParm1)

{
  undefined8 *local_10;
  
  if (goodG2B1Static == 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  else {
    printLine("Benign, fixed string");
    local_10 = puParm1;
  }
  return local_10;
}


void goodG2B1(void)

{
  undefined8 *__ptr;
  
  goodG2B1Static = 0;
  __ptr = (undefined8 *)goodG2B1Source(0);
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


undefined8 * goodG2B2Source(undefined8 *puParm1)

{
  undefined8 *local_10;
  
  local_10 = puParm1;
  if (goodG2B2Static != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  return local_10;
}


void goodG2B2(void)

{
  undefined8 *__ptr;
  
  goodG2B2Static = 1;
  __ptr = (undefined8 *)goodG2B2Source(0);
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7ffffffb;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7ffffffb;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7ffffffb;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61b_badSource(0);
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61b_goodG2BSource(0);
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_bad(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(8);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(8);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_63_good(void)

{
  goodG2B();
  return;
}


undefined8 * badSource(undefined8 *puParm1)

{
  undefined8 *local_10;
  
  local_10 = puParm1;
  if (badStatic != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_bad(void)

{
  undefined8 *__ptr;
  
  badStatic = 1;
  __ptr = (undefined8 *)badSource(0);
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


undefined8 * goodG2B1Source(undefined8 *puParm1)

{
  undefined8 *local_10;
  
  if (goodG2B1Static == 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  else {
    printLine("Benign, fixed string");
    local_10 = puParm1;
  }
  return local_10;
}


void goodG2B1(void)

{
  undefined8 *__ptr;
  
  goodG2B1Static = 0;
  __ptr = (undefined8 *)goodG2B1Source(0);
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


undefined8 * goodG2B2Source(undefined8 *puParm1)

{
  undefined8 *local_10;
  
  local_10 = puParm1;
  if (goodG2B2Static != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  return local_10;
}


void goodG2B2(void)

{
  undefined8 *__ptr;
  
  goodG2B2Static = 1;
  __ptr = (undefined8 *)goodG2B2Source(0);
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7e444ecd0d33972b;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7e444ecd0d33972b;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7e444ecd0d33972b;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_bad(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalFalse == 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_bad(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(8);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_10 = (undefined8 *)malloc(8);
  if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_63_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 2;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00406bc0) */

void goodG2B1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 2;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 2;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_bad(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7ffffffb;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7ffffffb;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_18_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7e444ecd0d33972b;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7e444ecd0d33972b;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_18_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_bad(void)

{
  undefined local_38 [16];
  undefined8 *local_28;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_28 = (undefined8 *)malloc(8);
  if (local_28 == (undefined8 *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_28 = 0x7ffffffb;
  local_10 = local_28;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  undefined8 *local_28;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_28 = (undefined8 *)malloc(8);
  if (local_28 == (undefined8 *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_28 = 0x7ffffffb;
  local_10 = local_28;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66b_goodG2BSink(local_38);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_66_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_bad(void)

{
  undefined local_38 [16];
  undefined8 *local_28;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_28 = (undefined8 *)malloc(8);
  if (local_28 == (undefined8 *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_28 = 0x7e444ecd0d33972b;
  local_10 = local_28;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66b_badSink(local_38);
  return;
}


void goodG2B(void)

{
  undefined local_38 [16];
  undefined8 *local_28;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  local_28 = (undefined8 *)malloc(8);
  if (local_28 == (undefined8 *)0x0) {
    local_10 = local_28;
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_28 = 0x7e444ecd0d33972b;
  local_10 = local_28;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66b_goodG2BSink(local_38);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_66_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 1;
  __ptr[1] = 2;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 1;
  __ptr[1] = 2;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_01_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53d_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_53d_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51b_badSink(puVar1);
  return;
}


void goodG2B(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51b_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_51_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_bad(void)

{
  int iVar1;
  undefined8 *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  else {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  undefined8 *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  else {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_12_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_52c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_bad(void)

{
  int iVar1;
  undefined8 *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  else {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  undefined8 *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  else {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_12_good(void)

{
  goodG2B();
  return;
}


undefined4 * CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61b_badSource(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  return puVar1;
}


undefined4 * CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61b_goodG2BSource(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  return puVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_bad(void)

{
  void *__ptr;
  
  __ptr = (void *)CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61b_badSource(0);
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  
  __ptr = (void *)CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61b_goodG2BSource(0);
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_61_good(void)

{
  goodG2B();
  return;
}


void badSink(undefined8 *puParm1)

{
  printDoubleLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  badSink(puVar1,uParm2,puVar1);
  return;
}


void goodG2BSink(undefined8 *puParm1)

{
  printDoubleLine(*puParm1);
  free(puParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  goodG2BSink(puVar1,uParm2,puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_44_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_bad(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  else {
    printLine("Benign, fixed string");
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  void *__ptr;
  
  __ptr = CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_badData;
  printStructLine(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_badData);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_badData = puVar1;
  badSink();
  return;
}


void goodG2BSink(void)

{
  void *__ptr;
  
  __ptr = CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_goodG2BData;
  printStructLine(CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_goodG2BData);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_goodG2BData = puVar1;
  goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_45_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_bad(void)

{
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = 0;
  local_20 = (undefined8 *)0x0;
  local_20 = (undefined8 *)malloc(8);
  if (local_20 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 0x7ffffffb;
  *(undefined8 **)local_10 = local_20;
  local_28 = (undefined8 *)*local_18;
  printLongLongLine(*local_28);
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = 0;
  local_20 = (undefined8 *)0x0;
  local_20 = (undefined8 *)malloc(8);
  if (local_20 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 0x7ffffffb;
  *(undefined8 **)local_10 = local_20;
  local_28 = (undefined8 *)*local_18;
  printLongLongLine(*local_28);
  free(local_28);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_32_good(void)

{
  goodG2B();
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


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_bad(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_bad(void)

{
  undefined8 *local_18;
  int local_c;
  
  local_18 = (undefined8 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      printLongLongLine(*local_18);
      free(local_18);
      return;
    }
    local_18 = (undefined8 *)malloc(8);
    if (local_18 == (undefined8 *)0x0) break;
    *local_18 = 0x7ffffffb;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  undefined8 *local_18;
  int local_c;
  
  local_18 = (undefined8 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      printLongLongLine(*local_18);
      free(local_18);
      return;
    }
    local_18 = (undefined8 *)malloc(8);
    if (local_18 == (undefined8 *)0x0) break;
    *local_18 = 0x7ffffffb;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_17_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_bad(void)

{
  undefined8 *local_18;
  int local_c;
  
  local_18 = (undefined8 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      printDoubleLine(*local_18);
      free(local_18);
      return;
    }
    local_18 = (undefined8 *)malloc(8);
    if (local_18 == (undefined8 *)0x0) break;
    *local_18 = 0x7e444ecd0d33972b;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B(void)

{
  undefined8 *local_18;
  int local_c;
  
  local_18 = (undefined8 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      printDoubleLine(*local_18);
      free(local_18);
      return;
    }
    local_18 = (undefined8 *)malloc(8);
    if (local_18 == (undefined8 *)0x0) break;
    *local_18 = 0x7e444ecd0d33972b;
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_17_good(void)

{
  goodG2B();
  return;
}


void badSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  badSink(puVar1,uParm2,puVar1);
  return;
}


void goodG2BSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  goodG2BSink(puVar1,uParm2,puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_44_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_bad(void)

{
  int iVar1;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  else {
    printLine("Benign, fixed string");
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7ffffffb;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7ffffffb;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7ffffffb;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_bad(void)

{
  int iVar1;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  else {
    printLine("Benign, fixed string");
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7e444ecd0d33972b;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7e444ecd0d33972b;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7e444ecd0d33972b;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51b_badSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_51b_goodG2BSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_bad(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52b_badSink(puVar1);
  return;
}


void goodG2B(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52b_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_52_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51b_badSink(undefined8 *puParm1)

{
  printDoubleLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51b_goodG2BSink(undefined8 *puParm1)

{
  printDoubleLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7ffffffb;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7ffffffb;
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_16_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7e444ecd0d33972b;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 0x7e444ecd0d33972b;
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_16_good(void)

{
  goodG2B();
  return;
}


undefined8 * CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61b_badSource(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  return puVar1;
}


undefined8 * CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_61b_goodG2BSource(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  return puVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_bad(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFalse == 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  else {
    printLine("Benign, fixed string");
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


undefined8 * CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61b_badSource(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  return puVar1;
}


undefined8 * CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61b_goodG2BSource(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  return puVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_bad(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFalse == 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  else {
    printLine("Benign, fixed string");
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54b_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54c_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54b_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54c_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54c_badSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54d_badSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54c_goodG2BSink(undefined8 uParm1)

{
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54d_goodG2BSink(uParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_bad(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_bad(void)

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
  local_20 = (undefined4 *)malloc(8);
  if (local_20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 1;
  local_20[1] = 2;
  *(undefined4 **)local_10 = local_20;
  local_28 = *local_18;
  printStructLine(local_28);
  free(local_28);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

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
  local_20 = (undefined4 *)malloc(8);
  if (local_20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_20 = 1;
  local_20[1] = 2;
  *(undefined4 **)local_10 = local_20;
  local_28 = *local_18;
  printStructLine(local_28);
  free(local_28);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_32_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_bad(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53b_badSink(puVar1);
  return;
}


void goodG2B(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53b_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_53_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 1;
  __ptr[1] = 2;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 1;
  __ptr[1] = 2;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_34_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54e_badSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54e_goodG2BSink(undefined8 *puParm1)

{
  printLongLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_bad(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  else {
    printLine("Benign, fixed string");
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61b_badSource(0);
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61b_goodG2BSource(0);
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_61_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67b_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_67b_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_bad(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_badData = puVar1;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68b_badSink();
  return;
}


void goodG2B(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_goodG2BData = puVar1;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68b_goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_68_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53d_badSink(undefined8 *puParm1)

{
  printDoubleLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_53d_goodG2BSink(undefined8 *puParm1)

{
  printDoubleLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_bad(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54b_badSink(puVar1);
  return;
}


void goodG2B(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54b_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_54_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_bad(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)malloc(8);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 1;
  local_10[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)malloc(8);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 1;
  local_10[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_64_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  undefined8 *__ptr;
  
  __ptr = CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_badData;
  printDoubleLine(*CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_badData);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_bad(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_badData = puVar1;
  badSink();
  return;
}


void goodG2BSink(void)

{
  undefined8 *__ptr;
  
  __ptr = CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_goodG2BData;
  printDoubleLine(*CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_goodG2BData);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_goodG2BData = puVar1;
  goodG2BSink();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_45_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_bad(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  else {
    printLine("Benign, fixed string");
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7ffffffb;
  }
  printLongLongLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_07_good(void)

{
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


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_bad(void)

{
  int iVar1;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  else {
    printLine("Benign, fixed string");
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(8);
    if (local_10 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 0x7e444ecd0d33972b;
  }
  printDoubleLine(*local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_bad(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54b_badSink(puVar1);
  return;
}


void goodG2B(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7ffffffb;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54b_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_54_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 2;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00409b10) */

void goodG2B1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 2;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 2;
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


undefined4 * badSource(undefined4 *puParm1)

{
  undefined4 *local_10;
  
  local_10 = puParm1;
  if (badStatic != 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  return local_10;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_bad(void)

{
  void *__ptr;
  
  badStatic = 1;
  __ptr = (void *)badSource(0);
  printStructLine(__ptr);
  free(__ptr);
  return;
}


undefined4 * goodG2B1Source(undefined4 *puParm1)

{
  undefined4 *local_10;
  
  if (goodG2B1Static == 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  else {
    printLine("Benign, fixed string");
    local_10 = puParm1;
  }
  return local_10;
}


void goodG2B1(void)

{
  void *__ptr;
  
  goodG2B1Static = 0;
  __ptr = (void *)goodG2B1Source(0);
  printStructLine(__ptr);
  free(__ptr);
  return;
}


undefined4 * goodG2B2Source(undefined4 *puParm1)

{
  undefined4 *local_10;
  
  local_10 = puParm1;
  if (goodG2B2Static != 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  return local_10;
}


void goodG2B2(void)

{
  void *__ptr;
  
  goodG2B2Static = 1;
  __ptr = (void *)goodG2B2Source(0);
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_21_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 1;
  __ptr[1] = 2;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 1;
  __ptr[1] = 2;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 1;
  __ptr[1] = 2;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 0x7ffffffb;
    printLongLongLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


/* WARNING: Removing unreachable block (ram,0x00409f7c) */

void goodG2B1(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 0x7ffffffb;
    printLongLongLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void goodG2B2(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)malloc(8);
  if (__ptr != (undefined8 *)0x0) {
    *__ptr = 0x7ffffffb;
    printLongLongLine(*__ptr);
    free(__ptr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  exit(-1);
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_bad(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 1;
  __ptr[1] = 2;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  undefined4 *__ptr;
  
  __ptr = (undefined4 *)malloc(8);
  if (__ptr == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *__ptr = 1;
  __ptr[1] = 2;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_16_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_bad(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)malloc(8);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 1;
  local_10[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63b_badSink(&local_10);
  return;
}


void goodG2B(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  local_10 = (undefined4 *)malloc(8);
  if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *local_10 = 1;
  local_10[1] = 2;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63b_goodG2BSink(&local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_63_good(void)

{
  goodG2B();
  return;
}


undefined8 * badSource(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  return puVar1;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_bad(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)badSource(0);
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


undefined8 * goodG2BSource(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  return puVar1;
}


void goodG2B(void)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)goodG2BSource(0);
  printDoubleLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_42_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54e_badSink(undefined8 *puParm1)

{
  printDoubleLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_54e_goodG2BSink(undefined8 *puParm1)

{
  printDoubleLine(*puParm1);
  free(puParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_bad(void)

{
  undefined8 *__ptr;
  
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_badGlobal = 1;
  __ptr = (undefined8 *)CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_badSource(0);
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B1(void)

{
  undefined8 *__ptr;
  
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_goodG2B1Global = 0;
  __ptr = (undefined8 *)CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_goodG2B1Source(0);
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  undefined8 *__ptr;
  
  CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_goodG2B2Global = 1;
  __ptr = (undefined8 *)CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_goodG2B2Source(0);
  printLongLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_int64_t_22_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_bad(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51b_badSink(puVar1);
  return;
}


void goodG2B(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 0x7e444ecd0d33972b;
  CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51b_goodG2BSink(puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_double_51_good(void)

{
  goodG2B();
  return;
}


void badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  badSink(puVar1,uParm2,puVar1);
  return;
}


void goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  goodG2BSink(puVar1,uParm2,puVar1);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_44_good(void)

{
  goodG2B();
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_bad(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  else {
    printLine("Benign, fixed string");
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined4 *)malloc(8);
    if (local_10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    *local_10 = 1;
    local_10[1] = 2;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE122_Heap_Based_Buffer_Overflow__sizeof_struct_09_good(void)

{
  goodG2B1();
  goodG2B2();
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
  printf((char *)(double)fParm1,&DAT_0040f1cd);
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
  printf(pcParm1,&DAT_0040f1ea);
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
    __isoc99_sscanf(lVar1,&DAT_0040f1f8,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_0040f200,&local_14);
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

