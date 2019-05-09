
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___0061cff8;
  if (PTR___gmon_start___0061cff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400900(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_0061d010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0061d018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0061d020)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_0061d028)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0061d030)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0061d038)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_0061d040)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0061d048)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_0061d050)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0061d058)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0061d060)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_0061d068)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0061d070)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_0061d078)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_0061d080)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_0061d088)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_0061d090)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0061d098)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_0061d0a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_0061d0a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0061d0b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0061d0b8)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___0061cff8)();
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
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_08_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_08_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_54_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_54_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_45_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_45_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_67_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_67_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_12_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_12_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_18_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_18_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_16_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_16_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_44_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_44_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_12_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_12_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_41_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_41_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_66_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_66_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_04_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_04_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_14_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_14_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_13_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_13_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_45_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_45_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_08_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_08_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_03_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_03_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_41_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_41_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_04_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_04_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_32_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_32_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_67_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_67_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_44_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_44_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_03_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_03_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_04_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_04_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_17_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_17_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_07_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_07_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_44_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_44_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_13_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_13_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_06_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_06_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_66_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_66_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_31_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_31_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_17_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_17_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_10_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_10_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_31_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_31_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_64_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_64_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_03_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_03_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_11_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_11_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_01_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_01_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_10_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_10_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_14_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_14_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_18_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_18_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_11_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_11_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_02_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_02_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_63_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_63_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_11_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_11_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_44_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_44_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_14_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_14_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_05_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_05_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_53_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_53_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_09_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_09_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_06_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_06_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_12_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_12_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_01_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_01_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_63_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_63_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_51_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_51_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_14_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_14_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_07_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_07_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_15_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_15_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_68_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_68_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_31_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_31_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_18_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_18_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_34_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_34_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_32_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_32_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_12_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_12_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_52_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_52_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_17_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_17_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_15_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_15_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_05_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_05_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_09_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_09_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_02_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_02_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_16_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_16_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_34_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_34_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_63_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_63_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_53_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_53_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_51_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_51_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_52_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_52_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_08_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_08_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_52_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_52_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_67_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_67_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_53_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_53_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_66_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_66_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_16_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_16_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_67_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_67_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_15_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_15_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_13_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_13_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_68_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_68_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_45_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_45_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_66_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_66_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_68_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_68_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_52_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_52_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_04_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_04_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_45_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_45_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_06_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_06_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_65_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_65_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_32_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_32_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_18_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_18_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_03_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_03_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_05_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_05_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_31_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_31_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_64_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_64_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_10_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_10_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_64_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_64_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_10_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_10_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_07_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_07_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_08_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_08_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_51_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_51_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_11_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_11_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_41_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_41_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_15_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_15_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_65_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_65_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_09_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_09_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_54_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_54_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_02_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_02_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_02_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_02_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_01_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_01_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_01_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_01_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_05_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_05_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_13_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_13_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_32_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_32_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_17_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_17_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_41_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_41_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_51_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_51_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_34_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_34_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_09_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_09_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_64_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_64_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_34_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_34_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_16_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_16_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_68_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_68_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_07_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_07_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_65_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_65_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_63_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_63_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_65_good();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_65_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_06_good();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_06_good();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_08_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_08_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_54_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_54_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_45_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_45_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_67_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_67_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_12_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_12_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_18_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_18_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_16_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_16_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_44_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_44_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_12_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_12_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_41_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_41_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_66_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_66_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_04_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_04_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_14_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_14_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_13_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_13_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_45_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_45_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_08_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_08_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_03_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_03_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_41_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_41_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_04_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_04_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_32_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_32_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_67_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_67_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_44_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_44_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_03_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_03_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_04_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_04_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_17_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_17_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_07_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_07_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_44_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_44_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_13_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_13_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_06_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_06_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_66_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_66_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_31_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_31_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_17_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_17_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_10_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_10_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_31_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_31_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_64_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_64_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_03_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_03_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_11_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_11_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_01_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_01_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_10_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_10_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_14_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_14_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_18_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_18_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_11_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_11_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_02_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_02_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_63_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_63_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_11_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_11_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_44_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_44_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_14_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_14_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_05_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_05_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_53_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_53_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_09_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_09_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_06_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_06_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_12_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_12_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_01_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_01_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_63_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_63_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_51_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_51_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_14_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_14_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_07_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_07_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_15_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_15_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_68_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_68_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_31_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_31_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_18_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_18_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_34_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_34_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_32_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_32_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_12_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_12_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_52_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_52_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_17_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_17_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_15_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_15_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_05_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_05_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_09_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_09_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_02_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_02_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_16_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_16_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_34_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_34_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_63_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_63_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_53_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_53_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_51_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_51_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_52_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_52_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_08_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_08_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_52_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_52_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_67_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_67_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_53_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_53_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_66_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_66_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_16_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_16_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_67_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_67_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_15_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_15_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_13_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_13_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_68_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_68_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_45_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_45_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_66_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_66_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_68_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_68_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_52_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_52_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_04_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_04_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_45_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_45_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_06_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_06_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_65_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_65_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_32_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_32_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_18_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_18_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_03_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_03_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_05_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_05_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_31_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_31_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_64_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_64_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_10_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_10_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_64_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_64_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_10_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_10_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_07_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_07_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_08_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_08_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_51_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_51_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_11_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_11_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_41_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_41_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_15_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_15_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_65_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_65_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_09_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_09_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_54_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_54_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_02_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_02_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_02_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_02_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_01_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_01_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_01_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_01_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_05_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_05_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_13_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_13_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_32_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_32_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_17_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_17_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_41_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_41_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_51_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_51_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_34_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_34_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_09_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_09_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_64_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_64_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_34_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_34_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_16_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_16_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_68_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_68_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_07_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_07_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_declare_65_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_65_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_static_63_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_63_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_65_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_65_bad();
  printLine("Calling CWE590_Free_Memory_Not_on_Heap__free_long_static_06_bad();");
  CWE590_Free_Memory_Not_on_Heap__free_long_static_06_bad();
  return 0;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54b_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54c_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54b_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54c_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_52b_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_long_static_52c_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_52b_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_long_static_52c_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_14_bad(void)

