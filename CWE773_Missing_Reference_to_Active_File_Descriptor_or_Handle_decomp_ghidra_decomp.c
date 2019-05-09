
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___00610ff8;
  if (PTR___gmon_start___00610ff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_004009a0(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_00611010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00611018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_00611020)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00611028)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_00611030)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00611038)();
  return pvVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

FILE * fopen(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = (FILE *)(*(code *)PTR_fopen_00611040)();
  return pFVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_00611048)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_00611050)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_00611058)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00611060)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_00611068)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_00611070)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_00611078)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_00611080)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_00611088)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_00611090)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_00611098)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_fclose_006110a0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_006110a8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_006110b0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_006110b8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_006110c0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_006110c8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_006110d0)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___00610ff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400b87) */
/* WARNING: Removing unreachable block (ram,0x00400b91) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400bc4) */
/* WARNING: Removing unreachable block (ram,0x00400bce) */

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


/* WARNING: Removing unreachable block (ram,0x00400c14) */
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
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_01_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_01_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_05_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_05_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_65_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_65_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_10_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_10_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_68_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_68_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_16_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_16_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_53_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_53_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_34_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_34_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_21_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_21_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_18_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_18_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_41_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_41_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_64_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_64_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_52_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_52_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_07_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_07_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_08_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_08_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_03_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_03_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_66_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_66_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_44_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_44_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_03_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_03_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_61_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_61_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_04_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_04_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_31_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_31_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_42_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_42_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_44_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_44_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_06_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_06_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_01_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_01_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_06_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_06_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_10_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_10_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_41_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_41_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_67_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_67_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_31_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_31_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_09_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_09_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_63_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_63_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_45_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_45_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_11_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_11_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_32_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_32_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_02_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_02_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_12_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_12_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_07_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_07_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_13_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_13_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_45_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_45_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_65_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_65_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_16_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_16_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_42_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_42_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_51_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_51_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_32_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_32_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_66_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_66_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_17_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_17_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_12_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_12_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_63_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_63_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_21_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_21_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_61_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_61_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_18_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_18_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_68_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_68_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_52_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_52_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_51_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_51_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_64_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_64_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_14_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_14_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_34_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_34_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_08_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_08_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_22_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_22_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_17_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_17_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_02_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_02_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_13_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_13_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_11_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_11_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_04_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_04_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_05_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_05_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_09_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_09_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_14_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_14_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_67_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_67_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_15_good();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_15_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_15_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_15_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_53_good();"
           );
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_53_good();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_01_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_01_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_05_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_05_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_65_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_65_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_10_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_10_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_68_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_68_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_16_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_16_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_53_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_53_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_34_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_34_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_21_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_21_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_18_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_18_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_41_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_41_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_64_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_64_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_52_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_52_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_07_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_07_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_08_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_08_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_03_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_03_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_66_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_66_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_44_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_44_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_03_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_03_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_61_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_61_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_04_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_04_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_31_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_31_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_42_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_42_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_44_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_44_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_06_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_06_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_01_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_01_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_06_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_06_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_10_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_10_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_41_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_41_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_67_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_67_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_31_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_31_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_09_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_09_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_63_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_63_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_45_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_45_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_11_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_11_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_32_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_32_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_02_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_02_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_12_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_12_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_07_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_07_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_13_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_13_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_45_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_45_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_65_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_65_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_16_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_16_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_42_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_42_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_51_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_51_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_32_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_32_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_66_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_66_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_17_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_17_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_12_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_12_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_63_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_63_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_21_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_21_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_61_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_61_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_18_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_18_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_68_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_68_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_52_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_52_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_51_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_51_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_64_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_64_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_14_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_14_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_34_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_34_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_08_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_08_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_22_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_22_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_17_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_17_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_02_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_02_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_13_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_13_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_11_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_11_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_04_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_04_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_05_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_05_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_09_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_09_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_14_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_14_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_67_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_67_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_15_bad();");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_15_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_15_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_15_bad();
  printLine("Calling CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_53_bad();")
  ;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_53_bad();
  return 0;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_64_bad(void)

{
  FILE *local_10;
  
  local_10 = (FILE *)0x0;
  local_10 = fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_64b_badSink(&local_10);
  return;
}


void goodB2G(void)