{
  ulong local_18;
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0x0;
  if (globalFive == 5) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined8 *)(dataBuffer_3554 + local_18 * 8) = 5;
      local_18 = local_18 + 1;
    }
    local_10 = dataBuffer_3554;
  }
  printLongLine(*(undefined8 *)local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = 5;
      local_18 = local_18 + 1;
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  printLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = 5;
      local_18 = local_18 + 1;
    }
  }
  printLongLine(*local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_34_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  long lStack64;
  undefined4 *local_38;
  undefined4 auStack48 [2];
  undefined4 *local_28;
  undefined4 *local_20;
  undefined4 *local_18;
  ulong local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_38 = auStack48 + lVar2 * 0x3ffffffffffffffc;
  local_10 = 0;
  while (local_10 < 100) {
    local_38[local_10 * 2] = 1;
    lVar3 = local_10 * 8;
    local_38[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  (&lStack64)[lVar2 * 0x1ffffffffffffffe] = 0x4023b1;
  local_28 = local_38;
  local_20 = local_38;
  local_18 = local_38;
  printStructLine(local_38,uParm2,lVar3);
  (&lStack64)[lVar2 * 0x1ffffffffffffffe] = 0x4023bd;
  free(local_28,*(undefined *)(&lStack64 + lVar2 * 0x1ffffffffffffffe));
  return;
}


void goodG2B(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_34_good(void)

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


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_08_bad(void)

{
  int iVar1;
  ulong local_18;
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)(dataBuffer_3558 + local_18 * 8) = 1;
      *(undefined4 *)(dataBuffer_3558 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    local_10 = dataBuffer_3558;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Type propagation algorithm not settling */

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *apuStack48 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(local_20 + local_10) = 1;
    lVar3 = local_10 * 8;
    *(undefined4 *)((long)local_20 + lVar3 + 4) = 1;
    local_10 = local_10 + 1;
  }
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40273a;
  local_18 = local_20;
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54b_badSink(local_20,uParm2,lVar3);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54b_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_05_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticTrue != 0) {
    local_18 = 0;
    while (local_18 < 100) {
      local_338[local_18 * 2] = 1;
      local_338[local_18 * 2 + 1] = 1;
      local_18 = local_18 + 1;
    }
    local_10 = local_338;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFalse == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_41_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_41_bad(void)

{
  undefined4 local_338 [200];
  undefined4 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 1;
    local_338[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  local_18 = local_338;
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_41_badSink(local_18);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_41_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_41_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_41_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_53b_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_53c_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_53b_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_53c_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_52c_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_52c_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_52_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3556 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_long_static_52b_badSink(dataBuffer_3556);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)((long)pvVar1 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_long_static_52b_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_52_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_54b_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_54c_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_54b_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_54c_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_51b_badSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_51b_goodG2BSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_68_bad(void)

{
  undefined4 local_338 [200];
  undefined4 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 1;
    local_338[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_68_badData = local_338;
  local_18 = CWE590_Free_Memory_Not_on_Heap__free_struct_declare_68_badData;
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_68b_badSink();
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_68_goodG2BData = pvVar1;
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_68b_goodG2BSink();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_68_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_34_bad(void)

{
  undefined4 local_348 [200];
  undefined4 *local_28;
  undefined4 *local_20;
  undefined4 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 1;
    local_348[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  local_28 = local_348;
  local_20 = local_28;
  local_18 = local_28;
  printStructLine(local_28);
  free(local_20);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_34_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_16_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3554 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  printLongLine(dataBuffer_3554._0_8_);
  free(dataBuffer_3554);
  return;
}


void goodG2B(void)

{
  undefined8 *__ptr;
  ulong local_10;
  
  __ptr = (undefined8 *)malloc(800);
  if (__ptr == (undefined8 *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    __ptr[local_10] = 5;
    local_10 = local_10 + 1;
  }
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_16_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_66b_badSink(long lParm1)

{
  void *__ptr;
  
  __ptr = *(void **)(lParm1 + 0x10);
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_66b_goodG2BSink(long lParm1)

{
  void *__ptr;
  
  __ptr = *(void **)(lParm1 + 0x10);
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined *puStack48;
  undefined8 *local_28;
  undefined8 *local_20;
  code *local_18;
  ulong local_10;
  
  local_18 = badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_28 = &local_20 + lVar1 * 0x1ffffffffffffffe;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(local_28 + local_10) = 1;
    *(undefined4 *)((long)local_28 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  (&puStack48)[lVar1 * 0x1ffffffffffffffe] = 0x40319c;
  local_20 = local_28;
  badSink(local_28,uParm2,local_28);
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
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_44_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Type propagation algorithm not settling */

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_18_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *apuStack48 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(local_20 + local_10) = 1;
    lVar3 = local_10 * 8;
    *(undefined4 *)((long)local_20 + lVar3 + 4) = 1;
    local_10 = local_10 + 1;
  }
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x403319;
  local_18 = local_20;
  printStructLine(local_20,uParm2,lVar3);
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x403325;
  free(local_18,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  return;
}


void goodG2B(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_18_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53c_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53d_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53c_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53d_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_51_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3556 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_long_static_51b_badSink(dataBuffer_3556);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)((long)pvVar1 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_long_static_51b_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_51_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_54_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3556 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3556 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_54b_badSink(dataBuffer_3556);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_54b_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_54_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Type propagation algorithm not settling */

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_03_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *apuStack48 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(local_20 + local_10) = 1;
    lVar3 = local_10 * 8;
    *(undefined4 *)((long)local_20 + lVar3 + 4) = 1;
    local_10 = local_10 + 1;
  }
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x403690;
  local_18 = local_20;
  printStructLine(local_20,uParm2,lVar3);
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40369c;
  free(local_18,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  long lVar1;
  undefined *puStack48;
  undefined8 *local_28;
  undefined8 *local_20;
  code *local_18;
  ulong local_10;
  
  local_18 = CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_65b_badSink;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_28 = &local_20 + lVar1 * 0x1ffffffffffffffe;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(local_28 + local_10) = 1;
    *(undefined4 *)((long)local_28 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  (&puStack48)[lVar1 * 0x1ffffffffffffffe] = 0x4038ac;
  local_20 = local_28;
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_65b_badSink(local_28,uParm2,local_28);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_65b_goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_65_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54e_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54e_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_66_bad(void)

{
  undefined4 local_368 [200];
  undefined local_48 [16];
  undefined4 *local_38;
  undefined4 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_368[local_10 * 2] = 1;
    local_368[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  local_38 = local_368;
  local_18 = local_38;
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_66b_badSink(local_48);
  return;
}


void goodG2B(void)

{
  undefined local_48 [16];
  void *local_38;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_38 = malloc(800);
  if (local_38 == (void *)0x0) {
    local_20 = local_38;
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)local_38 + local_10 * 8) = 1;
    *(undefined4 *)((long)local_38 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  local_20 = local_38;
  local_18 = local_38;
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_66b_goodG2BSink(local_48);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_66_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Type propagation algorithm not settling */

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_15_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *apuStack48 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(local_20 + local_10) = 1;
    lVar3 = local_10 * 8;
    *(undefined4 *)((long)local_20 + lVar3 + 4) = 1;
    local_10 = local_10 + 1;
  }
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x403b67;
  local_18 = local_20;
  printStructLine(local_20,uParm2,lVar3);
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x403b73;
  free(local_18,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  undefined8 *__ptr;
  
  __ptr = CWE590_Free_Memory_Not_on_Heap__free_long_static_45_badData;
  printLongLine(*CWE590_Free_Memory_Not_on_Heap__free_long_static_45_badData);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_45_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3559 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_long_static_45_badData = dataBuffer_3559;
  badSink();
  return;
}


void goodG2BSink(void)

{
  undefined8 *__ptr;
  
  __ptr = CWE590_Free_Memory_Not_on_Heap__free_long_static_45_goodG2BData;
  printLongLine(*CWE590_Free_Memory_Not_on_Heap__free_long_static_45_goodG2BData);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)((long)pvVar1 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_long_static_45_goodG2BData = pvVar1;
  goodG2BSink();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_45_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_65b_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_65b_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_06_bad(void)

{
  ulong local_18;
  
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(dataBuffer_3555 + local_18 * 8) = 5;
    local_18 = local_18 + 1;
  }
  printLongLine(dataBuffer_3555._0_8_);
  free(dataBuffer_3555);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00403ef1) */

void goodG2B1(void)

{
  undefined8 *__ptr;
  ulong local_18;
  
  __ptr = (undefined8 *)malloc(800);
  if (__ptr != (undefined8 *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      __ptr[local_18] = 5;
      local_18 = local_18 + 1;
    }
    printLongLine(*__ptr);
    free(__ptr);
    return;
  }
  printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B2(void)

{
  undefined8 *__ptr;
  ulong local_18;
  
  __ptr = (undefined8 *)malloc(800);
  if (__ptr != (undefined8 *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      __ptr[local_18] = 5;
      local_18 = local_18 + 1;
    }
    printLongLine(*__ptr);
    free(__ptr);
    return;
  }
  printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_52b_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_52c_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_52b_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_52c_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_68b_badSink(void)

{
  void *__ptr;
  
  __ptr = CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_68_badData;
  printStructLine(CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_68_badData);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_68b_goodG2BSink(void)

{
  void *__ptr;
  
  __ptr = CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_68_goodG2BData;
  printStructLine(CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_68_goodG2BData);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_53c_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_53d_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_53c_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_53d_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_63_bad(void)

{
  undefined4 local_338 [200];
  undefined4 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 1;
    local_338[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  local_18 = local_338;
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_63b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)local_18 + local_10 * 8) = 1;
    *(undefined4 *)((long)local_18 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  local_20 = local_18;
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_63b_goodG2BSink(&local_20);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_63_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_18_bad(void)

{
  undefined4 local_338 [200];
  undefined4 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 1;
    local_338[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  local_18 = local_338;
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_18_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_64_bad(void)

{
  undefined1 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3556 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3556 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  local_18 = dataBuffer_3556;
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_64b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)local_18 + local_10 * 8) = 1;
    *(undefined4 *)((long)local_18 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  local_20 = local_18;
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_64b_goodG2BSink(&local_20);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_64_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_07_bad(void)

{
  ulong local_18;
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0x0;
  if (staticFive == 5) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)(dataBuffer_3555 + local_18 * 8) = 1;
      *(undefined4 *)(dataBuffer_3555 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    local_10 = dataBuffer_3555;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_63b_badSink(void **ppvParm1)

{
  void *__ptr;
  
  __ptr = *ppvParm1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_63b_goodG2BSink(void **ppvParm1)

{
  void *__ptr;
  
  __ptr = *ppvParm1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_64_bad(void)

{
  undefined1 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3556 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  local_18 = dataBuffer_3556;
  CWE590_Free_Memory_Not_on_Heap__free_long_static_64b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)((long)local_18 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  local_20 = local_18;
  CWE590_Free_Memory_Not_on_Heap__free_long_static_64b_goodG2BSink(&local_20);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_64_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_31_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3554 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3554 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(dataBuffer_3554);
  free(dataBuffer_3554);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_31_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_09_bad(void)

{
  ulong local_18;
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined8 *)(dataBuffer_3554 + local_18 * 8) = 5;
      local_18 = local_18 + 1;
    }
    local_10 = dataBuffer_3554;
  }
  printLongLine(*(undefined8 *)local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = 5;
      local_18 = local_18 + 1;
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  printLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = 5;
      local_18 = local_18 + 1;
    }
  }
  printLongLine(*local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_12_bad(void)

{
  int iVar1;
  undefined4 local_348 [200];
  undefined4 *local_28;
  ulong local_20;
  ulong local_18;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_28 = (undefined4 *)malloc(800);
    if (local_28 == (undefined4 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_10 = local_28, local_20 < 100) {
      local_28[local_20 * 2] = 1;
      local_28[local_20 * 2 + 1] = 1;
      local_20 = local_20 + 1;
    }
  }
  else {
    local_18 = 0;
    while (local_18 < 100) {
      local_348[local_18 * 2] = 1;
      local_348[local_18 * 2 + 1] = 1;
      local_18 = local_18 + 1;
    }
    local_10 = local_348;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_20 < 100) {
      *(undefined4 *)((long)local_10 + local_20 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_20 * 8 + 4) = 1;
      local_20 = local_20 + 1;
    }
  }
  else {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_12_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_67_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3560 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3560 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_67b_badSink(dataBuffer_3560);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_67b_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_67_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_32_bad(void)

{
  long lVar1;
  undefined8 auStack80 [2];
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  local_18 = (undefined8 *)&local_40;
  local_20 = (undefined8 *)&local_40;
  local_40 = 0;
  lVar1 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
  local_38 = (undefined8 *)(&local_40 + lVar1 * 0x1ffffffffffffffe);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(local_38 + local_10) = 1;
    *(undefined4 *)((long)local_38 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  auStack80[lVar1 * 0x1ffffffffffffffe] = 0x404e5c;
  local_30 = local_38;
  local_28 = local_38;
  printStructLine(local_38);
  auStack80[lVar1 * 0x1ffffffffffffffe] = 0x404e68;
  free(local_38,*(undefined *)(auStack80 + lVar1 * 0x1ffffffffffffffe));
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  void *local_40;
  void *local_38;
  void *local_30;
  void *local_28;
  void **local_20;
  void **local_18;
  ulong local_10;
  
  local_18 = &local_40;
  local_20 = &local_40;
  local_40 = (void *)0x0;
  local_28 = (void *)0x0;
  local_30 = malloc(800);
  if (local_30 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)local_30 + local_10 * 8) = 1;
    *(undefined4 *)((long)local_30 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  *local_18 = local_30;
  local_38 = *local_20;
  local_28 = local_30;
  printStructLine(local_38);
  free(local_38);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_32_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_17_bad(void)

{
  undefined4 local_348 [202];
  ulong local_20;
  undefined4 *local_18;
  int local_c;
  
  local_18 = (undefined4 *)0x0;
  local_c = 0;
  while (local_c < 1) {
    local_20 = 0;
    while (local_20 < 100) {
      local_348[local_20 * 2] = 1;
      local_348[local_20 * 2 + 1] = 1;
      local_20 = local_20 + 1;
    }
    local_18 = local_348;
    local_c = local_c + 1;
  }
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  ulong local_20;
  void *local_18;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      printStructLine(local_18);
      free(local_18);
      return;
    }
    local_18 = malloc(800);
    if (local_18 == (void *)0x0) break;
    local_20 = 0;
    while (local_20 < 100) {
      *(undefined4 *)((long)local_18 + local_20 * 8) = 1;
      *(undefined4 *)((long)local_18 + local_20 * 8 + 4) = 1;
      local_20 = local_20 + 1;
    }
    local_c = local_c + 1;
  }
  printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_17_good(void)

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


void CWE590_Free_Memory_Not_on_Heap__free_long_static_08_bad(void)

{
  int iVar1;
  ulong local_18;
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined8 *)(dataBuffer_3558 + local_18 * 8) = 5;
      local_18 = local_18 + 1;
    }
    local_10 = dataBuffer_3558;
  }
  printLongLine(*(undefined8 *)local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = 5;
      local_18 = local_18 + 1;
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  printLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = 5;
      local_18 = local_18 + 1;
    }
  }
  printLongLine(*local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_53_bad(void)

{
  undefined4 local_338 [200];
  undefined4 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 1;
    local_338[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  local_18 = local_338;
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_53b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_53b_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_53_good(void)

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


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 local_348 [202];
  undefined4 *local_20;
  code *local_18;
  ulong local_10;
  
  local_18 = badSink;
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 1;
    local_348[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  local_20 = local_348;
  badSink(local_20,uParm2,local_20);
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
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_44_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_11_bad(void)

{
  int iVar1;
  undefined4 local_338 [200];
  ulong local_18;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    while (local_18 < 100) {
      local_338[local_18 * 2] = 1;
      local_338[local_18 * 2 + 1] = 1;
      local_18 = local_18 + 1;
    }
    local_10 = local_338;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_02_bad(void)

{
  undefined4 local_338 [200];
  undefined4 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 1;
    local_338[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  local_18 = local_338;
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_68_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3557 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_long_static_68_badData = dataBuffer_3557;
  CWE590_Free_Memory_Not_on_Heap__free_long_static_68b_badSink();
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)((long)pvVar1 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_long_static_68_goodG2BData = pvVar1;
  CWE590_Free_Memory_Not_on_Heap__free_long_static_68b_goodG2BSink();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_68_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_10_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalTrue != 0) {
    local_18 = 0;
    while (local_18 < 100) {
      local_338[local_18 * 2] = 1;
      local_338[local_18 * 2 + 1] = 1;
      local_18 = local_18 + 1;
    }
    local_10 = local_338;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFalse == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54c_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54d_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54c_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54d_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_11_bad(void)

{
  int iVar1;
  ulong local_18;
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined8 *)(dataBuffer_3554 + local_18 * 8) = 5;
      local_18 = local_18 + 1;
    }
    local_10 = dataBuffer_3554;
  }
  printLongLine(*(undefined8 *)local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = 5;
      local_18 = local_18 + 1;
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  printLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  int iVar1;
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = 5;
      local_18 = local_18 + 1;
    }
  }
  printLongLine(*local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_07_bad(void)

{
  ulong local_18;
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0x0;
  if (staticFive == 5) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined8 *)(dataBuffer_3555 + local_18 * 8) = 5;
      local_18 = local_18 + 1;
    }
    local_10 = dataBuffer_3555;
  }
  printLongLine(*(undefined8 *)local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = 5;
      local_18 = local_18 + 1;
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  printLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = 5;
      local_18 = local_18 + 1;
    }
  }
  printLongLine(*local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_54_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3556 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_long_static_54b_badSink(dataBuffer_3556);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)((long)pvVar1 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_long_static_54b_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_54_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_53d_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_53d_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_54d_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_54e_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_54d_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_54e_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_52c_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_52c_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_13_bad(void)

{
  ulong local_18;
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)(dataBuffer_3554 + local_18 * 8) = 1;
      *(undefined4 *)(dataBuffer_3554 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    local_10 = dataBuffer_3554;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_65b_badSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_65b_goodG2BSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_63b_badSink(void **ppvParm1)

{
  void *__ptr;
  
  __ptr = *ppvParm1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_63b_goodG2BSink(void **ppvParm1)

{
  void *__ptr;
  
  __ptr = *ppvParm1;
  printStructLine(__ptr);
  free(__ptr);
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


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_08_bad(void)

{
  int iVar1;
  undefined4 local_338 [200];
  ulong local_18;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    while (local_18 < 100) {
      local_338[local_18 * 2] = 1;
      local_338[local_18 * 2 + 1] = 1;
      local_18 = local_18 + 1;
    }
    local_10 = local_338;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_12_bad(void)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined auStack56 [8];
  undefined8 *local_30 [2];
  ulong local_20;
  ulong local_18;
  undefined8 *local_10;
  
  puVar3 = auStack56;
  local_10 = (undefined8 *)0x0;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_30[0] = (undefined8 *)malloc(800);
    if (local_30[0] == (undefined8 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_10 = local_30[0], local_20 < 100) {
      *(undefined4 *)(local_30[0] + local_20) = 1;
      *(undefined4 *)((long)local_30[0] + local_20 * 8 + 4) = 1;
      local_20 = local_20 + 1;
    }
  }
  else {
    lVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x33e)) / ZEXT816(0x10),0);
    puVar3 = auStack56 + lVar2 * -0x10;
    local_30[1] = local_30 + lVar2 * 0x1ffffffffffffffe;
    local_18 = 0;
    while (local_10 = local_30[1], local_18 < 100) {
      *(undefined4 *)(local_30[1] + local_18) = 1;
      *(undefined4 *)((long)local_30[1] + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  *(undefined8 *)(puVar3 + -8) = 0x4066ef;
  printStructLine(local_10);
  *(undefined8 *)(puVar3 + -8) = 0x4066fb;
  free(local_10,puVar3[-8]);
  return;
}


void goodG2B(void)

{
  int iVar1;
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_20 < 100) {
      *(undefined4 *)((long)local_10 + local_20 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_20 * 8 + 4) = 1;
      local_20 = local_20 + 1;
    }
  }
  else {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_12_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_53c_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_long_static_53d_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_53c_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_long_static_53d_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_03_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3554 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3554 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(dataBuffer_3554);
  free(dataBuffer_3554);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_31_bad(void)

{
  undefined4 local_348 [200];
  undefined4 *local_28;
  undefined4 *local_20;
  undefined4 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 1;
    local_348[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  local_28 = local_348;
  local_20 = local_28;
  local_18 = local_28;
  printStructLine(local_28);
  free(local_28);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_31_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3558 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_long_static_65b_badSink
            (dataBuffer_3558,uParm2,dataBuffer_3558);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)((long)pvVar1 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_long_static_65b_goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_65_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_63_bad(void)

{
  undefined1 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3556 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3556 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  local_18 = dataBuffer_3556;
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_63b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)local_18 + local_10 * 8) = 1;
    *(undefined4 *)((long)local_18 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  local_20 = local_18;
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_63b_goodG2BSink(&local_20);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_63_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_17_bad
               (undefined8 uParm1,undefined8 uParm2,long lParm3)

{
  undefined auVar1 [16];
  long lVar2;
  ulong *puVar3;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  int local_c;
  
  local_18 = 0;
  local_c = 0;
  puVar3 = &local_28;
  while (local_c < 1) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lParm3 = SUB168(auVar1 % ZEXT816(0x10),0);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0) * -0x10;
    local_28 = (ulong)((undefined *)puVar3 + lVar2 + 0xf) & 0xfffffffffffffff0;
    local_20 = 0;
    while (local_20 < 100) {
      *(undefined4 *)(local_28 + local_20 * 8) = 1;
      lParm3 = local_20 * 8;
      *(undefined4 *)(local_28 + lParm3 + 4) = 1;
      local_20 = local_20 + 1;
    }
    local_c = local_c + 1;
    puVar3 = (ulong *)((undefined *)puVar3 + lVar2);
    local_18 = local_28;
  }
  *(undefined8 *)((undefined *)puVar3 + -8) = 0x406e23;
  printStructLine(local_18,uParm2,lParm3);
  *(undefined8 *)((undefined *)puVar3 + -8) = 0x406e2f;
  free(local_18,((undefined *)puVar3)[-8]);
  return;
}


void goodG2B(void)

{
  ulong local_20;
  void *local_18;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      printStructLine(local_18);
      free(local_18);
      return;
    }
    local_18 = malloc(800);
    if (local_18 == (void *)0x0) break;
    local_20 = 0;
    while (local_20 < 100) {
      *(undefined4 *)((long)local_18 + local_20 * 8) = 1;
      *(undefined4 *)((long)local_18 + local_20 * 8 + 4) = 1;
      local_20 = local_20 + 1;
    }
    local_c = local_c + 1;
  }
  printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_17_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_15_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3555 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  printLongLine(dataBuffer_3555._0_8_);
  free(dataBuffer_3555);
  return;
}


void goodG2B1(void)

{
  undefined8 *__ptr;
  ulong local_10;
  
  __ptr = (undefined8 *)malloc(800);
  if (__ptr == (undefined8 *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    __ptr[local_10] = 5;
    local_10 = local_10 + 1;
  }
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  undefined8 *__ptr;
  ulong local_10;
  
  __ptr = (undefined8 *)malloc(800);
  if (__ptr == (undefined8 *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    __ptr[local_10] = 5;
    local_10 = local_10 + 1;
  }
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54b_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54c_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54b_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54c_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_18_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3555 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3555 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(dataBuffer_3555);
  free(dataBuffer_3555);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_18_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_11_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long extraout_RDX;
  long lVar4;
  undefined *puVar5;
  undefined auStack40 [8];
  undefined8 *local_20;
  ulong local_18;
  undefined8 *local_10;
  
  puVar5 = auStack40;
  local_10 = (undefined8 *)0x0;
  iVar2 = globalReturnsTrue();
  lVar4 = extraout_RDX;
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    lVar4 = SUB168(auVar1 % ZEXT816(0x10),0);
    puVar5 = auStack40 + lVar3 * -0x10;
    local_20 = &local_20 + lVar3 * 0x1ffffffffffffffe;
    local_18 = 0;
    while (local_10 = local_20, local_18 < 100) {
      *(undefined4 *)(local_20 + local_18) = 1;
      lVar4 = local_18 * 8;
      *(undefined4 *)((long)local_20 + lVar4 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x407295;
  printStructLine(local_10,uParm2,lVar4);
  *(undefined8 *)(puVar5 + -8) = 0x4072a1;
  free(local_10,puVar5[-8]);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_51b_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_51b_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_34_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3559 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  printLongLine(dataBuffer_3559._0_8_);
  free(dataBuffer_3559);
  return;
}


void goodG2B(void)

{
  undefined8 *__ptr;
  ulong local_10;
  
  __ptr = (undefined8 *)malloc(800);
  if (__ptr == (undefined8 *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    __ptr[local_10] = 5;
    local_10 = local_10 + 1;
  }
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_34_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_54e_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_54e_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_52_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *apuStack48 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(local_20 + local_10) = 1;
    lVar3 = local_10 * 8;
    *(undefined4 *)((long)local_20 + lVar3 + 4) = 1;
    local_10 = local_10 + 1;
  }
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x407681;
  local_18 = local_20;
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_52b_badSink(local_20,uParm2,lVar3);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_52b_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_52_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54c_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54d_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54c_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54d_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54_bad(void)

{
  undefined4 local_338 [200];
  undefined4 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 1;
    local_338[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  local_18 = local_338;
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54b_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_52c_badSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_52c_goodG2BSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53d_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53d_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_41_badSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_41_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3557 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_long_static_41_badSink(dataBuffer_3557);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_41_goodG2BSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)((long)pvVar1 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_long_static_41_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_41_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_53b_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_long_static_53c_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_53b_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_long_static_53c_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_17_bad(void)

{
  ulong local_20;
  undefined1 *local_18;
  int local_c;
  
  local_18 = (undefined1 *)0x0;
  local_c = 0;
  while (local_c < 1) {
    local_20 = 0;
    while (local_20 < 100) {
      *(undefined4 *)(dataBuffer_3555 + local_20 * 8) = 1;
      *(undefined4 *)(dataBuffer_3555 + local_20 * 8 + 4) = 1;
      local_20 = local_20 + 1;
    }
    local_18 = dataBuffer_3555;
    local_c = local_c + 1;
  }
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  ulong local_20;
  void *local_18;
  int local_c;
  
  local_18 = (void *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      printStructLine(local_18);
      free(local_18);
      return;
    }
    local_18 = malloc(800);
    if (local_18 == (void *)0x0) break;
    local_20 = 0;
    while (local_20 < 100) {
      *(undefined4 *)((long)local_18 + local_20 * 8) = 1;
      *(undefined4 *)((long)local_18 + local_20 * 8 + 4) = 1;
      local_20 = local_20 + 1;
    }
    local_c = local_c + 1;
  }
  printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_17_good(void)

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


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3559 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3559 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  badSink(dataBuffer_3559,uParm2,dataBuffer_3559);
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
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_44_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_11_bad(void)

{
  int iVar1;
  ulong local_18;
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)(dataBuffer_3554 + local_18 * 8) = 1;
      *(undefined4 *)(dataBuffer_3554 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    local_10 = dataBuffer_3554;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_11_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_02_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3554 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3554 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(dataBuffer_3554);
  free(dataBuffer_3554);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_05_bad
               (undefined8 uParm1,undefined8 uParm2,long lParm3)

{
  undefined auVar1 [16];
  long lVar2;
  undefined *puVar3;
  undefined auStack40 [8];
  undefined8 *local_20;
  ulong local_18;
  undefined8 *local_10;
  
  puVar3 = auStack40;
  local_10 = (undefined8 *)0x0;
  if (staticTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    lParm3 = SUB168(auVar1 % ZEXT816(0x10),0);
    puVar3 = auStack40 + lVar2 * -0x10;
    local_20 = &local_20 + lVar2 * 0x1ffffffffffffffe;
    local_18 = 0;
    while (local_10 = local_20, local_18 < 100) {
      *(undefined4 *)(local_20 + local_18) = 1;
      lParm3 = local_18 * 8;
      *(undefined4 *)((long)local_20 + lParm3 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  *(undefined8 *)(puVar3 + -8) = 0x408181;
  printStructLine(local_10,uParm2,lParm3);
  *(undefined8 *)(puVar3 + -8) = 0x40818d;
  free(local_10,puVar3[-8]);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFalse == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_66b_badSink(long lParm1)

{
  undefined8 *__ptr;
  
  __ptr = *(undefined8 **)(lParm1 + 0x10);
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_66b_goodG2BSink(long lParm1)

{
  undefined8 *__ptr;
  
  __ptr = *(undefined8 **)(lParm1 + 0x10);
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_10_bad(void)

{
  ulong local_18;
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0x0;
  if (globalTrue != 0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)(dataBuffer_3554 + local_18 * 8) = 1;
      *(undefined4 *)(dataBuffer_3554 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    local_10 = dataBuffer_3554;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFalse == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_53c_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_53d_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_53c_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_53d_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_53_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3556 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_long_static_53b_badSink(dataBuffer_3556);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)((long)pvVar1 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_long_static_53b_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_53_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_54c_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_54d_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_54c_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_54d_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_01_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3554 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3554 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(dataBuffer_3554);
  free(dataBuffer_3554);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_01_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_04_bad(void)

{
  ulong local_18;
  
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(dataBuffer_3556 + local_18 * 8) = 1;
    *(undefined4 *)(dataBuffer_3556 + local_18 * 8 + 4) = 1;
    local_18 = local_18 + 1;
  }
  printStructLine(dataBuffer_3556);
  free(dataBuffer_3556);
  return;
}


/* WARNING: Removing unreachable block (ram,0x00408852) */

void goodG2B1(void)

{
  void *__ptr;
  ulong local_18;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)__ptr + local_18 * 8) = 1;
      *(undefined4 *)((long)__ptr + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
  printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B2(void)

{
  void *__ptr;
  ulong local_18;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)__ptr + local_18 * 8) = 1;
      *(undefined4 *)((long)__ptr + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
  printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_53d_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_53d_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_54e_badSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_54e_goodG2BSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_15_bad(void)

{
  undefined4 local_338 [200];
  undefined4 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 1;
    local_338[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  local_18 = local_338;
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Type propagation algorithm not settling */

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_51_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *apuStack48 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(local_20 + local_10) = 1;
    lVar3 = local_10 * 8;
    *(undefined4 *)((long)local_20 + lVar3 + 4) = 1;
    local_10 = local_10 + 1;
  }
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x408ccb;
  local_18 = local_20;
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_51b_badSink(local_20,uParm2,lVar3);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_51b_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_51_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_66_bad(void)

{
  undefined local_48 [16];
  undefined1 *local_38;
  undefined1 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3557 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  local_18 = dataBuffer_3557;
  local_38 = dataBuffer_3557;
  CWE590_Free_Memory_Not_on_Heap__free_long_static_66b_badSink(local_48);
  return;
}


void goodG2B(void)

{
  undefined local_48 [16];
  void *local_38;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_38 = malloc(800);
  if (local_38 == (void *)0x0) {
    local_20 = local_38;
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)((long)local_38 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  local_20 = local_38;
  local_18 = local_38;
  CWE590_Free_Memory_Not_on_Heap__free_long_static_66b_goodG2BSink(local_48);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_66_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_66_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 uStack80;
  undefined local_48 [8];
  undefined4 auStack64 [2];
  undefined4 *local_38;
  undefined4 *local_20;
  undefined4 *local_18;
  ulong local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_38 = auStack64 + lVar2 * 0x3ffffffffffffffc;
  local_10 = 0;
  while (local_10 < 100) {
    local_38[local_10 * 2] = 1;
    lVar3 = local_10 * 8;
    local_38[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  (&uStack80)[lVar2 * 0x1ffffffffffffffe] = 0x408f0b;
  local_20 = local_38;
  local_18 = local_38;
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_66b_badSink(local_48,uParm2,lVar3);
  return;
}


void goodG2B(void)

{
  undefined local_48 [16];
  void *local_38;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_38 = malloc(800);
  if (local_38 == (void *)0x0) {
    local_20 = local_38;
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)local_38 + local_10 * 8) = 1;
    *(undefined4 *)((long)local_38 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  local_20 = local_38;
  local_18 = local_38;
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_66b_goodG2BSink(local_48);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_66_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_31_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3554 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  printLongLine(dataBuffer_3554._0_8_);
  free(dataBuffer_3554);
  return;
}


void goodG2B(void)

{
  undefined8 *__ptr;
  ulong local_10;
  
  __ptr = (undefined8 *)malloc(800);
  if (__ptr == (undefined8 *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    __ptr[local_10] = 5;
    local_10 = local_10 + 1;
  }
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_31_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_52b_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_52c_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_52b_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_52c_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_41_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_41_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *apuStack48 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(local_20 + local_10) = 1;
    lVar3 = local_10 * 8;
    *(undefined4 *)((long)local_20 + lVar3 + 4) = 1;
    local_10 = local_10 + 1;
  }
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x4091d3;
  local_18 = local_20;
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_41_badSink(local_20,uParm2,lVar3);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_41_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_41_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_41_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3558 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3558 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_65b_badSink
            (dataBuffer_3558,uParm2,dataBuffer_3558);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_65b_goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_65_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53b_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53c_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53b_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53c_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_52_bad(void)

{
  undefined4 local_338 [200];
  undefined4 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 1;
    local_338[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  local_18 = local_338;
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_52b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_52b_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_52_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_64b_badSink(void **ppvParm1)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)*ppvParm1;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_64b_goodG2BSink(void **ppvParm1)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)*ppvParm1;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_15_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3555 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3555 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(dataBuffer_3555);
  free(dataBuffer_3555);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_15_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_51b_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_51b_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_68b_badSink(void)

{
  void *__ptr;
  
  __ptr = CWE590_Free_Memory_Not_on_Heap__free_struct_declare_68_badData;
  printStructLine(CWE590_Free_Memory_Not_on_Heap__free_struct_declare_68_badData);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_68b_goodG2BSink(void)

{
  void *__ptr;
  
  __ptr = CWE590_Free_Memory_Not_on_Heap__free_struct_declare_68_goodG2BData;
  printStructLine(CWE590_Free_Memory_Not_on_Heap__free_struct_declare_68_goodG2BData);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_16_bad(void)

{
  undefined4 local_338 [200];
  undefined4 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 1;
    local_338[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  local_18 = local_338;
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_16_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_67b_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_67b_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE590_Free_Memory_Not_on_Heap__free_long_static_32_bad(void)

{
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  local_18 = &local_38;
  local_20 = &local_38;
  local_38 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3557 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  local_28 = dataBuffer_3557;
  local_30 = dataBuffer_3557;
  printLongLine(dataBuffer_3557._0_8_);
  free(local_30);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  void *local_40;
  undefined8 *local_38;
  void *local_30;
  void *local_28;
  void **local_20;
  void **local_18;
  ulong local_10;
  
  local_18 = &local_40;
  local_20 = &local_40;
  local_40 = (void *)0x0;
  local_28 = (void *)0x0;
  local_30 = malloc(800);
  if (local_30 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)((long)local_30 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  *local_18 = local_30;
  local_38 = (undefined8 *)*local_20;
  local_28 = local_30;
  printLongLine(*local_38);
  free(local_38);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_32_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_66b_badSink(long lParm1)

{
  void *__ptr;
  
  __ptr = *(void **)(lParm1 + 0x10);
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_66b_goodG2BSink(long lParm1)

{
  void *__ptr;
  
  __ptr = *(void **)(lParm1 + 0x10);
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_68b_badSink(void)

{
  void *__ptr;
  
  __ptr = CWE590_Free_Memory_Not_on_Heap__free_struct_static_68_badData;
  printStructLine(CWE590_Free_Memory_Not_on_Heap__free_struct_static_68_badData);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_68b_goodG2BSink(void)

{
  void *__ptr;
  
  __ptr = CWE590_Free_Memory_Not_on_Heap__free_struct_static_68_goodG2BData;
  printStructLine(CWE590_Free_Memory_Not_on_Heap__free_struct_static_68_goodG2BData);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_67b_badSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_67b_goodG2BSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *apuStack48 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(local_20 + local_10) = 1;
    lVar3 = local_10 * 8;
    *(undefined4 *)((long)local_20 + lVar3 + 4) = 1;
    local_10 = local_10 + 1;
  }
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x409c78;
  local_18 = local_20;
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53b_badSink(local_20,uParm2,lVar3);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53b_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_53_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_53d_badSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_53d_goodG2BSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_51_bad(void)

{
  undefined4 local_338 [200];
  undefined4 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 1;
    local_338[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  local_18 = local_338;
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_51b_badSink(local_18);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_51b_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_51_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_09_bad
               (undefined8 uParm1,undefined8 uParm2,long lParm3)

{
  undefined auVar1 [16];
  long lVar2;
  undefined *puVar3;
  undefined auStack40 [8];
  undefined8 *local_20;
  ulong local_18;
  undefined8 *local_10;
  
  puVar3 = auStack40;
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    lParm3 = SUB168(auVar1 % ZEXT816(0x10),0);
    puVar3 = auStack40 + lVar2 * -0x10;
    local_20 = &local_20 + lVar2 * 0x1ffffffffffffffe;
    local_18 = 0;
    while (local_10 = local_20, local_18 < 100) {
      *(undefined4 *)(local_20 + local_18) = 1;
      lParm3 = local_18 * 8;
      *(undefined4 *)((long)local_20 + lParm3 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  *(undefined8 *)(puVar3 + -8) = 0x409f2d;
  printStructLine(local_10,uParm2,lParm3);
  *(undefined8 *)(puVar3 + -8) = 0x409f39;
  free(local_10,puVar3[-8]);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_05_bad(void)

{
  ulong local_18;
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0x0;
  if (staticTrue != 0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)(dataBuffer_3556 + local_18 * 8) = 1;
      *(undefined4 *)(dataBuffer_3556 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    local_10 = dataBuffer_3556;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFalse == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_41_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_41_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3557 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3557 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_41_badSink(dataBuffer_3557);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_41_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_41_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_41_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_53b_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_53c_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_53b_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_53c_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_04_bad(void)

{
  ulong local_18;
  
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined8 *)(dataBuffer_3556 + local_18 * 8) = 5;
    local_18 = local_18 + 1;
  }
  printLongLine(dataBuffer_3556._0_8_);
  free(dataBuffer_3556);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a4ae) */

void goodG2B1(void)

{
  undefined8 *__ptr;
  ulong local_18;
  
  __ptr = (undefined8 *)malloc(800);
  if (__ptr != (undefined8 *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      __ptr[local_18] = 5;
      local_18 = local_18 + 1;
    }
    printLongLine(*__ptr);
    free(__ptr);
    return;
  }
  printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B2(void)

{
  undefined8 *__ptr;
  ulong local_18;
  
  __ptr = (undefined8 *)malloc(800);
  if (__ptr != (undefined8 *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      __ptr[local_18] = 5;
      local_18 = local_18 + 1;
    }
    printLongLine(*__ptr);
    free(__ptr);
    return;
  }
  printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_09_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = 0;
    while (local_18 < 100) {
      local_338[local_18 * 2] = 1;
      local_338[local_18 * 2 + 1] = 1;
      local_18 = local_18 + 1;
    }
    local_10 = local_338;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void badSink(void)

{
  void *__ptr;
  
  __ptr = CWE590_Free_Memory_Not_on_Heap__free_struct_declare_45_badData;
  printStructLine(CWE590_Free_Memory_Not_on_Heap__free_struct_declare_45_badData);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_45_bad(void)

{
  undefined4 local_338 [200];
  undefined4 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 1;
    local_338[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_45_badData = local_338;
  local_18 = CWE590_Free_Memory_Not_on_Heap__free_struct_declare_45_badData;
  badSink();
  return;
}


void goodG2BSink(void)

{
  void *__ptr;
  
  __ptr = CWE590_Free_Memory_Not_on_Heap__free_struct_declare_45_goodG2BData;
  printStructLine(CWE590_Free_Memory_Not_on_Heap__free_struct_declare_45_goodG2BData);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_45_goodG2BData = pvVar1;
  goodG2BSink();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_45_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_06_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  undefined4 *local_10;
  
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 1;
    local_338[local_18 * 2 + 1] = 1;
    local_18 = local_18 + 1;
  }
  local_10 = local_338;
  printStructLine(local_10);
  free(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040a9e5) */

void goodG2B1(void)

{
  void *__ptr;
  ulong local_18;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)__ptr + local_18 * 8) = 1;
      *(undefined4 *)((long)__ptr + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
  printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B2(void)

{
  void *__ptr;
  ulong local_18;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)__ptr + local_18 * 8) = 1;
      *(undefined4 *)((long)__ptr + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
  printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_34_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3559 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3559 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(dataBuffer_3559);
  free(dataBuffer_3559);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_34_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_67_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3560 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_long_static_67b_badSink(dataBuffer_3560);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)((long)pvVar1 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_long_static_67b_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_67_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_66b_badSink(long lParm1)

{
  void *__ptr;
  
  __ptr = *(void **)(lParm1 + 0x10);
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_66b_goodG2BSink(long lParm1)

{
  void *__ptr;
  
  __ptr = *(void **)(lParm1 + 0x10);
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_05_bad(void)

{
  ulong local_18;
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0x0;
  if (staticTrue != 0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined8 *)(dataBuffer_3556 + local_18 * 8) = 5;
      local_18 = local_18 + 1;
    }
    local_10 = dataBuffer_3556;
  }
  printLongLine(*(undefined8 *)local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticFalse == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = 5;
      local_18 = local_18 + 1;
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  printLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (staticTrue != 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = 5;
      local_18 = local_18 + 1;
    }
  }
  printLongLine(*local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_05_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_65b_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_65b_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
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


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_08_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  int iVar2;
  long lVar3;
  long extraout_RDX;
  long lVar4;
  undefined *puVar5;
  undefined auStack40 [8];
  undefined8 *local_20;
  ulong local_18;
  undefined8 *local_10;
  
  puVar5 = auStack40;
  local_10 = (undefined8 *)0x0;
  iVar2 = staticReturnsTrue();
  lVar4 = extraout_RDX;
  if (iVar2 != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar3 = SUB168(auVar1 / ZEXT816(0x10),0);
    lVar4 = SUB168(auVar1 % ZEXT816(0x10),0);
    puVar5 = auStack40 + lVar3 * -0x10;
    local_20 = &local_20 + lVar3 * 0x1ffffffffffffffe;
    local_18 = 0;
    while (local_10 = local_20, local_18 < 100) {
      *(undefined4 *)(local_20 + local_18) = 1;
      lVar4 = local_18 * 8;
      *(undefined4 *)((long)local_20 + lVar4 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  *(undefined8 *)(puVar5 + -8) = 0x40b0a8;
  printStructLine(local_10,uParm2,lVar4);
  *(undefined8 *)(puVar5 + -8) = 0x40b0b4;
  free(local_10,puVar5[-8]);
  return;
}


void goodG2B1(void)

{
  int iVar1;
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_08_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_53_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3556 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3556 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_53b_badSink(dataBuffer_3556);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_53b_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_53_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Type propagation algorithm not settling */

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_68_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *apuStack48 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(local_20 + local_10) = 1;
    lVar3 = local_10 * 8;
    *(undefined4 *)((long)local_20 + lVar3 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_68_badData = local_20;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40b3ee;
  local_18 = local_20;
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_68b_badSink(uParm1,uParm2,lVar3);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_68_goodG2BData = pvVar1;
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_68b_goodG2BSink();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_68_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_13_bad
               (undefined8 uParm1,undefined8 uParm2,long lParm3)

{
  undefined auVar1 [16];
  long lVar2;
  undefined *puVar3;
  undefined auStack40 [8];
  undefined8 *local_20;
  ulong local_18;
  undefined8 *local_10;
  
  puVar3 = auStack40;
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    lParm3 = SUB168(auVar1 % ZEXT816(0x10),0);
    puVar3 = auStack40 + lVar2 * -0x10;
    local_20 = &local_20 + lVar2 * 0x1ffffffffffffffe;
    local_18 = 0;
    while (local_10 = local_20, local_18 < 100) {
      *(undefined4 *)(local_20 + local_18) = 1;
      lParm3 = local_18 * 8;
      *(undefined4 *)((long)local_20 + lParm3 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  *(undefined8 *)(puVar3 + -8) = 0x40b553;
  printStructLine(local_10,uParm2,lParm3);
  *(undefined8 *)(puVar3 + -8) = 0x40b55f;
  free(local_10,puVar3[-8]);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_67b_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_67b_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_02_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *apuStack48 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(local_20 + local_10) = 1;
    lVar3 = local_10 * 8;
    *(undefined4 *)((long)local_20 + lVar3 + 4) = 1;
    local_10 = local_10 + 1;
  }
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40b7e4;
  local_18 = local_20;
  printStructLine(local_20,uParm2,lVar3);
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40b7f0;
  free(local_18,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_64b_badSink(void **ppvParm1)

{
  void *__ptr;
  
  __ptr = *ppvParm1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_64b_goodG2BSink(void **ppvParm1)

{
  void *__ptr;
  
  __ptr = *ppvParm1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_67_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined *puStack48;
  undefined8 *local_28;
  undefined8 *local_20 [2];
  ulong local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_28 = local_20 + lVar2 * 0x1ffffffffffffffe;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(local_28 + local_10) = 1;
    lVar3 = local_10 * 8;
    *(undefined4 *)((long)local_28 + lVar3 + 4) = 1;
    local_10 = local_10 + 1;
  }
  (&puStack48)[lVar2 * 0x1ffffffffffffffe] = 0x40ba71;
  local_20[0] = local_28;
  local_20[1] = local_28;
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_67b_badSink(local_28,uParm2,lVar3);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_67b_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_67_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_66_bad(void)

{
  undefined local_48 [16];
  undefined1 *local_38;
  undefined1 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3557 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3557 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  local_18 = dataBuffer_3557;
  local_38 = dataBuffer_3557;
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_66b_badSink(local_48);
  return;
}


void goodG2B(void)

{
  undefined local_48 [16];
  void *local_38;
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_18 = (void *)0x0;
  local_38 = malloc(800);
  if (local_38 == (void *)0x0) {
    local_20 = local_38;
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)local_38 + local_10 * 8) = 1;
    *(undefined4 *)((long)local_38 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  local_20 = local_38;
  local_18 = local_38;
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_66b_goodG2BSink(local_48);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_66_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_14_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (globalFive == 5) {
    local_18 = 0;
    while (local_18 < 100) {
      local_338[local_18 * 2] = 1;
      local_338[local_18 * 2 + 1] = 1;
      local_18 = local_18 + 1;
    }
    local_10 = local_338;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Type propagation algorithm not settling */

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_16_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *apuStack48 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(local_20 + local_10) = 1;
    lVar3 = local_10 * 8;
    *(undefined4 *)((long)local_20 + lVar3 + 4) = 1;
    local_10 = local_10 + 1;
  }
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40bed4;
  local_18 = local_20;
  printStructLine(local_20,uParm2,lVar3);
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40bee0;
  free(local_18,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  return;
}


void goodG2B(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_16_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_32_bad(void)

{
  undefined4 local_358 [200];
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  local_18 = &local_38;
  local_20 = &local_38;
  local_38 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    local_358[local_10 * 2] = 1;
    local_358[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  local_30 = local_358;
  local_28 = local_30;
  printStructLine(local_30);
  free(local_30);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  void *local_40;
  void *local_38;
  void *local_30;
  void *local_28;
  void **local_20;
  void **local_18;
  ulong local_10;
  
  local_18 = &local_40;
  local_20 = &local_40;
  local_40 = (void *)0x0;
  local_28 = (void *)0x0;
  local_30 = malloc(800);
  if (local_30 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)local_30 + local_10 * 8) = 1;
    *(undefined4 *)((long)local_30 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  *local_18 = local_30;
  local_38 = *local_20;
  local_28 = local_30;
  printStructLine(local_38);
  free(local_38);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_32_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_07_bad
               (undefined8 uParm1,undefined8 uParm2,long lParm3)

{
  undefined auVar1 [16];
  long lVar2;
  undefined *puVar3;
  undefined auStack40 [8];
  undefined8 *local_20;
  ulong local_18;
  undefined8 *local_10;
  
  puVar3 = auStack40;
  local_10 = (undefined8 *)0x0;
  if (staticFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    lParm3 = SUB168(auVar1 % ZEXT816(0x10),0);
    puVar3 = auStack40 + lVar2 * -0x10;
    local_20 = &local_20 + lVar2 * 0x1ffffffffffffffe;
    local_18 = 0;
    while (local_10 = local_20, local_18 < 100) {
      *(undefined4 *)(local_20 + local_18) = 1;
      lParm3 = local_18 * 8;
      *(undefined4 *)((long)local_20 + lParm3 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  *(undefined8 *)(puVar3 + -8) = 0x40c1cb;
  printStructLine(local_10,uParm2,lParm3);
  *(undefined8 *)(puVar3 + -8) = 0x40c1d7;
  free(local_10,puVar3[-8]);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_52b_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_52c_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_52b_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_52c_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_67b_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_67b_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_54d_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_long_static_54e_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_54d_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_long_static_54e_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_07_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (staticFive == 5) {
    local_18 = 0;
    while (local_18 < 100) {
      local_338[local_18 * 2] = 1;
      local_338[local_18 * 2 + 1] = 1;
      local_18 = local_18 + 1;
    }
    local_10 = local_338;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (staticFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_07_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_64_bad(void)

{
  undefined4 local_338 [200];
  undefined4 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 1;
    local_338[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  local_18 = local_338;
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_64b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)local_18 + local_10 * 8) = 1;
    *(undefined4 *)((long)local_18 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  local_20 = local_18;
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_64b_goodG2BSink(&local_20);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_64_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Type propagation algorithm not settling */

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_63_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *apuStack48 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(local_20 + local_10) = 1;
    lVar3 = local_10 * 8;
    *(undefined4 *)((long)local_20 + lVar3 + 4) = 1;
    local_10 = local_10 + 1;
  }
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40c7c7;
  local_18 = local_20;
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_63b_badSink(&local_20,uParm2,lVar3);
  return;
}


void goodG2B(void)

{
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)local_18 + local_10 * 8) = 1;
    *(undefined4 *)((long)local_18 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  local_20 = local_18;
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_63b_goodG2BSink(&local_20);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_63_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_13_bad(void)

{
  ulong local_18;
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined8 *)(dataBuffer_3554 + local_18 * 8) = 5;
      local_18 = local_18 + 1;
    }
    local_10 = dataBuffer_3554;
  }
  printLongLine(*(undefined8 *)local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = 5;
      local_18 = local_18 + 1;
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  printLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = 5;
      local_18 = local_18 + 1;
    }
  }
  printLongLine(*local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_63b_badSink(void **ppvParm1)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)*ppvParm1;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_63b_goodG2BSink(void **ppvParm1)

{
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)*ppvParm1;
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_04_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  undefined4 *local_10;
  
  local_18 = 0;
  while (local_18 < 100) {
    local_338[local_18 * 2] = 1;
    local_338[local_18 * 2 + 1] = 1;
    local_18 = local_18 + 1;
  }
  local_10 = local_338;
  printStructLine(local_10);
  free(local_10);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040cb25) */

void goodG2B1(void)

{
  void *__ptr;
  ulong local_18;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)__ptr + local_18 * 8) = 1;
      *(undefined4 *)((long)__ptr + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
  printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B2(void)

{
  void *__ptr;
  ulong local_18;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)__ptr + local_18 * 8) = 1;
      *(undefined4 *)((long)__ptr + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
  printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_52_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3556 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3556 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_52b_badSink(dataBuffer_3556);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_52b_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_52_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_51b_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_51b_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void badSink(void)

{
  void *__ptr;
  
  __ptr = CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_45_badData;
  printStructLine(CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_45_badData);
  free(__ptr);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_45_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *apuStack48 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(local_20 + local_10) = 1;
    lVar3 = local_10 * 8;
    *(undefined4 *)((long)local_20 + lVar3 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_45_badData = local_20;
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40ceb3;
  local_18 = local_20;
  badSink(uParm1,uParm2,lVar3);
  return;
}


void goodG2BSink(void)

{
  void *__ptr;
  
  __ptr = CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_45_goodG2BData;
  printStructLine(CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_45_goodG2BData);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_45_goodG2BData = pvVar1;
  goodG2BSink();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_45_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_16_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3554 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3554 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(dataBuffer_3554);
  free(dataBuffer_3554);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_16_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_67_bad(void)

{
  undefined4 local_348 [200];
  undefined4 *local_28;
  undefined4 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 1;
    local_348[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  local_28 = local_348;
  local_18 = local_28;
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_67b_badSink(local_28);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_67b_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_67_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_65_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined4 local_348 [202];
  undefined4 *local_20;
  code *local_18;
  ulong local_10;
  
  local_18 = CWE590_Free_Memory_Not_on_Heap__free_struct_declare_65b_badSink;
  local_10 = 0;
  while (local_10 < 100) {
    local_348[local_10 * 2] = 1;
    local_348[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  local_20 = local_348;
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_65b_badSink(local_20,uParm2,local_20);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_65b_goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_65_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Type propagation algorithm not settling */

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_06_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *apuStack48 [2];
  undefined8 *local_20;
  ulong local_18;
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(local_20 + local_18) = 1;
    lVar3 = local_18 * 8;
    *(undefined4 *)((long)local_20 + lVar3 + 4) = 1;
    local_18 = local_18 + 1;
  }
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d392;
  local_10 = local_20;
  printStructLine(local_20,uParm2,lVar3);
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d39e;
  free(local_10,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040d3ba) */

void goodG2B1(void)

{
  void *__ptr;
  ulong local_18;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)__ptr + local_18 * 8) = 1;
      *(undefined4 *)((long)__ptr + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
  printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B2(void)

{
  void *__ptr;
  ulong local_18;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)__ptr + local_18 * 8) = 1;
      *(undefined4 *)((long)__ptr + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
  printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54d_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54e_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54d_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54e_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_10_bad
               (undefined8 uParm1,undefined8 uParm2,long lParm3)

{
  undefined auVar1 [16];
  long lVar2;
  undefined *puVar3;
  undefined auStack40 [8];
  undefined8 *local_20;
  ulong local_18;
  undefined8 *local_10;
  
  puVar3 = auStack40;
  local_10 = (undefined8 *)0x0;
  if (globalTrue != 0) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    lParm3 = SUB168(auVar1 % ZEXT816(0x10),0);
    puVar3 = auStack40 + lVar2 * -0x10;
    local_20 = &local_20 + lVar2 * 0x1ffffffffffffffe;
    local_18 = 0;
    while (local_10 = local_20, local_18 < 100) {
      *(undefined4 *)(local_20 + local_18) = 1;
      lParm3 = local_18 * 8;
      *(undefined4 *)((long)local_20 + lParm3 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  *(undefined8 *)(puVar3 + -8) = 0x40d607;
  printStructLine(local_10,uParm2,lParm3);
  *(undefined8 *)(puVar3 + -8) = 0x40d613;
  free(local_10,puVar3[-8]);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFalse == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalTrue != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_03_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3554 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  printLongLine(dataBuffer_3554._0_8_);
  free(dataBuffer_3554);
  return;
}


void goodG2B1(void)

{
  undefined8 *__ptr;
  ulong local_10;
  
  __ptr = (undefined8 *)malloc(800);
  if (__ptr == (undefined8 *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    __ptr[local_10] = 5;
    local_10 = local_10 + 1;
  }
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  undefined8 *__ptr;
  ulong local_10;
  
  __ptr = (undefined8 *)malloc(800);
  if (__ptr == (undefined8 *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    __ptr[local_10] = 5;
    local_10 = local_10 + 1;
  }
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_03_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Type propagation algorithm not settling */

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_01_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *apuStack48 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(local_20 + local_10) = 1;
    lVar3 = local_10 * 8;
    *(undefined4 *)((long)local_20 + lVar3 + 4) = 1;
    local_10 = local_10 + 1;
  }
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d9cb;
  local_18 = local_20;
  printStructLine(local_20,uParm2,lVar3);
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40d9d7;
  free(local_18,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  return;
}


void goodG2B(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_01_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_63_bad(void)

{
  undefined1 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3556 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  local_18 = dataBuffer_3556;
  CWE590_Free_Memory_Not_on_Heap__free_long_static_63b_badSink(&local_18);
  return;
}


void goodG2B(void)

{
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)((long)local_18 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  local_20 = local_18;
  CWE590_Free_Memory_Not_on_Heap__free_long_static_63b_goodG2BSink(&local_20);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_63_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54d_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54e_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54d_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_struct_declare_54e_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_18_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3555 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  printLongLine(dataBuffer_3555._0_8_);
  free(dataBuffer_3555);
  return;
}


void goodG2B(void)

{
  undefined8 *__ptr;
  ulong local_10;
  
  __ptr = (undefined8 *)malloc(800);
  if (__ptr == (undefined8 *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    __ptr[local_10] = 5;
    local_10 = local_10 + 1;
  }
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_18_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_51_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3556 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3556 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_51b_badSink(dataBuffer_3556);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_51b_goodG2BSink(pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_51_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_01_bad(void)

{
  undefined4 local_338 [200];
  undefined4 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 1;
    local_338[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  local_18 = local_338;
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_01_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_54b_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_long_static_54c_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_54b_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_long_static_54c_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_65b_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_65b_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_12_bad(void)

{
  int iVar1;
  ulong local_20;
  ulong local_18;
  undefined1 *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined1 *)malloc(800);
    if (local_10 == (undefined1 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_20 < 100) {
      *(undefined4 *)(local_10 + local_20 * 8) = 1;
      *(undefined4 *)(local_10 + local_20 * 8 + 4) = 1;
      local_20 = local_20 + 1;
    }
  }
  else {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)(dataBuffer_3554 + local_18 * 8) = 1;
      *(undefined4 *)(dataBuffer_3554 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    local_10 = dataBuffer_3554;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  ulong local_20;
  ulong local_18;
  void *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_20 < 100) {
      *(undefined4 *)((long)local_10 + local_20 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_20 * 8 + 4) = 1;
      local_20 = local_20 + 1;
    }
  }
  else {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_12_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_64b_badSink(void **ppvParm1)

{
  void *__ptr;
  
  __ptr = *ppvParm1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_64b_goodG2BSink(void **ppvParm1)

{
  void *__ptr;
  
  __ptr = *ppvParm1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_12_bad(void)

{
  int iVar1;
  ulong local_20;
  ulong local_18;
  undefined1 *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined1 *)malloc(800);
    if ((undefined8 *)local_10 == (undefined8 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_20 < 100) {
      ((undefined8 *)local_10)[local_20] = 5;
      local_20 = local_20 + 1;
    }
  }
  else {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined8 *)(dataBuffer_3554 + local_18 * 8) = 5;
      local_18 = local_18 + 1;
    }
    local_10 = dataBuffer_3554;
  }
  printLongLine(*(undefined8 *)local_10);
  free(local_10);
  return;
}


void goodG2B(void)

{
  int iVar1;
  ulong local_20;
  ulong local_18;
  undefined8 *local_10;
  
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_20 = 0;
    while (local_20 < 100) {
      local_10[local_20] = 5;
      local_20 = local_20 + 1;
    }
  }
  else {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = 5;
      local_18 = local_18 + 1;
    }
  }
  printLongLine(*local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_12_good(void)

{
  goodG2B();
  return;
}


void badSink(void)

{
  void *__ptr;
  
  __ptr = CWE590_Free_Memory_Not_on_Heap__free_struct_static_45_badData;
  printStructLine(CWE590_Free_Memory_Not_on_Heap__free_struct_static_45_badData);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_45_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3559 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3559 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_45_badData = dataBuffer_3559;
  badSink();
  return;
}


void goodG2BSink(void)

{
  void *__ptr;
  
  __ptr = CWE590_Free_Memory_Not_on_Heap__free_struct_static_45_goodG2BData;
  printStructLine(CWE590_Free_Memory_Not_on_Heap__free_struct_static_45_goodG2BData);
  free(__ptr);
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_45_goodG2BData = pvVar1;
  goodG2BSink();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_45_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_14_bad
               (undefined8 uParm1,undefined8 uParm2,long lParm3)

{
  undefined auVar1 [16];
  long lVar2;
  undefined *puVar3;
  undefined auStack40 [8];
  undefined8 *local_20;
  ulong local_18;
  undefined8 *local_10;
  
  puVar3 = auStack40;
  local_10 = (undefined8 *)0x0;
  if (globalFive == 5) {
    auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
    lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
    lParm3 = SUB168(auVar1 % ZEXT816(0x10),0);
    puVar3 = auStack40 + lVar2 * -0x10;
    local_20 = &local_20 + lVar2 * 0x1ffffffffffffffe;
    local_18 = 0;
    while (local_10 = local_20, local_18 < 100) {
      *(undefined4 *)(local_20 + local_18) = 1;
      lParm3 = local_18 * 8;
      *(undefined4 *)((long)local_20 + lParm3 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  *(undefined8 *)(puVar3 + -8) = 0x40e5d4;
  printStructLine(local_10,uParm2,lParm3);
  *(undefined8 *)(puVar3 + -8) = 0x40e5e0;
  free(local_10,puVar3[-8]);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_06_bad(void)

{
  ulong local_18;
  
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(dataBuffer_3555 + local_18 * 8) = 1;
    *(undefined4 *)(dataBuffer_3555 + local_18 * 8 + 4) = 1;
    local_18 = local_18 + 1;
  }
  printStructLine(dataBuffer_3555);
  free(dataBuffer_3555);
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040e7f0) */

void goodG2B1(void)

{
  void *__ptr;
  ulong local_18;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)__ptr + local_18 * 8) = 1;
      *(undefined4 *)((long)__ptr + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
  printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B2(void)

{
  void *__ptr;
  ulong local_18;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)__ptr + local_18 * 8) = 1;
      *(undefined4 *)((long)__ptr + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
  printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_06_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_09_bad(void)

{
  ulong local_18;
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)(dataBuffer_3554 + local_18 * 8) = 1;
      *(undefined4 *)(dataBuffer_3554 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    local_10 = dataBuffer_3554;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FALSE == 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_TRUE != 0) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_09_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_52c_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_52c_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_17_bad(void)

{
  ulong local_20;
  undefined1 *local_18;
  int local_c;
  
  local_18 = (undefined1 *)0x0;
  local_c = 0;
  while (local_c < 1) {
    local_20 = 0;
    while (local_20 < 100) {
      *(undefined8 *)(dataBuffer_3555 + local_20 * 8) = 5;
      local_20 = local_20 + 1;
    }
    local_18 = dataBuffer_3555;
    local_c = local_c + 1;
  }
  printLongLine(*(undefined8 *)local_18);
  free(local_18);
  return;
}


void goodG2B(void)

{
  ulong local_20;
  undefined8 *local_18;
  int local_c;
  
  local_18 = (undefined8 *)0x0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      printLongLine(*local_18);
      free(local_18);
      return;
    }
    local_18 = (undefined8 *)malloc(800);
    if (local_18 == (undefined8 *)0x0) break;
    local_20 = 0;
    while (local_20 < 100) {
      local_18[local_20] = 5;
      local_20 = local_20 + 1;
    }
    local_c = local_c + 1;
  }
  printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_17_good(void)

{
  goodG2B();
  return;
}


void badSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_44_bad(undefined8 uParm1,undefined8 uParm2)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3559 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  badSink(dataBuffer_3559,uParm2,dataBuffer_3559);
  return;
}


void goodG2BSink(undefined8 *puParm1)

{
  printLongLine(*puParm1);
  free(puParm1);
  return;
}


void goodG2B(undefined8 uParm1,undefined8 uParm2)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)((long)pvVar1 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  goodG2BSink(pvVar1,uParm2,pvVar1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_44_good(void)

{
  goodG2B();
  return;
}


/* WARNING: Type propagation algorithm not settling */

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_64_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *apuStack48 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(local_20 + local_10) = 1;
    lVar3 = local_10 * 8;
    *(undefined4 *)((long)local_20 + lVar3 + 4) = 1;
    local_10 = local_10 + 1;
  }
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40ee97;
  local_18 = local_20;
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_64b_badSink(&local_20,uParm2,lVar3);
  return;
}


void goodG2B(void)

{
  void *local_20;
  void *local_18;
  ulong local_10;
  
  local_20 = (void *)0x0;
  local_18 = malloc(800);
  if (local_18 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)local_18 + local_10 * 8) = 1;
    *(undefined4 *)((long)local_18 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  local_20 = local_18;
  CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_64b_goodG2BSink(&local_20);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_64_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_13_bad(void)

{
  undefined4 local_338 [200];
  ulong local_18;
  undefined4 *local_10;
  
  local_10 = (undefined4 *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_18 = 0;
    while (local_18 < 100) {
      local_338[local_18 * 2] = 1;
      local_338[local_18 * 2 + 1] = 1;
      local_18 = local_18 + 1;
    }
    local_10 = local_338;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (GLOBAL_CONST_FIVE == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_13_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_02_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3554 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  printLongLine(dataBuffer_3554._0_8_);
  free(dataBuffer_3554);
  return;
}


void goodG2B1(void)

{
  undefined8 *__ptr;
  ulong local_10;
  
  __ptr = (undefined8 *)malloc(800);
  if (__ptr == (undefined8 *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    __ptr[local_10] = 5;
    local_10 = local_10 + 1;
  }
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  undefined8 *__ptr;
  ulong local_10;
  
  __ptr = (undefined8 *)malloc(800);
  if (__ptr == (undefined8 *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    __ptr[local_10] = 5;
    local_10 = local_10 + 1;
  }
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_02_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_63b_badSink(void **ppvParm1)

{
  void *__ptr;
  
  __ptr = *ppvParm1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_63b_goodG2BSink(void **ppvParm1)

{
  void *__ptr;
  
  __ptr = *ppvParm1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_68b_badSink(void)

{
  undefined8 *__ptr;
  
  __ptr = CWE590_Free_Memory_Not_on_Heap__free_long_static_68_badData;
  printLongLine(*CWE590_Free_Memory_Not_on_Heap__free_long_static_68_badData);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_68b_goodG2BSink(void)

{
  undefined8 *__ptr;
  
  __ptr = CWE590_Free_Memory_Not_on_Heap__free_long_static_68_goodG2BData;
  printLongLine(*CWE590_Free_Memory_Not_on_Heap__free_long_static_68_goodG2BData);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54e_badSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_54e_goodG2BSink(void *pvParm1)

{
  printStructLine(pvParm1);
  free(pvParm1);
  return;
}


/* WARNING: Type propagation algorithm not settling */

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_04_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *apuStack48 [2];
  undefined8 *local_20;
  ulong local_18;
  undefined8 *local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_20 = (undefined8 *)(&local_20 + lVar2 * 0x1ffffffffffffffe);
  local_18 = 0;
  while (local_18 < 100) {
    *(undefined4 *)(local_20 + local_18) = 1;
    lVar3 = local_18 * 8;
    *(undefined4 *)((long)local_20 + lVar3 + 4) = 1;
    local_18 = local_18 + 1;
  }
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40f48b;
  local_10 = local_20;
  printStructLine(local_20,uParm2,lVar3);
  apuStack48[lVar2 * 0x1ffffffffffffffe] = 0x40f497;
  free(local_10,*(undefined *)(apuStack48 + lVar2 * 0x1ffffffffffffffe));
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040f4b2) */

void goodG2B1(void)

{
  void *__ptr;
  ulong local_18;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)__ptr + local_18 * 8) = 1;
      *(undefined4 *)((long)__ptr + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
  printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void goodG2B2(void)

{
  void *__ptr;
  ulong local_18;
  
  __ptr = malloc(800);
  if (__ptr != (void *)0x0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)__ptr + local_18 * 8) = 1;
      *(undefined4 *)((long)__ptr + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    printStructLine(__ptr);
    free(__ptr);
    return;
  }
  printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
  exit(1);
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_04_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Type propagation algorithm not settling */

void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_31_bad(undefined8 uParm1,undefined8 uParm2)

{
  undefined auVar1 [16];
  long lVar2;
  long lVar3;
  undefined8 *apuStack64 [2];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x33e);
  lVar2 = SUB168(auVar1 / ZEXT816(0x10),0);
  lVar3 = SUB168(auVar1 % ZEXT816(0x10),0);
  local_30 = (undefined8 *)(&local_30 + lVar2 * 0x1ffffffffffffffe);
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(local_30 + local_10) = 1;
    lVar3 = local_10 * 8;
    *(undefined4 *)((long)local_30 + lVar3 + 4) = 1;
    local_10 = local_10 + 1;
  }
  apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x40f6cc;
  local_28 = local_30;
  local_20 = local_30;
  local_18 = local_30;
  printStructLine(local_30,uParm2,lVar3);
  apuStack64[lVar2 * 0x1ffffffffffffffe] = 0x40f6d8;
  free(local_30,*(undefined *)(apuStack64 + lVar2 * 0x1ffffffffffffffe));
  return;
}


void goodG2B(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_alloca_31_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_64b_badSink(void **ppvParm1)

{
  void *__ptr;
  
  __ptr = *ppvParm1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_64b_goodG2BSink(void **ppvParm1)

{
  void *__ptr;
  
  __ptr = *ppvParm1;
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_10_bad(void)

{
  ulong local_18;
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0x0;
  if (globalTrue != 0) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined8 *)(dataBuffer_3554 + local_18 * 8) = 5;
      local_18 = local_18 + 1;
    }
    local_10 = dataBuffer_3554;
  }
  printLongLine(*(undefined8 *)local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalFalse == 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = 5;
      local_18 = local_18 + 1;
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  printLongLine(*local_10);
  free(local_10);
  return;
}


void goodG2B2(void)

{
  ulong local_18;
  undefined8 *local_10;
  
  local_10 = (undefined8 *)0x0;
  if (globalTrue != 0) {
    local_10 = (undefined8 *)malloc(800);
    if (local_10 == (undefined8 *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      local_10[local_18] = 5;
      local_18 = local_18 + 1;
    }
  }
  printLongLine(*local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_10_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_68_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3557 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3557 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_68_badData = dataBuffer_3557;
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_68b_badSink();
  return;
}


void goodG2B(void)

{
  void *pvVar1;
  ulong local_10;
  
  pvVar1 = malloc(800);
  if (pvVar1 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)pvVar1 + local_10 * 8) = 1;
    *(undefined4 *)((long)pvVar1 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_68_goodG2BData = pvVar1;
  CWE590_Free_Memory_Not_on_Heap__free_struct_static_68b_goodG2BSink();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_68_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_14_bad(void)

{
  ulong local_18;
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0x0;
  if (globalFive == 5) {
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)(dataBuffer_3554 + local_18 * 8) = 1;
      *(undefined4 *)(dataBuffer_3554 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
    local_10 = dataBuffer_3554;
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void goodG2B1(void)

{
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
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
  ulong local_18;
  void *local_10;
  
  local_10 = (void *)0x0;
  if (globalFive == 5) {
    local_10 = malloc(800);
    if (local_10 == (void *)0x0) {
      printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    local_18 = 0;
    while (local_18 < 100) {
      *(undefined4 *)((long)local_10 + local_18 * 8) = 1;
      *(undefined4 *)((long)local_10 + local_18 * 8 + 4) = 1;
      local_18 = local_18 + 1;
    }
  }
  printStructLine(local_10);
  free(local_10);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_14_good(void)

{
  goodG2B1();
  goodG2B2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE590_Free_Memory_Not_on_Heap__free_struct_static_32_bad(void)

{
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  ulong local_10;
  
  local_18 = &local_38;
  local_20 = &local_38;
  local_38 = 0;
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)(dataBuffer_3557 + local_10 * 8) = 1;
    *(undefined4 *)(dataBuffer_3557 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  local_28 = dataBuffer_3557;
  local_30 = dataBuffer_3557;
  printStructLine(dataBuffer_3557);
  free(local_30);
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodG2B(void)

{
  void *local_40;
  void *local_38;
  void *local_30;
  void *local_28;
  void **local_20;
  void **local_18;
  ulong local_10;
  
  local_18 = &local_40;
  local_20 = &local_40;
  local_40 = (void *)0x0;
  local_28 = (void *)0x0;
  local_30 = malloc(800);
  if (local_30 == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)local_30 + local_10 * 8) = 1;
    *(undefined4 *)((long)local_30 + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  *local_18 = local_30;
  local_38 = *local_20;
  local_28 = local_30;
  printStructLine(local_38);
  free(local_38);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_static_32_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_54c_badSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_long_static_54d_badSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_54c_goodG2BSink(undefined8 uParm1)

{
  CWE590_Free_Memory_Not_on_Heap__free_long_static_54d_goodG2BSink(uParm1);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_01_bad(void)

{
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined8 *)(dataBuffer_3554 + local_10 * 8) = 5;
    local_10 = local_10 + 1;
  }
  printLongLine(dataBuffer_3554._0_8_);
  free(dataBuffer_3554);
  return;
}


void goodG2B(void)

{
  undefined8 *__ptr;
  ulong local_10;
  
  __ptr = (undefined8 *)malloc(800);
  if (__ptr == (undefined8 *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    __ptr[local_10] = 5;
    local_10 = local_10 + 1;
  }
  printLongLine(*__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_long_static_01_good(void)

{
  goodG2B();
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_03_bad(void)

{
  undefined4 local_338 [200];
  undefined4 *local_18;
  ulong local_10;
  
  local_10 = 0;
  while (local_10 < 100) {
    local_338[local_10 * 2] = 1;
    local_338[local_10 * 2 + 1] = 1;
    local_10 = local_10 + 1;
  }
  local_18 = local_338;
  printStructLine(local_18);
  free(local_18);
  return;
}


void goodG2B1(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void goodG2B2(void)

{
  void *__ptr;
  ulong local_10;
  
  __ptr = malloc(800);
  if (__ptr == (void *)0x0) {
    printLine("malloc() failed");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  local_10 = 0;
  while (local_10 < 100) {
    *(undefined4 *)((long)__ptr + local_10 * 8) = 1;
    *(undefined4 *)((long)__ptr + local_10 * 8 + 4) = 1;
    local_10 = local_10 + 1;
  }
  printStructLine(__ptr);
  free(__ptr);
  return;
}


void CWE590_Free_Memory_Not_on_Heap__free_struct_declare_03_good(void)

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
  printf((char *)(double)fParm1,&DAT_0041610d);
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
  printf(pcParm1,&DAT_0041612a);
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
    __isoc99_sscanf(lVar1,&DAT_00416138,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_00416140,&local_14);
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