{
  FILE *local_10;
  
  local_10 = (FILE *)0x0;
  local_10 = fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_64b_goodB2GSink(&local_10);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_64_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_67_bad(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_67b_badSink((ulong)uVar1);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_67b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_67_good(void)

{
  goodB2G();
  return;
}


void badSink(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_41_bad(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  badSink(pFVar1);
  return;
}


void goodB2GSink(FILE *pFParm1)

{
  FILE *__stream;
  
  if (pFParm1 != (FILE *)0x0) {
    fclose(pFParm1);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void goodB2G(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  goodB2GSink(pFVar1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_41_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_04_bad(void)

{
  FILE *__stream;
  
  fopen("BadSource_fopen.txt","w+");
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00401ab1) */

void goodB2G1(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void goodB2G2(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_04_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_65b_badSink(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_65b_goodB2GSink
               (FILE *pFParm1)

{
  FILE *__stream;
  
  if (pFParm1 != (FILE *)0x0) {
    fclose(pFParm1);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_67_bad(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_67b_badSink(pFVar1);
  return;
}


void goodB2G(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_67b_goodB2GSink(pFVar1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_67_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_53c_badSink
               (undefined8 uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_53d_badSink(uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_53c_goodB2GSink
               (undefined8 uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_53d_goodB2GSink(uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_15_bad(void)

{
  int __fd;
  
  open("BadSource_open.txt",0x42,0x180);
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void goodB2G1(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void goodB2G2(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_15_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_badSink(void)

{
  FILE *__stream;
  
  if (CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_badGlobal != 0) {
    __stream = fopen("BadSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_goodB2G1Sink
               (FILE *pFParm1)

{
  FILE *__stream;
  
  if (CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_goodB2G1Global == 0) {
    if (pFParm1 != (FILE *)0x0) {
      fclose(pFParm1);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_goodB2G2Sink
               (FILE *pFParm1)

{
  FILE *__stream;
  
  if (CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_goodB2G2Global != 0) {
    if (pFParm1 != (FILE *)0x0) {
      fclose(pFParm1);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


ulong badSource(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  return (ulong)uVar1;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_42_bad(void)

{
  int __fd;
  
  badSource(0xffffffff);
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


ulong goodB2GSource(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  return (ulong)uVar1;
}


void goodB2G(void)

{
  int __fd;
  
  __fd = goodB2GSource();
  if (__fd != -1) {
    close(__fd);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_42_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_52_bad(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_52b_badSink((ulong)uVar1);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_52b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_52_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_16_bad(void)

{
  int __fd;
  
  open("BadSource_open.txt",0x42,0x180);
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void goodB2G(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_16_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_65_bad(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_65b_badSink(pFVar1);
  return;
}


void goodB2G(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_65b_goodB2GSink(pFVar1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_65_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_22_bad(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_22_badGlobal = 1;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_22_badSink((ulong)uVar1);
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_22_goodB2G1Global = 0;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_22_goodB2G1Sink((ulong)uVar1);
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_22_goodB2G2Global = 1;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_22_goodB2G2Sink((ulong)uVar1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_22_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_68b_badSink(void)

{
  int __fd;
  
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_68b_goodB2GSink(void)

{
  int __fd;
  
  if (CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_68_badDataForGoodSink != -1
     ) {
    close(CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_68_badDataForGoodSink);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_15_bad(void)

{
  FILE *__stream;
  
  fopen("BadSource_fopen.txt","w+");
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void goodB2G1(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void goodB2G2(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_15_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_09_bad(void)

{
  int __fd;
  
  open("BadSource_open.txt",0x42,0x180);
  if (GLOBAL_CONST_TRUE != 0) {
    __fd = open("BadSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void goodB2G1(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (GLOBAL_CONST_FALSE == 0) {
    if (__fd != -1) {
      close(__fd);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (GLOBAL_CONST_TRUE != 0) {
    if (__fd != -1) {
      close(__fd);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_09_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_06_bad(void)

{
  int __fd;
  
  open("BadSource_open.txt",0x42,0x180);
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00402656) */

void goodB2G1(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void goodB2G2(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_06_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


FILE * badSource(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  return pFVar1;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_42_bad(void)

{
  FILE *__stream;
  
  badSource(0);
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


FILE * goodB2GSource(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  return pFVar1;
}


void goodB2G(void)

{
  FILE *__stream;
  
  __stream = (FILE *)goodB2GSource(0);
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_42_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_17_bad(void)

{
  FILE *__stream;
  int local_c;
  
  fopen("BadSource_fopen.txt","w+");
  local_c = 0;
  while (local_c < 1) {
    __stream = fopen("BadSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    local_c = local_c + 1;
  }
  return;
}


void goodB2G(void)

{
  FILE *local_18;
  int local_c;
  
  local_18 = fopen("BadSource_fopen.txt","w+");
  local_c = 0;
  while (local_c < 1) {
    if (local_18 != (FILE *)0x0) {
      fclose(local_18);
    }
    local_18 = fopen("GoodSink_fopen.txt","w+");
    if (local_18 != (FILE *)0x0) {
      fclose(local_18);
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_17_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54d_badSink(uint uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54e_badSink((ulong)uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54d_goodB2GSink(uint uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54e_goodB2GSink((ulong)uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_bad(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_badGlobal = 1;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_badSink(pFVar1);
  return;
}


void goodB2G1(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_goodB2G1Global = 0;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_goodB2G1Sink(pFVar1);
  return;
}


void goodB2G2(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_goodB2G2Global = 1;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_goodB2G2Sink(pFVar1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_22_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_68b_badSink(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_68b_goodB2GSink(void)

{
  FILE *__stream;
  
  if (CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_68_badDataForGoodSink !=
      (FILE *)0x0) {
    fclose(CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_68_badDataForGoodSink
          );
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_05_bad(void)

{
  int __fd;
  
  open("BadSource_open.txt",0x42,0x180);
  if (staticTrue != 0) {
    __fd = open("BadSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void goodB2G1(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (staticFalse == 0) {
    if (__fd != -1) {
      close(__fd);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (staticTrue != 0) {
    if (__fd != -1) {
      close(__fd);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_05_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void badSink(void)

{
  int __fd;
  
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_41_bad(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  badSink((ulong)uVar1);
  return;
}


void goodB2GSink(int iParm1)

{
  int __fd;
  
  if (iParm1 != -1) {
    close(iParm1);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  goodB2GSink((ulong)uVar1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_41_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_53b_badSink(uint uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_53c_badSink((ulong)uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_53b_goodB2GSink(uint uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_53c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_13_bad(void)

{
  int __fd;
  
  open("BadSource_open.txt",0x42,0x180);
  if (GLOBAL_CONST_FIVE == 5) {
    __fd = open("BadSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void goodB2G1(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (GLOBAL_CONST_FIVE == 5) {
    if (__fd != -1) {
      close(__fd);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (GLOBAL_CONST_FIVE == 5) {
    if (__fd != -1) {
      close(__fd);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_13_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_52c_badSink(void)

{
  int __fd;
  
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_52c_goodB2GSink(int iParm1)

{
  int __fd;
  
  if (iParm1 != -1) {
    close(iParm1);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_32_bad(void)

{
  FILE *local_30;
  FILE *local_28;
  FILE *local_20;
  FILE **local_18;
  FILE **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (FILE *)0x0;
  local_20 = (FILE *)0x0;
  local_20 = fopen("BadSource_fopen.txt","w+");
  *local_10 = local_20;
  local_28 = *local_18;
  local_28 = fopen("BadSink_fopen.txt","w+");
  if (local_28 != (FILE *)0x0) {
    fclose(local_28);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  FILE *local_30;
  FILE *local_28;
  FILE *local_20;
  FILE **local_18;
  FILE **local_10;
  
  local_10 = &local_30;
  local_18 = &local_30;
  local_30 = (FILE *)0x0;
  local_20 = (FILE *)0x0;
  local_20 = fopen("BadSource_fopen.txt","w+");
  *local_10 = local_20;
  local_28 = *local_18;
  if (local_28 != (FILE *)0x0) {
    fclose(local_28);
  }
  local_28 = fopen("GoodSink_fopen.txt","w+");
  if (local_28 != (FILE *)0x0) {
    fclose(local_28);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_32_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_63b_badSink(void)

{
  int __fd;
  
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_63b_goodB2GSink
               (int *piParm1)

{
  int __fd;
  
  if (*piParm1 != -1) {
    close(*piParm1);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


ulong CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_61b_badSource(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  return (ulong)uVar1;
}


ulong CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_61b_goodB2GSource(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  return (ulong)uVar1;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54d_badSink
               (undefined8 uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54e_badSink(uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54d_goodB2GSink
               (undefined8 uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54e_goodB2GSink(uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_34_bad(void)

{
  int __fd;
  
  open("BadSource_open.txt",0x42,0x180);
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void goodB2G(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_34_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_05_bad(void)

{
  FILE *__stream;
  
  fopen("BadSource_fopen.txt","w+");
  if (staticTrue != 0) {
    __stream = fopen("BadSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void goodB2G1(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (staticFalse == 0) {
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (staticTrue != 0) {
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_05_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_66b_badSink(void)

{
  int __fd;
  
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_66b_goodB2GSink(long lParm1)

{
  int __fd;
  
  if (*(int *)(lParm1 + 8) != -1) {
    close(*(int *)(lParm1 + 8));
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_53b_badSink
               (undefined8 uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_53c_badSink(uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_53b_goodB2GSink
               (undefined8 uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_53c_goodB2GSink(uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_68_bad(void)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_68_badDataForBadSink =
       open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_68b_badSink();
  return;
}


void goodB2G(void)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_68_badDataForGoodSink =
       open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_68b_goodB2GSink();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_68_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_65_bad(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_65b_badSink((ulong)uVar1);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_65b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_65_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_63b_badSink(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_63b_goodB2GSink
               (FILE **ppFParm1)

{
  FILE *__stream;
  
  if (*ppFParm1 != (FILE *)0x0) {
    fclose(*ppFParm1);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_53_bad(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_53b_badSink((ulong)uVar1);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_53b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_53_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_34_bad(void)

{
  FILE *__stream;
  
  fopen("BadSource_fopen.txt","w+");
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void goodB2G(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_34_good(void)

{
  goodB2G();
  return;
}


void badSink(void)

{
  int __fd;
  
  if (badStatic != 0) {
    __fd = open("BadSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_21_bad(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  badStatic = 1;
  badSink((ulong)uVar1);
  return;
}


void goodB2G1Sink(int iParm1)

{
  int __fd;
  
  if (goodB2G1Static == 0) {
    if (iParm1 != -1) {
      close(iParm1);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  goodB2G1Static = 0;
  goodB2G1Sink((ulong)uVar1);
  return;
}


void goodB2G2Sink(int iParm1)

{
  int __fd;
  
  if (goodB2G2Static != 0) {
    if (iParm1 != -1) {
      close(iParm1);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void goodB2G2(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  goodB2G2Static = 1;
  goodB2G2Sink((ulong)uVar1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_21_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_03_bad(void)

{
  int __fd;
  
  open("BadSource_open.txt",0x42,0x180);
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void goodB2G1(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void goodB2G2(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_03_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_66b_badSink(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_66b_goodB2GSink
               (long lParm1)

{
  FILE *__stream;
  
  if (*(FILE **)(lParm1 + 0x10) != (FILE *)0x0) {
    fclose(*(FILE **)(lParm1 + 0x10));
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_63_bad(void)

{
  int local_c;
  
  local_c = -1;
  local_c = open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_63b_badSink(&local_c);
  return;
}


void goodB2G(void)

{
  int local_c;
  
  local_c = -1;
  local_c = open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_63b_goodB2GSink(&local_c);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_63_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_22_badSink(void)

{
  int __fd;
  
  if (CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_22_badGlobal != 0) {
    __fd = open("BadSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_22_goodB2G1Sink(int iParm1)

{
  int __fd;
  
  if (CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_22_goodB2G1Global == 0) {
    if (iParm1 != -1) {
      close(iParm1);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_22_goodB2G2Sink(int iParm1)

{
  int __fd;
  
  if (CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_22_goodB2G2Global != 0) {
    if (iParm1 != -1) {
      close(iParm1);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_18_bad(void)

{
  int __fd;
  
  open("BadSource_open.txt",0x42,0x180);
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void goodB2G(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_18_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_07_bad(void)

{
  int __fd;
  
  open("BadSource_open.txt",0x42,0x180);
  if (staticFive == 5) {
    __fd = open("BadSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void goodB2G1(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (staticFive == 5) {
    if (__fd != -1) {
      close(__fd);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (staticFive == 5) {
    if (__fd != -1) {
      close(__fd);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_07_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_53_bad(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_53b_badSink(pFVar1);
  return;
}


void goodB2G(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_53b_goodB2GSink(pFVar1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_53_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_52b_badSink
               (undefined8 uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_52c_badSink(uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_52b_goodB2GSink
               (undefined8 uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_52c_goodB2GSink(uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_66_bad(void)

{
  undefined local_28 [8];
  int local_20;
  int local_c;
  
  local_c = 0xffffffff;
  local_20 = open("BadSource_open.txt",0x42,0x180);
  local_c = local_20;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_66b_badSink(local_28);
  return;
}


void goodB2G(void)

{
  undefined local_28 [8];
  int local_20;
  int local_c;
  
  local_c = 0xffffffff;
  local_20 = open("BadSource_open.txt",0x42,0x180);
  local_c = local_20;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_66b_goodB2GSink(local_28);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_66_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_53d_badSink(void)

{
  int __fd;
  
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_53d_goodB2GSink(int iParm1)

{
  int __fd;
  
  if (iParm1 != -1) {
    close(iParm1);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void badSink(void)

{
  FILE *__stream;
  
  if (badStatic != 0) {
    __stream = fopen("BadSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_21_bad(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  badStatic = 1;
  badSink(pFVar1);
  return;
}


void goodB2G1Sink(FILE *pFParm1)

{
  FILE *__stream;
  
  if (goodB2G1Static == 0) {
    if (pFParm1 != (FILE *)0x0) {
      fclose(pFParm1);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G1(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  goodB2G1Static = 0;
  goodB2G1Sink(pFVar1);
  return;
}


void goodB2G2Sink(FILE *pFParm1)

{
  FILE *__stream;
  
  if (goodB2G2Static != 0) {
    if (pFParm1 != (FILE *)0x0) {
      fclose(pFParm1);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void goodB2G2(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  goodB2G2Static = 1;
  goodB2G2Sink(pFVar1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_21_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_03_bad(void)

{
  FILE *__stream;
  
  fopen("BadSource_fopen.txt","w+");
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void goodB2G1(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void goodB2G2(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_03_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_63_bad(void)

{
  FILE *local_10;
  
  local_10 = (FILE *)0x0;
  local_10 = fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_63b_badSink(&local_10);
  return;
}


void goodB2G(void)

{
  FILE *local_10;
  
  local_10 = (FILE *)0x0;
  local_10 = fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_63b_goodB2GSink(&local_10);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_63_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54c_badSink(uint uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54d_badSink((ulong)uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54c_goodB2GSink(uint uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_09_bad(void)

{
  FILE *__stream;
  
  fopen("BadSource_fopen.txt","w+");
  if (GLOBAL_CONST_TRUE != 0) {
    __stream = fopen("BadSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void goodB2G1(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (GLOBAL_CONST_FALSE == 0) {
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (GLOBAL_CONST_TRUE != 0) {
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_09_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_12_bad(void)

{
  int __fd;
  int iVar1;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (__fd != -1) {
      close(__fd);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  else {
    __fd = open("BadSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void goodB2G(void)

{
  int __fd;
  int iVar1;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (__fd != -1) {
      close(__fd);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  else {
    if (__fd != -1) {
      close(__fd);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_12_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_18_bad(void)

{
  FILE *__stream;
  
  fopen("BadSource_fopen.txt","w+");
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void goodB2G(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_18_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_52b_badSink(uint uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_52c_badSink((ulong)uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_52b_goodB2GSink(uint uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_52c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_66_bad(void)

{
  undefined local_38 [16];
  FILE *local_28;
  FILE *local_10;
  
  local_10 = (FILE *)0x0;
  local_28 = fopen("BadSource_fopen.txt","w+");
  local_10 = local_28;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_66b_badSink(local_38);
  return;
}


void goodB2G(void)

{
  undefined local_38 [16];
  FILE *local_28;
  FILE *local_10;
  
  local_10 = (FILE *)0x0;
  local_28 = fopen("BadSource_fopen.txt","w+");
  local_10 = local_28;
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_66b_goodB2GSink(local_38);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_66_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_65b_badSink(void)

{
  int __fd;
  
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_65b_goodB2GSink(int iParm1)

{
  int __fd;
  
  if (iParm1 != -1) {
    close(iParm1);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_53c_badSink(uint uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_53d_badSink((ulong)uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_53c_goodB2GSink(uint uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_53d_goodB2GSink((ulong)uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_07_bad(void)

{
  FILE *__stream;
  
  fopen("BadSource_fopen.txt","w+");
  if (staticFive == 5) {
    __stream = fopen("BadSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void goodB2G1(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (staticFive == 5) {
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (staticFive == 5) {
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_07_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_12_bad(void)

{
  int iVar1;
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  else {
    __stream = fopen("BadSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void goodB2G(void)

{
  int iVar1;
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  else {
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_12_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_17_bad(void)

{
  int __fd;
  int local_c;
  
  open("BadSource_open.txt",0x42,0x180);
  local_c = 0;
  while (local_c < 1) {
    __fd = open("BadSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
    local_c = local_c + 1;
  }
  return;
}


void goodB2G(void)

{
  int local_10;
  int local_c;
  
  local_10 = open("BadSource_open.txt",0x42,0x180);
  local_c = 0;
  while (local_c < 1) {
    if (local_10 != -1) {
      close(local_10);
    }
    local_10 = open("GoodSink_open.txt",0x42,0x180);
    if (local_10 != -1) {
      close(local_10);
    }
    local_c = local_c + 1;
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_17_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_31_bad(void)

{
  FILE *__stream;
  
  fopen("BadSource_fopen.txt","w+");
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void goodB2G(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_31_good(void)

{
  goodB2G();
  return;
}


void badSink(void)

{
  int __fd;
  
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_44_bad(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  badSink((ulong)uVar1);
  return;
}


void goodB2GSink(int iParm1)

{
  int __fd;
  
  if (iParm1 != -1) {
    close(iParm1);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void goodB2G(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  goodB2GSink((ulong)uVar1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_44_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_11_bad(void)

{
  int __fd;
  
  open("BadSource_open.txt",0x42,0x180);
  __fd = globalReturnsTrue();
  if (__fd != 0) {
    __fd = open("BadSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void goodB2G1(void)

{
  int __fd;
  int iVar1;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (__fd != -1) {
      close(__fd);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int __fd;
  int iVar1;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (__fd != -1) {
      close(__fd);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_11_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_02_bad(void)

{
  int __fd;
  
  open("BadSource_open.txt",0x42,0x180);
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void goodB2G1(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void goodB2G2(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_02_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_06_bad(void)

{
  FILE *__stream;
  
  fopen("BadSource_fopen.txt","w+");
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x00405185) */

void goodB2G1(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void goodB2G2(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_06_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_51b_badSink(void)

{
  int __fd;
  
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_51b_goodB2GSink(int iParm1)

{
  int __fd;
  
  if (iParm1 != -1) {
    close(iParm1);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_68_bad(void)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_68_badDataForBadSink =
       fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_68b_badSink();
  return;
}


void goodB2G(void)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_68_badDataForGoodSink =
       fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_68b_goodB2GSink();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_68_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_02_bad(void)

{
  FILE *__stream;
  
  fopen("BadSource_fopen.txt","w+");
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void goodB2G1(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void goodB2G2(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_02_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void badSink(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_44_bad(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  badSink(pFVar1);
  return;
}


void goodB2GSink(FILE *pFParm1)

{
  FILE *__stream;
  
  if (pFParm1 != (FILE *)0x0) {
    fclose(pFParm1);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void goodB2G(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  goodB2GSink(pFVar1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_44_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_10_bad(void)

{
  int __fd;
  
  open("BadSource_open.txt",0x42,0x180);
  if (globalTrue != 0) {
    __fd = open("BadSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void goodB2G1(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (globalFalse == 0) {
    if (__fd != -1) {
      close(__fd);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (globalTrue != 0) {
    if (__fd != -1) {
      close(__fd);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_10_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void badSink(void)

{
  int __fd;
  
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_45_bad(void)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_45_badData =
       open("BadSource_open.txt",0x42,0x180);
  badSink();
  return;
}


void goodB2GSink(void)

{
  int __fd;
  
  if (CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_45_goodB2GData != -1) {
    close(CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_45_goodB2GData);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void goodB2G(void)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_45_goodB2GData =
       open("BadSource_open.txt",0x42,0x180);
  goodB2GSink();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_45_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_11_bad(void)

{
  int iVar1;
  FILE *__stream;
  
  fopen("BadSource_fopen.txt","w+");
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    __stream = fopen("BadSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
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
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_11_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_52_bad(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_52b_badSink(pFVar1);
  return;
}


void goodB2G(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_52b_goodB2GSink(pFVar1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_52_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_51b_badSink(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_51b_goodB2GSink
               (FILE *pFParm1)

{
  FILE *__stream;
  
  if (pFParm1 != (FILE *)0x0) {
    fclose(pFParm1);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_51_bad(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_51b_badSink((ulong)uVar1);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_51b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_51_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_01_bad(void)

{
  int __fd;
  
  open("BadSource_open.txt",0x42,0x180);
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void goodB2G(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_01_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_16_bad(void)

{
  FILE *__stream;
  
  fopen("BadSource_fopen.txt","w+");
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void goodB2G(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_16_good(void)

{
  goodB2G();
  return;
}


FILE * CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_61b_badSource(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  return pFVar1;
}


FILE * CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_61b_goodB2GSource(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  return pFVar1;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_10_bad(void)

{
  FILE *__stream;
  
  fopen("BadSource_fopen.txt","w+");
  if (globalTrue != 0) {
    __stream = fopen("BadSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void goodB2G1(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (globalFalse == 0) {
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (globalTrue != 0) {
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_10_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54c_badSink
               (undefined8 uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54d_badSink(uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54c_goodB2GSink
               (undefined8 uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54d_goodB2GSink(uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_61_bad(void)

{
  int __fd;
  
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_61b_badSource(0xffffffff);
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void goodB2G(void)

{
  int __fd;
  
  __fd = CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_61b_goodB2GSource();
  if (__fd != -1) {
    close(__fd);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_61_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_01_bad(void)

{
  FILE *__stream;
  
  fopen("BadSource_fopen.txt","w+");
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void goodB2G(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_01_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_53d_badSink(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_53d_goodB2GSink
               (FILE *pFParm1)

{
  FILE *__stream;
  
  if (pFParm1 != (FILE *)0x0) {
    fclose(pFParm1);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_51_bad(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_51b_badSink(pFVar1);
  return;
}


void goodB2G(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_51b_goodB2GSink(pFVar1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_51_good(void)

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


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_08_bad(void)

{
  int __fd;
  
  open("BadSource_open.txt",0x42,0x180);
  __fd = staticReturnsTrue();
  if (__fd != 0) {
    __fd = open("BadSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void goodB2G1(void)

{
  int __fd;
  int iVar1;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (__fd != -1) {
      close(__fd);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int __fd;
  int iVar1;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (__fd != -1) {
      close(__fd);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_08_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void badSink(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_45_bad(void)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_45_badData =
       fopen("BadSource_fopen.txt","w+");
  badSink();
  return;
}


void goodB2GSink(void)

{
  FILE *__stream;
  
  if (CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_45_goodB2GData !=
      (FILE *)0x0) {
    fclose(CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_45_goodB2GData);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void goodB2G(void)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_45_goodB2GData =
       fopen("BadSource_fopen.txt","w+");
  goodB2GSink();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_45_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_61_bad(void)

{
  FILE *__stream;
  
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_61b_badSource(0);
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void goodB2G(void)

{
  FILE *__stream;
  
  __stream = (FILE *)
                     CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_61b_goodB2GSource
                               (0);
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_61_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54e_badSink(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54e_goodB2GSink
               (FILE *pFParm1)

{
  FILE *__stream;
  
  if (pFParm1 != (FILE *)0x0) {
    fclose(pFParm1);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
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


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_08_bad(void)

{
  int iVar1;
  FILE *__stream;
  
  fopen("BadSource_fopen.txt","w+");
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    __stream = fopen("BadSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void goodB2G1(void)

{
  int iVar1;
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
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
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_08_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54b_badSink(uint uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54c_badSink((ulong)uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54b_goodB2GSink(uint uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54c_goodB2GSink((ulong)uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54_bad(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54b_badSink(pFVar1);
  return;
}


void goodB2G(void)

{
  FILE *pFVar1;
  
  pFVar1 = fopen("BadSource_fopen.txt","w+");
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54b_goodB2GSink(pFVar1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_64b_badSink(void)

{
  int __fd;
  
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_64b_goodB2GSink
               (int *piParm1)

{
  int __fd;
  
  if (*piParm1 != -1) {
    close(*piParm1);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54e_badSink(void)

{
  int __fd;
  
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54e_goodB2GSink(int iParm1)

{
  int __fd;
  
  if (iParm1 != -1) {
    close(iParm1);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_14_bad(void)

{
  int __fd;
  
  open("BadSource_open.txt",0x42,0x180);
  if (globalFive == 5) {
    __fd = open("BadSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void goodB2G1(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (globalFive == 5) {
    if (__fd != -1) {
      close(__fd);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (globalFive == 5) {
    if (__fd != -1) {
      close(__fd);
    }
    __fd = open("GoodSink_open.txt",0x42,0x180);
    if (__fd != -1) {
      close(__fd);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_14_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_32_bad(void)

{
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = -1;
  local_1c = 0xffffffff;
  local_1c = open("BadSource_open.txt",0x42,0x180);
  *local_10 = local_1c;
  local_20 = *local_18;
  local_20 = open("BadSink_open.txt",0x42,0x180);
  if (local_20 != -1) {
    close(local_20);
  }
  return;
}


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void goodB2G(void)

{
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int *local_10;
  
  local_10 = &local_24;
  local_18 = &local_24;
  local_24 = -1;
  local_1c = 0xffffffff;
  local_1c = open("BadSource_open.txt",0x42,0x180);
  *local_10 = local_1c;
  local_20 = *local_18;
  if (local_20 != -1) {
    close(local_20);
  }
  local_20 = open("GoodSink_open.txt",0x42,0x180);
  if (local_20 != -1) {
    close(local_20);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_32_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54b_badSink
               (undefined8 uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54c_badSink(uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54b_goodB2GSink
               (undefined8 uParm1)

{
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_54c_goodB2GSink(uParm1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_64b_badSink(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_64b_goodB2GSink
               (FILE **ppFParm1)

{
  FILE *__stream;
  
  if (*ppFParm1 != (FILE *)0x0) {
    fclose(*ppFParm1);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_67b_badSink(void)

{
  int __fd;
  
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_67b_goodB2GSink(int iParm1)

{
  int __fd;
  
  if (iParm1 != -1) {
    close(iParm1);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54_bad(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54b_badSink((ulong)uVar1);
  return;
}


void goodB2G(void)

{
  uint uVar1;
  
  uVar1 = open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54b_goodB2GSink((ulong)uVar1);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_54_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_14_bad(void)

{
  FILE *__stream;
  
  fopen("BadSource_fopen.txt","w+");
  if (globalFive == 5) {
    __stream = fopen("BadSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void goodB2G1(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (globalFive == 5) {
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (globalFive == 5) {
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_14_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_13_bad(void)

{
  FILE *__stream;
  
  fopen("BadSource_fopen.txt","w+");
  if (GLOBAL_CONST_FIVE == 5) {
    __stream = fopen("BadSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void goodB2G1(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (GLOBAL_CONST_FIVE == 5) {
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  else {
    printLine("Benign, fixed string");
  }
  return;
}


void goodB2G2(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSource_fopen.txt","w+");
  if (GLOBAL_CONST_FIVE == 5) {
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
    __stream = fopen("GoodSink_fopen.txt","w+");
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
    }
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_13_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_52c_badSink(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_52c_goodB2GSink
               (FILE *pFParm1)

{
  FILE *__stream;
  
  if (pFParm1 != (FILE *)0x0) {
    fclose(pFParm1);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_64_bad(void)

{
  int local_c;
  
  local_c = -1;
  local_c = open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_64b_badSink(&local_c);
  return;
}


void goodB2G(void)

{
  int local_c;
  
  local_c = -1;
  local_c = open("BadSource_open.txt",0x42,0x180);
  CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_64b_goodB2GSink(&local_c);
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_64_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_04_bad(void)

{
  int __fd;
  
  open("BadSource_open.txt",0x42,0x180);
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


/* WARNING: Removing unreachable block (ram,0x0040701e) */

void goodB2G1(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void goodB2G2(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_04_good(void)

{
  goodB2G1();
  goodB2G2();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_31_bad(void)

{
  int __fd;
  
  open("BadSource_open.txt",0x42,0x180);
  __fd = open("BadSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void goodB2G(void)

{
  int __fd;
  
  __fd = open("BadSource_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  __fd = open("GoodSink_open.txt",0x42,0x180);
  if (__fd != -1) {
    close(__fd);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__open_31_good(void)

{
  goodB2G();
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_67b_badSink(void)

{
  FILE *__stream;
  
  __stream = fopen("BadSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
  return;
}


void CWE773_Missing_Reference_to_Active_File_Descriptor_or_Handle__fopen_67b_goodB2GSink
               (FILE *pFParm1)

{
  FILE *__stream;
  
  if (pFParm1 != (FILE *)0x0) {
    fclose(pFParm1);
  }
  __stream = fopen("GoodSink_fopen.txt","w+");
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
  }
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
  printf((char *)(double)fParm1,&DAT_0040c111);
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
  printf(pcParm1,&DAT_0040c12e);
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
    __isoc99_sscanf(lVar1,&DAT_0040c13c,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_0040c144,&local_14);
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

