
int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = (int)PTR___gmon_start___0060bff8;
  if (PTR___gmon_start___0060bff8 != (undefined *)0x0) {
    iVar1 = __gmon_start__();
  }
  return iVar1;
}


void FUN_00400ad0(void)

{
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_0060c010)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0060c018)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int close(int __fd)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_close_0060c020)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0060c028)();
  return iVar1;
}


void __isoc99_sscanf(void)

{
  (*(code *)PTR___isoc99_sscanf_0060c030)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0060c038)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0060c040)();
  return pvVar1;
}


void __libc_start_main(void)

{
  (*(code *)PTR___libc_start_main_0060c048)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_init(pthread_mutex_t *__mutex,pthread_mutexattr_t *__mutexattr)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_init_0060c050)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = (char *)(*(code *)PTR_fgets_0060c058)();
  return pcVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int iswxdigit(wint_t __wc)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_iswxdigit_0060c060)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0060c068)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strlen_0060c070)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_create(pthread_t *__newthread,pthread_attr_t *__attr,void *(*__start_routine)(void *),
                  void *__arg)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_create_0060c078)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ushort ** __ctype_b_loc(void)

{
  ushort **ppuVar1;
  
  ppuVar1 = (ushort **)(*(code *)PTR___ctype_b_loc_0060c088)();
  return ppuVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_join(pthread_t __th,void **__thread_return)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_join_0060c090)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void pthread_exit(void *__retval)

{
  (*(code *)PTR_pthread_exit_0060c098)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int wprintf(wchar_t *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wprintf_0060c0a0)();
  return iVar1;
}


void __isoc99_swscanf(void)

{
  (*(code *)PTR___isoc99_swscanf_0060c0a8)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

void srand(uint __seed)

{
  (*(code *)PTR_srand_0060c0b0)();
  return;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int access(char *__name,int __type)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_access_0060c0b8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_lock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_lock_0060c0c0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int rand(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_rand_0060c0c8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_destroy(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_destroy_0060c0d0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_write_0060c0d8)();
  return sVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int pthread_mutex_unlock(pthread_mutex_t *__mutex)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_pthread_mutex_unlock_0060c0e0)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

int open(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_open_0060c0e8)();
  return iVar1;
}


/* WARNING: Unknown calling convention yet parameter storage is locked */

time_t time(time_t *__timer)

{
  time_t tVar1;
  
  tVar1 = (*(code *)PTR_time_0060c0f0)();
  return tVar1;
}


void __gmon_start__(void)

{
  (*(code *)PTR___gmon_start___0060bff8)();
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


/* WARNING: Removing unreachable block (ram,0x00400cf7) */
/* WARNING: Removing unreachable block (ram,0x00400d01) */

void deregister_tm_clones(void)

{
  return;
}


/* WARNING: Removing unreachable block (ram,0x00400d34) */
/* WARNING: Removing unreachable block (ram,0x00400d3e) */

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


/* WARNING: Removing unreachable block (ram,0x00400d84) */
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
  printLine("Calling CWE367_TOC_TOU__access_10_good();");
  CWE367_TOC_TOU__access_10_good();
  printLine("Calling CWE367_TOC_TOU__stat_09_good();");
  CWE367_TOC_TOU__stat_09_good();
  printLine("Calling CWE367_TOC_TOU__stat_06_good();");
  CWE367_TOC_TOU__stat_06_good();
  printLine("Calling CWE367_TOC_TOU__stat_07_good();");
  CWE367_TOC_TOU__stat_07_good();
  printLine("Calling CWE367_TOC_TOU__access_13_good();");
  CWE367_TOC_TOU__access_13_good();
  printLine("Calling CWE367_TOC_TOU__access_05_good();");
  CWE367_TOC_TOU__access_05_good();
  printLine("Calling CWE367_TOC_TOU__access_06_good();");
  CWE367_TOC_TOU__access_06_good();
  printLine("Calling CWE367_TOC_TOU__stat_02_good();");
  CWE367_TOC_TOU__stat_02_good();
  printLine("Calling CWE367_TOC_TOU__access_11_good();");
  CWE367_TOC_TOU__access_11_good();
  printLine("Calling CWE367_TOC_TOU__access_02_good();");
  CWE367_TOC_TOU__access_02_good();
  printLine("Calling CWE367_TOC_TOU__access_07_good();");
  CWE367_TOC_TOU__access_07_good();
  printLine("Calling CWE367_TOC_TOU__stat_08_good();");
  CWE367_TOC_TOU__stat_08_good();
  printLine("Calling CWE367_TOC_TOU__stat_18_good();");
  CWE367_TOC_TOU__stat_18_good();
  printLine("Calling CWE367_TOC_TOU__access_08_good();");
  CWE367_TOC_TOU__access_08_good();
  printLine("Calling CWE367_TOC_TOU__stat_11_good();");
  CWE367_TOC_TOU__stat_11_good();
  printLine("Calling CWE367_TOC_TOU__stat_10_good();");
  CWE367_TOC_TOU__stat_10_good();
  printLine("Calling CWE367_TOC_TOU__access_09_good();");
  CWE367_TOC_TOU__access_09_good();
  printLine("Calling CWE367_TOC_TOU__stat_15_good();");
  CWE367_TOC_TOU__stat_15_good();
  printLine("Calling CWE367_TOC_TOU__stat_03_good();");
  CWE367_TOC_TOU__stat_03_good();
  printLine("Calling CWE367_TOC_TOU__access_16_good();");
  CWE367_TOC_TOU__access_16_good();
  printLine("Calling CWE367_TOC_TOU__access_03_good();");
  CWE367_TOC_TOU__access_03_good();
  printLine("Calling CWE367_TOC_TOU__access_01_good();");
  CWE367_TOC_TOU__access_01_good();
  printLine("Calling CWE367_TOC_TOU__stat_01_good();");
  CWE367_TOC_TOU__stat_01_good();
  printLine("Calling CWE367_TOC_TOU__stat_12_good();");
  CWE367_TOC_TOU__stat_12_good();
  printLine("Calling CWE367_TOC_TOU__access_18_good();");
  CWE367_TOC_TOU__access_18_good();
  printLine("Calling CWE367_TOC_TOU__access_17_good();");
  CWE367_TOC_TOU__access_17_good();
  printLine("Calling CWE367_TOC_TOU__access_14_good();");
  CWE367_TOC_TOU__access_14_good();
  printLine("Calling CWE367_TOC_TOU__stat_04_good();");
  CWE367_TOC_TOU__stat_04_good();
  printLine("Calling CWE367_TOC_TOU__stat_17_good();");
  CWE367_TOC_TOU__stat_17_good();
  printLine("Calling CWE367_TOC_TOU__stat_14_good();");
  CWE367_TOC_TOU__stat_14_good();
  printLine("Calling CWE367_TOC_TOU__access_15_good();");
  CWE367_TOC_TOU__access_15_good();
  printLine("Calling CWE367_TOC_TOU__access_04_good();");
  CWE367_TOC_TOU__access_04_good();
  printLine("Calling CWE367_TOC_TOU__stat_16_good();");
  CWE367_TOC_TOU__stat_16_good();
  printLine("Calling CWE367_TOC_TOU__stat_05_good();");
  CWE367_TOC_TOU__stat_05_good();
  printLine("Calling CWE367_TOC_TOU__stat_13_good();");
  CWE367_TOC_TOU__stat_13_good();
  printLine("Calling CWE367_TOC_TOU__access_12_good();");
  CWE367_TOC_TOU__access_12_good();
  printLine("Calling CWE367_TOC_TOU__access_10_bad();");
  CWE367_TOC_TOU__access_10_bad();
  printLine("Calling CWE367_TOC_TOU__stat_09_bad();");
  CWE367_TOC_TOU__stat_09_bad();
  printLine("Calling CWE367_TOC_TOU__stat_06_bad();");
  CWE367_TOC_TOU__stat_06_bad();
  printLine("Calling CWE367_TOC_TOU__stat_07_bad();");
  CWE367_TOC_TOU__stat_07_bad();
  printLine("Calling CWE367_TOC_TOU__access_13_bad();");
  CWE367_TOC_TOU__access_13_bad();
  printLine("Calling CWE367_TOC_TOU__access_05_bad();");
  CWE367_TOC_TOU__access_05_bad();
  printLine("Calling CWE367_TOC_TOU__access_06_bad();");
  CWE367_TOC_TOU__access_06_bad();
  printLine("Calling CWE367_TOC_TOU__stat_02_bad();");
  CWE367_TOC_TOU__stat_02_bad();
  printLine("Calling CWE367_TOC_TOU__access_11_bad();");
  CWE367_TOC_TOU__access_11_bad();
  printLine("Calling CWE367_TOC_TOU__access_02_bad();");
  CWE367_TOC_TOU__access_02_bad();
  printLine("Calling CWE367_TOC_TOU__access_07_bad();");
  CWE367_TOC_TOU__access_07_bad();
  printLine("Calling CWE367_TOC_TOU__stat_08_bad();");
  CWE367_TOC_TOU__stat_08_bad();
  printLine("Calling CWE367_TOC_TOU__stat_18_bad();");
  CWE367_TOC_TOU__stat_18_bad();
  printLine("Calling CWE367_TOC_TOU__access_08_bad();");
  CWE367_TOC_TOU__access_08_bad();
  printLine("Calling CWE367_TOC_TOU__stat_11_bad();");
  CWE367_TOC_TOU__stat_11_bad();
  printLine("Calling CWE367_TOC_TOU__stat_10_bad();");
  CWE367_TOC_TOU__stat_10_bad();
  printLine("Calling CWE367_TOC_TOU__access_09_bad();");
  CWE367_TOC_TOU__access_09_bad();
  printLine("Calling CWE367_TOC_TOU__stat_15_bad();");
  CWE367_TOC_TOU__stat_15_bad();
  printLine("Calling CWE367_TOC_TOU__stat_03_bad();");
  CWE367_TOC_TOU__stat_03_bad();
  printLine("Calling CWE367_TOC_TOU__access_16_bad();");
  CWE367_TOC_TOU__access_16_bad();
  printLine("Calling CWE367_TOC_TOU__access_03_bad();");
  CWE367_TOC_TOU__access_03_bad();
  printLine("Calling CWE367_TOC_TOU__access_01_bad();");
  CWE367_TOC_TOU__access_01_bad();
  printLine("Calling CWE367_TOC_TOU__stat_01_bad();");
  CWE367_TOC_TOU__stat_01_bad();
  printLine("Calling CWE367_TOC_TOU__stat_12_bad();");
  CWE367_TOC_TOU__stat_12_bad();
  printLine("Calling CWE367_TOC_TOU__access_18_bad();");
  CWE367_TOC_TOU__access_18_bad();
  printLine("Calling CWE367_TOC_TOU__access_17_bad();");
  CWE367_TOC_TOU__access_17_bad();
  printLine("Calling CWE367_TOC_TOU__access_14_bad();");
  CWE367_TOC_TOU__access_14_bad();
  printLine("Calling CWE367_TOC_TOU__stat_04_bad();");
  CWE367_TOC_TOU__stat_04_bad();
  printLine("Calling CWE367_TOC_TOU__stat_17_bad();");
  CWE367_TOC_TOU__stat_17_bad();
  printLine("Calling CWE367_TOC_TOU__stat_14_bad();");
  CWE367_TOC_TOU__stat_14_bad();
  printLine("Calling CWE367_TOC_TOU__access_15_bad();");
  CWE367_TOC_TOU__access_15_bad();
  printLine("Calling CWE367_TOC_TOU__access_04_bad();");
  CWE367_TOC_TOU__access_04_bad();
  printLine("Calling CWE367_TOC_TOU__stat_16_bad();");
  CWE367_TOC_TOU__stat_16_bad();
  printLine("Calling CWE367_TOC_TOU__stat_05_bad();");
  CWE367_TOC_TOU__stat_05_bad();
  printLine("Calling CWE367_TOC_TOU__stat_13_bad();");
  CWE367_TOC_TOU__stat_13_bad();
  printLine("Calling CWE367_TOC_TOU__access_12_bad();");
  CWE367_TOC_TOU__access_12_bad();
  return 0;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__stat_05_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack288;
  ulong local_118;
  undefined8 local_110 [13];
  stat local_a8;
  int local_c;
  
  if (staticTrue != 0) {
    local_118 = 0;
    lVar5 = 0xb;
    puVar6 = local_110;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack288 = 0x4013de;
    pcVar2 = fgets((char *)&local_118,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack288 = 0x4013ed;
      printLine("fgets() failed");
      local_118 = local_118 & 0xffffffffffffff00;
    }
    if ((char)local_118 != 0) {
      uStack288 = 0x401411;
      sVar3 = strlen((char *)&local_118);
      *(undefined *)((long)&uStack288 + sVar3 + 7) = 0;
    }
    uStack288 = 0x401436;
    iVar1 = stat((char *)&local_118,&local_a8);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x401445;
      exit(1);
    }
    uStack288 = 0x40145e;
    local_c = open((char *)&local_118,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x401471;
      exit(1);
    }
    uStack288 = 0x401485;
    sVar4 = write(local_c,"Bad Sink...",0xb);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x401495;
      exit(1);
    }
    if (local_c != -1) {
      uStack288 = 0x4014a5;
      close(local_c);
    }
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (staticFalse == 0) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x40150c;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x40151b;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x401536;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x401555;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x401568;
      exit(1);
    }
    uStack128 = 0x40157c;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40158c;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x40159c;
      close(local_c);
    }
  }
  else {
    uStack128 = 0x4014c3;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (staticTrue != 0) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x4015f8;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x401607;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x401622;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x401641;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x401654;
      exit(1);
    }
    uStack128 = 0x401668;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x401678;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x401688;
      close(local_c);
    }
  }
  return;
}


void CWE367_TOC_TOU__stat_05_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__access_04_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar5 = 0xb;
  puVar6 = local_70;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x4016fd;
  pcVar2 = fgets((char *)&local_78,100,stdin);
  if (pcVar2 == (char *)0x0) {
    uStack128 = 0x40170c;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x401727;
    sVar3 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
  }
  uStack128 = 0x401741;
  iVar1 = access((char *)&local_78,2);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x401750;
    exit(1);
  }
  uStack128 = 0x401766;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x401779;
    exit(1);
  }
  uStack128 = 0x40178d;
  sVar4 = write(local_c,"Bad Sink...",0xb);
  if (sVar4 != -1) {
    if (local_c != -1) {
      uStack128 = 0x4017ad;
      close(local_c);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x40179d;
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x004017c0) */
/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x401813;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x401822;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x40183d;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x40185c;
  local_c = open((char *)&local_78,2);
  if (local_c != -1) {
    uStack128 = 0x401883;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 != -1) {
      if (local_c != -1) {
        uStack128 = 0x4018a3;
        close(local_c);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x401893;
    exit(1);
  }
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x40186f;
  exit(1);
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x4018fe;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x40190d;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x401928;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x401947;
  local_c = open((char *)&local_78,2);
  if (local_c != -1) {
    uStack128 = 0x40196e;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 != -1) {
      if (local_c != -1) {
        uStack128 = 0x40198e;
        close(local_c);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40197e;
    exit(1);
  }
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x40195a;
  exit(1);
}


void CWE367_TOC_TOU__access_04_good(void)

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


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__stat_08_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 uStack288;
  ulong local_118;
  undefined8 local_110 [13];
  stat local_a8;
  int local_c;
  
  bVar7 = 0;
  uStack288 = 0x4019d5;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_118 = 0;
    lVar5 = 0xb;
    puVar6 = local_110;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack288 = 0x401a2a;
    pcVar2 = fgets((char *)&local_118,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack288 = 0x401a39;
      printLine("fgets() failed");
      local_118 = local_118 & 0xffffffffffffff00;
    }
    if ((char)local_118 != 0) {
      uStack288 = 0x401a5d;
      sVar3 = strlen((char *)&local_118);
      *(undefined *)((long)&uStack288 + sVar3 + 7) = 0;
    }
    uStack288 = 0x401a82;
    iVar1 = stat((char *)&local_118,&local_a8);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x401a91;
      exit(1);
    }
    uStack288 = 0x401aaa;
    local_c = open((char *)&local_118,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x401abd;
      exit(1);
    }
    uStack288 = 0x401ad1;
    sVar4 = write(local_c,"Bad Sink...",0xb);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x401ae1;
      exit(1);
    }
    if (local_c != -1) {
      uStack288 = 0x401af1;
      close(local_c);
    }
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  bVar7 = 0;
  uStack128 = 0x401b05;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x401b5c;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x401b6b;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x401b86;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x401ba5;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x401bb8;
      exit(1);
    }
    uStack128 = 0x401bcc;
    sVar4 = write(local_c,"Good Sink...",0xc);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x401bdc;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x401bec;
      close(local_c);
    }
  }
  else {
    uStack128 = 0x401b13;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  bVar7 = 0;
  uStack128 = 0x401c00;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x401c4c;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x401c5b;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x401c76;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x401c95;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x401ca8;
      exit(1);
    }
    uStack128 = 0x401cbc;
    sVar4 = write(local_c,"Good Sink...",0xc);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x401ccc;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x401cdc;
      close(local_c);
    }
  }
  return;
}


void CWE367_TOC_TOU__stat_08_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__access_12_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_10;
  int local_c;
  
  bVar7 = 0;
  uStack128 = 0x401d0a;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_10 = 0xffffffff;
    uStack128 = 0x401e54;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x401e63;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x401e7e;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x401e9d;
    local_10 = open((char *)&local_78,2);
    if (local_10 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x401eb0;
      exit(1);
    }
    uStack128 = 0x401ec4;
    sVar4 = write(local_10,"Good Sink...",0xc);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x401ed4;
      exit(1);
    }
    if (local_10 != -1) {
      uStack128 = 0x401ee4;
      close(local_10);
    }
  }
  else {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x401d56;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x401d65;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x401d80;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x401d9a;
    iVar1 = access((char *)&local_78,2);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x401da9;
      exit(1);
    }
    uStack128 = 0x401dbf;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x401dd2;
      exit(1);
    }
    uStack128 = 0x401de6;
    sVar4 = write(local_c,"Bad Sink...",0xb);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x401df6;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x401e06;
      close(local_c);
    }
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_10;
  int local_c;
  
  bVar7 = 0;
  uStack128 = 0x401ef8;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_10 = 0xffffffff;
    uStack128 = 0x402022;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x402031;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x40204c;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x40206b;
    local_10 = open((char *)&local_78,2);
    if (local_10 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40207e;
      exit(1);
    }
    uStack128 = 0x402092;
    sVar4 = write(local_10,"Good Sink...",0xc);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x4020a2;
      exit(1);
    }
    if (local_10 != -1) {
      uStack128 = 0x4020b2;
      close(local_10);
    }
  }
  else {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x401f44;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x401f53;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x401f6e;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x401f8d;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x401fa0;
      exit(1);
    }
    uStack128 = 0x401fb4;
    sVar4 = write(local_c,"Good Sink...",0xc);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x401fc4;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x401fd4;
      close(local_c);
    }
  }
  return;
}


void CWE367_TOC_TOU__access_12_good(void)

{
  good1();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__stat_06_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack288;
  ulong local_118;
  undefined8 local_110 [13];
  stat local_a8;
  int local_c;
  
  local_118 = 0;
  lVar5 = 0xb;
  puVar6 = local_110;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_c = 0xffffffff;
  uStack288 = 0x40212a;
  pcVar2 = fgets((char *)&local_118,100,stdin);
  if (pcVar2 == (char *)0x0) {
    uStack288 = 0x402139;
    printLine("fgets() failed");
    local_118 = local_118 & 0xffffffffffffff00;
  }
  if ((char)local_118 != 0) {
    uStack288 = 0x40215d;
    sVar3 = strlen((char *)&local_118);
    *(undefined *)((long)&uStack288 + sVar3 + 7) = 0;
  }
  uStack288 = 0x402182;
  iVar1 = stat((char *)&local_118,&local_a8);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x402191;
    exit(1);
  }
  uStack288 = 0x4021aa;
  local_c = open((char *)&local_118,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x4021bd;
    exit(1);
  }
  uStack288 = 0x4021d1;
  sVar4 = write(local_c,"Bad Sink...",0xb);
  if (sVar4 != -1) {
    if (local_c != -1) {
      uStack288 = 0x4021f1;
      close(local_c);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  uStack288 = 0x4021e1;
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x00402205) */
/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x402258;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x402267;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x402282;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x4022a1;
  local_c = open((char *)&local_78,2);
  if (local_c != -1) {
    uStack128 = 0x4022c8;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 != -1) {
      if (local_c != -1) {
        uStack128 = 0x4022e8;
        close(local_c);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4022d8;
    exit(1);
  }
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x4022b4;
  exit(1);
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x402344;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x402353;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x40236e;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x40238d;
  local_c = open((char *)&local_78,2);
  if (local_c != -1) {
    uStack128 = 0x4023b4;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 != -1) {
      if (local_c != -1) {
        uStack128 = 0x4023d4;
        close(local_c);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4023c4;
    exit(1);
  }
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x4023a0;
  exit(1);
}


void CWE367_TOC_TOU__stat_06_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__access_14_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x40244b;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x40245a;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x402475;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x40248f;
    iVar1 = access((char *)&local_78,2);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40249e;
      exit(1);
    }
    uStack128 = 0x4024b4;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x4024c7;
      exit(1);
    }
    uStack128 = 0x4024db;
    sVar4 = write(local_c,"Bad Sink...",0xb);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x4024eb;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x4024fb;
      close(local_c);
    }
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x402563;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x402572;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x40258d;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x4025ac;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x4025bf;
      exit(1);
    }
    uStack128 = 0x4025d3;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x4025e3;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x4025f3;
      close(local_c);
    }
  }
  else {
    uStack128 = 0x40251a;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x402650;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x40265f;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x40267a;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x402699;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x4026ac;
      exit(1);
    }
    uStack128 = 0x4026c0;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x4026d0;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x4026e0;
      close(local_c);
    }
  }
  return;
}


void CWE367_TOC_TOU__access_14_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__stat_13_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack288;
  ulong local_118;
  undefined8 local_110 [13];
  stat local_a8;
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_118 = 0;
    lVar5 = 0xb;
    puVar6 = local_110;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack288 = 0x402763;
    pcVar2 = fgets((char *)&local_118,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack288 = 0x402772;
      printLine("fgets() failed");
      local_118 = local_118 & 0xffffffffffffff00;
    }
    if ((char)local_118 != 0) {
      uStack288 = 0x402796;
      sVar3 = strlen((char *)&local_118);
      *(undefined *)((long)&uStack288 + sVar3 + 7) = 0;
    }
    uStack288 = 0x4027bb;
    iVar1 = stat((char *)&local_118,&local_a8);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x4027ca;
      exit(1);
    }
    uStack288 = 0x4027e3;
    local_c = open((char *)&local_118,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x4027f6;
      exit(1);
    }
    uStack288 = 0x40280a;
    sVar4 = write(local_c,"Bad Sink...",0xb);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x40281a;
      exit(1);
    }
    if (local_c != -1) {
      uStack288 = 0x40282a;
      close(local_c);
    }
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x402892;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x4028a1;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x4028bc;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x4028db;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x4028ee;
      exit(1);
    }
    uStack128 = 0x402902;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x402912;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x402922;
      close(local_c);
    }
  }
  else {
    uStack128 = 0x402849;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x40297f;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x40298e;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x4029a9;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x4029c8;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x4029db;
      exit(1);
    }
    uStack128 = 0x4029ef;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x4029ff;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x402a0f;
      close(local_c);
    }
  }
  return;
}


void CWE367_TOC_TOU__stat_13_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__stat_17_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 uStack288;
  ulong local_118;
  undefined8 local_110 [13];
  stat local_a8;
  int local_10;
  int local_c;
  
  bVar7 = 0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    local_118 = 0;
    lVar5 = 0xb;
    puVar6 = local_110;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_10 = 0xffffffff;
    uStack288 = 0x402a8f;
    pcVar2 = fgets((char *)&local_118,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack288 = 0x402a9e;
      printLine("fgets() failed");
      local_118 = local_118 & 0xffffffffffffff00;
    }
    if ((char)local_118 != 0) {
      uStack288 = 0x402ac2;
      sVar3 = strlen((char *)&local_118);
      *(undefined *)((long)&uStack288 + sVar3 + 7) = 0;
    }
    uStack288 = 0x402ae7;
    iVar1 = stat((char *)&local_118,&local_a8);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x402af6;
      exit(1);
    }
    uStack288 = 0x402b0f;
    local_10 = open((char *)&local_118,2);
    if (local_10 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x402b22;
      exit(1);
    }
    uStack288 = 0x402b36;
    sVar4 = write(local_10,"Bad Sink...",0xb);
    if (sVar4 == -1) break;
    if (local_10 != -1) {
      uStack288 = 0x402b56;
      close(local_10);
    }
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  uStack288 = 0x402b46;
  exit(1);
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_10;
  int local_c;
  
  bVar6 = 0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + (ulong)bVar6 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_10 = 0xffffffff;
    uStack128 = 0x402bbe;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x402bcd;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x402be8;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x402c07;
    local_10 = open((char *)&local_78,2);
    if (local_10 == -1) break;
    uStack128 = 0x402c2e;
    sVar3 = write(local_10,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x402c3e;
      exit(1);
    }
    if (local_10 != -1) {
      uStack128 = 0x402c4e;
      close(local_10);
    }
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x402c1a;
  exit(1);
}


void CWE367_TOC_TOU__stat_17_good(void)

{
  good1();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__access_09_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x402cc8;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x402cd7;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x402cf2;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x402d0c;
    iVar1 = access((char *)&local_78,2);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x402d1b;
      exit(1);
    }
    uStack128 = 0x402d31;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x402d44;
      exit(1);
    }
    uStack128 = 0x402d58;
    sVar4 = write(local_c,"Bad Sink...",0xb);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x402d68;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x402d78;
      close(local_c);
    }
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x402ddf;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x402dee;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x402e09;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x402e28;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x402e3b;
      exit(1);
    }
    uStack128 = 0x402e4f;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x402e5f;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x402e6f;
      close(local_c);
    }
  }
  else {
    uStack128 = 0x402d96;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x402ecb;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x402eda;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x402ef5;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x402f14;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x402f27;
      exit(1);
    }
    uStack128 = 0x402f3b;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x402f4b;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x402f5b;
      close(local_c);
    }
  }
  return;
}


void CWE367_TOC_TOU__access_09_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__stat_04_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack288;
  ulong local_118;
  undefined8 local_110 [13];
  stat local_a8;
  int local_c;
  
  local_118 = 0;
  lVar5 = 0xb;
  puVar6 = local_110;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_c = 0xffffffff;
  uStack288 = 0x402fdc;
  pcVar2 = fgets((char *)&local_118,100,stdin);
  if (pcVar2 == (char *)0x0) {
    uStack288 = 0x402feb;
    printLine("fgets() failed");
    local_118 = local_118 & 0xffffffffffffff00;
  }
  if ((char)local_118 != 0) {
    uStack288 = 0x40300f;
    sVar3 = strlen((char *)&local_118);
    *(undefined *)((long)&uStack288 + sVar3 + 7) = 0;
  }
  uStack288 = 0x403034;
  iVar1 = stat((char *)&local_118,&local_a8);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x403043;
    exit(1);
  }
  uStack288 = 0x40305c;
  local_c = open((char *)&local_118,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x40306f;
    exit(1);
  }
  uStack288 = 0x403083;
  sVar4 = write(local_c,"Bad Sink...",0xb);
  if (sVar4 != -1) {
    if (local_c != -1) {
      uStack288 = 0x4030a3;
      close(local_c);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  uStack288 = 0x403093;
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x004030b6) */
/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x403109;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x403118;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x403133;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x403152;
  local_c = open((char *)&local_78,2);
  if (local_c != -1) {
    uStack128 = 0x403179;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 != -1) {
      if (local_c != -1) {
        uStack128 = 0x403199;
        close(local_c);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x403189;
    exit(1);
  }
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x403165;
  exit(1);
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x4031f4;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x403203;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x40321e;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x40323d;
  local_c = open((char *)&local_78,2);
  if (local_c != -1) {
    uStack128 = 0x403264;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 != -1) {
      if (local_c != -1) {
        uStack128 = 0x403284;
        close(local_c);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x403274;
    exit(1);
  }
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x403250;
  exit(1);
}


void CWE367_TOC_TOU__stat_04_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__access_07_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x4032fb;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x40330a;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x403325;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x40333f;
    iVar1 = access((char *)&local_78,2);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40334e;
      exit(1);
    }
    uStack128 = 0x403364;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x403377;
      exit(1);
    }
    uStack128 = 0x40338b;
    sVar4 = write(local_c,"Bad Sink...",0xb);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40339b;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x4033ab;
      close(local_c);
    }
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x403413;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x403422;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x40343d;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x40345c;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40346f;
      exit(1);
    }
    uStack128 = 0x403483;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x403493;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x4034a3;
      close(local_c);
    }
  }
  else {
    uStack128 = 0x4033ca;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x403500;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x40350f;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x40352a;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x403549;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40355c;
      exit(1);
    }
    uStack128 = 0x403570;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x403580;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x403590;
      close(local_c);
    }
  }
  return;
}


void CWE367_TOC_TOU__access_07_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__access_13_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x403607;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x403616;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x403631;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x40364b;
    iVar1 = access((char *)&local_78,2);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40365a;
      exit(1);
    }
    uStack128 = 0x403670;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x403683;
      exit(1);
    }
    uStack128 = 0x403697;
    sVar4 = write(local_c,"Bad Sink...",0xb);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x4036a7;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x4036b7;
      close(local_c);
    }
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x40371f;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x40372e;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x403749;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x403768;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40377b;
      exit(1);
    }
    uStack128 = 0x40378f;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40379f;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x4037af;
      close(local_c);
    }
  }
  else {
    uStack128 = 0x4036d6;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (GLOBAL_CONST_FIVE == 5) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x40380c;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x40381b;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x403836;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x403855;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x403868;
      exit(1);
    }
    uStack128 = 0x40387c;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40388c;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x40389c;
      close(local_c);
    }
  }
  return;
}


void CWE367_TOC_TOU__access_13_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__stat_18_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack288;
  ulong local_118;
  undefined8 local_110 [13];
  stat local_a8;
  int local_c;
  
  local_118 = 0;
  lVar5 = 0xb;
  puVar6 = local_110;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_c = 0xffffffff;
  uStack288 = 0x403911;
  pcVar2 = fgets((char *)&local_118,100,stdin);
  if (pcVar2 == (char *)0x0) {
    uStack288 = 0x403920;
    printLine("fgets() failed");
    local_118 = local_118 & 0xffffffffffffff00;
  }
  if ((char)local_118 != 0) {
    uStack288 = 0x403944;
    sVar3 = strlen((char *)&local_118);
    *(undefined *)((long)&uStack288 + sVar3 + 7) = 0;
  }
  uStack288 = 0x403969;
  iVar1 = stat((char *)&local_118,&local_a8);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x403978;
    exit(1);
  }
  uStack288 = 0x403991;
  local_c = open((char *)&local_118,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x4039a4;
    exit(1);
  }
  uStack288 = 0x4039b8;
  sVar4 = write(local_c,"Bad Sink...",0xb);
  if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x4039c8;
    exit(1);
  }
  if (local_c != -1) {
    uStack288 = 0x4039d8;
    close(local_c);
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x403a27;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x403a36;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x403a51;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x403a70;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x403a83;
    exit(1);
  }
  uStack128 = 0x403a97;
  sVar3 = write(local_c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x403aa7;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x403ab7;
    close(local_c);
  }
  return;
}


void CWE367_TOC_TOU__stat_18_good(void)

{
  good1();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__stat_11_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 uStack288;
  ulong local_118;
  undefined8 local_110 [13];
  stat local_a8;
  int local_c;
  
  bVar7 = 0;
  uStack288 = 0x403ade;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_118 = 0;
    lVar5 = 0xb;
    puVar6 = local_110;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack288 = 0x403b33;
    pcVar2 = fgets((char *)&local_118,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack288 = 0x403b42;
      printLine("fgets() failed");
      local_118 = local_118 & 0xffffffffffffff00;
    }
    if ((char)local_118 != 0) {
      uStack288 = 0x403b66;
      sVar3 = strlen((char *)&local_118);
      *(undefined *)((long)&uStack288 + sVar3 + 7) = 0;
    }
    uStack288 = 0x403b8b;
    iVar1 = stat((char *)&local_118,&local_a8);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x403b9a;
      exit(1);
    }
    uStack288 = 0x403bb3;
    local_c = open((char *)&local_118,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x403bc6;
      exit(1);
    }
    uStack288 = 0x403bda;
    sVar4 = write(local_c,"Bad Sink...",0xb);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x403bea;
      exit(1);
    }
    if (local_c != -1) {
      uStack288 = 0x403bfa;
      close(local_c);
    }
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  bVar7 = 0;
  uStack128 = 0x403c0e;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x403c65;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x403c74;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x403c8f;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x403cae;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x403cc1;
      exit(1);
    }
    uStack128 = 0x403cd5;
    sVar4 = write(local_c,"Good Sink...",0xc);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x403ce5;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x403cf5;
      close(local_c);
    }
  }
  else {
    uStack128 = 0x403c1c;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  bVar7 = 0;
  uStack128 = 0x403d09;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x403d55;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x403d64;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x403d7f;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x403d9e;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x403db1;
      exit(1);
    }
    uStack128 = 0x403dc5;
    sVar4 = write(local_c,"Good Sink...",0xc);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x403dd5;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x403de5;
      close(local_c);
    }
  }
  return;
}


void CWE367_TOC_TOU__stat_11_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__stat_02_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack288;
  ulong local_118;
  undefined8 local_110 [13];
  stat local_a8;
  int local_c;
  
  local_118 = 0;
  lVar5 = 0xb;
  puVar6 = local_110;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_c = 0xffffffff;
  uStack288 = 0x403e59;
  pcVar2 = fgets((char *)&local_118,100,stdin);
  if (pcVar2 == (char *)0x0) {
    uStack288 = 0x403e68;
    printLine("fgets() failed");
    local_118 = local_118 & 0xffffffffffffff00;
  }
  if ((char)local_118 != 0) {
    uStack288 = 0x403e8c;
    sVar3 = strlen((char *)&local_118);
    *(undefined *)((long)&uStack288 + sVar3 + 7) = 0;
  }
  uStack288 = 0x403eb1;
  iVar1 = stat((char *)&local_118,&local_a8);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x403ec0;
    exit(1);
  }
  uStack288 = 0x403ed9;
  local_c = open((char *)&local_118,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x403eec;
    exit(1);
  }
  uStack288 = 0x403f00;
  sVar4 = write(local_c,"Bad Sink...",0xb);
  if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x403f10;
    exit(1);
  }
  if (local_c != -1) {
    uStack288 = 0x403f20;
    close(local_c);
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x403f6e;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x403f7d;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x403f98;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x403fb7;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x403fca;
    exit(1);
  }
  uStack128 = 0x403fde;
  sVar3 = write(local_c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x403fee;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x403ffe;
    close(local_c);
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x40404c;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x40405b;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x404076;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x404095;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4040a8;
    exit(1);
  }
  uStack128 = 0x4040bc;
  sVar3 = write(local_c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4040cc;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x4040dc;
    close(local_c);
  }
  return;
}


void CWE367_TOC_TOU__stat_02_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__access_17_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_10;
  int local_c;
  
  bVar7 = 0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_10 = 0xffffffff;
    uStack128 = 0x404150;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x40415f;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x40417a;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x404194;
    iVar1 = access((char *)&local_78,2);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x4041a3;
      exit(1);
    }
    uStack128 = 0x4041b9;
    local_10 = open((char *)&local_78,2);
    if (local_10 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x4041cc;
      exit(1);
    }
    uStack128 = 0x4041e0;
    sVar4 = write(local_10,"Bad Sink...",0xb);
    if (sVar4 == -1) break;
    if (local_10 != -1) {
      uStack128 = 0x404200;
      close(local_10);
    }
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x4041f0;
  exit(1);
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_10;
  int local_c;
  
  bVar6 = 0;
  local_c = 0;
  while( true ) {
    if (0 < local_c) {
      return;
    }
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + (ulong)bVar6 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_10 = 0xffffffff;
    uStack128 = 0x404268;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x404277;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x404292;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x4042b1;
    local_10 = open((char *)&local_78,2);
    if (local_10 == -1) break;
    uStack128 = 0x4042d8;
    sVar3 = write(local_10,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x4042e8;
      exit(1);
    }
    if (local_10 != -1) {
      uStack128 = 0x4042f8;
      close(local_10);
    }
    local_c = local_c + 1;
  }
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x4042c4;
  exit(1);
}


void CWE367_TOC_TOU__access_17_good(void)

{
  good1();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__access_11_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  bVar7 = 0;
  uStack128 = 0x40432a;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x404376;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x404385;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x4043a0;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x4043ba;
    iVar1 = access((char *)&local_78,2);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x4043c9;
      exit(1);
    }
    uStack128 = 0x4043df;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x4043f2;
      exit(1);
    }
    uStack128 = 0x404406;
    sVar4 = write(local_c,"Bad Sink...",0xb);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x404416;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x404426;
      close(local_c);
    }
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  bVar7 = 0;
  uStack128 = 0x40443a;
  iVar1 = globalReturnsFalse();
  if (iVar1 == 0) {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x404491;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x4044a0;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x4044bb;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x4044da;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x4044ed;
      exit(1);
    }
    uStack128 = 0x404501;
    sVar4 = write(local_c,"Good Sink...",0xc);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x404511;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x404521;
      close(local_c);
    }
  }
  else {
    uStack128 = 0x404448;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  bVar7 = 0;
  uStack128 = 0x404535;
  iVar1 = globalReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x404581;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x404590;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x4045ab;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x4045ca;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x4045dd;
      exit(1);
    }
    uStack128 = 0x4045f1;
    sVar4 = write(local_c,"Good Sink...",0xc);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x404601;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x404611;
      close(local_c);
    }
  }
  return;
}


void CWE367_TOC_TOU__access_11_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__access_02_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar5 = 0xb;
  puVar6 = local_70;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x404679;
  pcVar2 = fgets((char *)&local_78,100,stdin);
  if (pcVar2 == (char *)0x0) {
    uStack128 = 0x404688;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x4046a3;
    sVar3 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
  }
  uStack128 = 0x4046bd;
  iVar1 = access((char *)&local_78,2);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4046cc;
    exit(1);
  }
  uStack128 = 0x4046e2;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4046f5;
    exit(1);
  }
  uStack128 = 0x404709;
  sVar4 = write(local_c,"Bad Sink...",0xb);
  if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x404719;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x404729;
    close(local_c);
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x404777;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x404786;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x4047a1;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x4047c0;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4047d3;
    exit(1);
  }
  uStack128 = 0x4047e7;
  sVar3 = write(local_c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4047f7;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x404807;
    close(local_c);
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x404855;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x404864;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x40487f;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x40489e;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4048b1;
    exit(1);
  }
  uStack128 = 0x4048c5;
  sVar3 = write(local_c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x4048d5;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x4048e5;
    close(local_c);
  }
  return;
}


void CWE367_TOC_TOU__access_02_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__stat_12_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  __ino_t *p_Var7;
  byte bVar8;
  undefined8 uStack288;
  ulong local_118;
  undefined8 local_110 [12];
  char cStack169;
  stat local_a8;
  int local_10;
  int local_c;
  
  bVar8 = 0;
  uStack288 = 0x404916;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_a8.st_dev = 0;
    lVar5 = 0xb;
    p_Var7 = &local_a8.st_ino;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *p_Var7 = 0;
      p_Var7 = p_Var7 + (ulong)bVar8 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)p_Var7 = 0;
    local_10 = 0xffffffff;
    uStack288 = 0x404a89;
    pcVar2 = fgets((char *)&local_a8,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack288 = 0x404a98;
      printLine("fgets() failed");
      local_a8.st_dev = local_a8.st_dev & 0xffffffffffffff00;
    }
    if ((char)local_a8.st_dev != 0) {
      uStack288 = 0x404abc;
      sVar3 = strlen((char *)&local_a8);
      (&cStack169)[sVar3] = 0;
    }
    uStack288 = 0x404ae1;
    local_10 = open((char *)&local_a8,2);
    if (local_10 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x404af4;
      exit(1);
    }
    uStack288 = 0x404b08;
    sVar4 = write(local_10,"Good Sink...",0xc);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x404b18;
      exit(1);
    }
    if (local_10 != -1) {
      uStack288 = 0x404b28;
      close(local_10);
    }
  }
  else {
    local_118 = 0;
    lVar5 = 0xb;
    puVar6 = local_110;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar8 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack288 = 0x40496b;
    pcVar2 = fgets((char *)&local_118,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack288 = 0x40497a;
      printLine("fgets() failed");
      local_118 = local_118 & 0xffffffffffffff00;
    }
    if ((char)local_118 != 0) {
      uStack288 = 0x40499e;
      sVar3 = strlen((char *)&local_118);
      *(undefined *)((long)&uStack288 + sVar3 + 7) = 0;
    }
    uStack288 = 0x4049c3;
    iVar1 = stat((char *)&local_118,&local_a8);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x4049d2;
      exit(1);
    }
    uStack288 = 0x4049eb;
    local_c = open((char *)&local_118,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x4049fe;
      exit(1);
    }
    uStack288 = 0x404a12;
    sVar4 = write(local_c,"Bad Sink...",0xb);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x404a22;
      exit(1);
    }
    if (local_c != -1) {
      uStack288 = 0x404a32;
      close(local_c);
    }
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_10;
  int local_c;
  
  bVar7 = 0;
  uStack128 = 0x404b3c;
  iVar1 = globalReturnsTrueOrFalse();
  if (iVar1 == 0) {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_10 = 0xffffffff;
    uStack128 = 0x404c66;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x404c75;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x404c90;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x404caf;
    local_10 = open((char *)&local_78,2);
    if (local_10 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x404cc2;
      exit(1);
    }
    uStack128 = 0x404cd6;
    sVar4 = write(local_10,"Good Sink...",0xc);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x404ce6;
      exit(1);
    }
    if (local_10 != -1) {
      uStack128 = 0x404cf6;
      close(local_10);
    }
  }
  else {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x404b88;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x404b97;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x404bb2;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x404bd1;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x404be4;
      exit(1);
    }
    uStack128 = 0x404bf8;
    sVar4 = write(local_c,"Good Sink...",0xc);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x404c08;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x404c18;
      close(local_c);
    }
  }
  return;
}


void CWE367_TOC_TOU__stat_12_good(void)

{
  good1();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__stat_07_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack288;
  ulong local_118;
  undefined8 local_110 [13];
  stat local_a8;
  int local_c;
  
  if (staticFive == 5) {
    local_118 = 0;
    lVar5 = 0xb;
    puVar6 = local_110;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack288 = 0x404d6f;
    pcVar2 = fgets((char *)&local_118,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack288 = 0x404d7e;
      printLine("fgets() failed");
      local_118 = local_118 & 0xffffffffffffff00;
    }
    if ((char)local_118 != 0) {
      uStack288 = 0x404da2;
      sVar3 = strlen((char *)&local_118);
      *(undefined *)((long)&uStack288 + sVar3 + 7) = 0;
    }
    uStack288 = 0x404dc7;
    iVar1 = stat((char *)&local_118,&local_a8);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x404dd6;
      exit(1);
    }
    uStack288 = 0x404def;
    local_c = open((char *)&local_118,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x404e02;
      exit(1);
    }
    uStack288 = 0x404e16;
    sVar4 = write(local_c,"Bad Sink...",0xb);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x404e26;
      exit(1);
    }
    if (local_c != -1) {
      uStack288 = 0x404e36;
      close(local_c);
    }
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x404e9e;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x404ead;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x404ec8;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x404ee7;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x404efa;
      exit(1);
    }
    uStack128 = 0x404f0e;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x404f1e;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x404f2e;
      close(local_c);
    }
  }
  else {
    uStack128 = 0x404e55;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (staticFive == 5) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x404f8b;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x404f9a;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x404fb5;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x404fd4;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x404fe7;
      exit(1);
    }
    uStack128 = 0x404ffb;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40500b;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x40501b;
      close(local_c);
    }
  }
  return;
}


void CWE367_TOC_TOU__stat_07_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__stat_10_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack288;
  ulong local_118;
  undefined8 local_110 [13];
  stat local_a8;
  int local_c;
  
  if (globalTrue != 0) {
    local_118 = 0;
    lVar5 = 0xb;
    puVar6 = local_110;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack288 = 0x40509d;
    pcVar2 = fgets((char *)&local_118,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack288 = 0x4050ac;
      printLine("fgets() failed");
      local_118 = local_118 & 0xffffffffffffff00;
    }
    if ((char)local_118 != 0) {
      uStack288 = 0x4050d0;
      sVar3 = strlen((char *)&local_118);
      *(undefined *)((long)&uStack288 + sVar3 + 7) = 0;
    }
    uStack288 = 0x4050f5;
    iVar1 = stat((char *)&local_118,&local_a8);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x405104;
      exit(1);
    }
    uStack288 = 0x40511d;
    local_c = open((char *)&local_118,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x405130;
      exit(1);
    }
    uStack288 = 0x405144;
    sVar4 = write(local_c,"Bad Sink...",0xb);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x405154;
      exit(1);
    }
    if (local_c != -1) {
      uStack288 = 0x405164;
      close(local_c);
    }
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (globalFalse == 0) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x4051cb;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x4051da;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x4051f5;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x405214;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x405227;
      exit(1);
    }
    uStack128 = 0x40523b;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40524b;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x40525b;
      close(local_c);
    }
  }
  else {
    uStack128 = 0x405182;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (globalTrue != 0) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x4052b7;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x4052c6;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x4052e1;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x405300;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x405313;
      exit(1);
    }
    uStack128 = 0x405327;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x405337;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x405347;
      close(local_c);
    }
  }
  return;
}


void CWE367_TOC_TOU__stat_10_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__access_06_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar5 = 0xb;
  puVar6 = local_70;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x4053bd;
  pcVar2 = fgets((char *)&local_78,100,stdin);
  if (pcVar2 == (char *)0x0) {
    uStack128 = 0x4053cc;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x4053e7;
    sVar3 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
  }
  uStack128 = 0x405401;
  iVar1 = access((char *)&local_78,2);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x405410;
    exit(1);
  }
  uStack128 = 0x405426;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x405439;
    exit(1);
  }
  uStack128 = 0x40544d;
  sVar4 = write(local_c,"Bad Sink...",0xb);
  if (sVar4 != -1) {
    if (local_c != -1) {
      uStack128 = 0x40546d;
      close(local_c);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x40545d;
  exit(1);
}


/* WARNING: Removing unreachable block (ram,0x00405481) */
/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x4054d4;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x4054e3;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x4054fe;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x40551d;
  local_c = open((char *)&local_78,2);
  if (local_c != -1) {
    uStack128 = 0x405544;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 != -1) {
      if (local_c != -1) {
        uStack128 = 0x405564;
        close(local_c);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x405554;
    exit(1);
  }
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x405530;
  exit(1);
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x4055c0;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x4055cf;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x4055ea;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x405609;
  local_c = open((char *)&local_78,2);
  if (local_c != -1) {
    uStack128 = 0x405630;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 != -1) {
      if (local_c != -1) {
        uStack128 = 0x405650;
        close(local_c);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x405640;
    exit(1);
  }
                    /* WARNING: Subroutine does not return */
  uStack128 = 0x40561c;
  exit(1);
}


void CWE367_TOC_TOU__access_06_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__stat_16_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack288;
  ulong local_118;
  undefined8 local_110 [13];
  stat local_a8;
  int local_c;
  
  local_118 = 0;
  lVar5 = 0xb;
  puVar6 = local_110;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_c = 0xffffffff;
  uStack288 = 0x4056c4;
  pcVar2 = fgets((char *)&local_118,100,stdin);
  if (pcVar2 == (char *)0x0) {
    uStack288 = 0x4056d3;
    printLine("fgets() failed");
    local_118 = local_118 & 0xffffffffffffff00;
  }
  if ((char)local_118 != 0) {
    uStack288 = 0x4056f7;
    sVar3 = strlen((char *)&local_118);
    *(undefined *)((long)&uStack288 + sVar3 + 7) = 0;
  }
  uStack288 = 0x40571c;
  iVar1 = stat((char *)&local_118,&local_a8);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x40572b;
    exit(1);
  }
  uStack288 = 0x405744;
  local_c = open((char *)&local_118,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x405757;
    exit(1);
  }
  uStack288 = 0x40576b;
  sVar4 = write(local_c,"Bad Sink...",0xb);
  if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x40577b;
    exit(1);
  }
  if (local_c != -1) {
    uStack288 = 0x40578b;
    close(local_c);
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x4057da;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x4057e9;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x405804;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x405823;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x405836;
    exit(1);
  }
  uStack128 = 0x40584a;
  sVar3 = write(local_c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40585a;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x40586a;
    close(local_c);
  }
  return;
}


void CWE367_TOC_TOU__stat_16_good(void)

{
  good1();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__stat_03_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack288;
  ulong local_118;
  undefined8 local_110 [13];
  stat local_a8;
  int local_c;
  
  local_118 = 0;
  lVar5 = 0xb;
  puVar6 = local_110;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_c = 0xffffffff;
  uStack288 = 0x4058d5;
  pcVar2 = fgets((char *)&local_118,100,stdin);
  if (pcVar2 == (char *)0x0) {
    uStack288 = 0x4058e4;
    printLine("fgets() failed");
    local_118 = local_118 & 0xffffffffffffff00;
  }
  if ((char)local_118 != 0) {
    uStack288 = 0x405908;
    sVar3 = strlen((char *)&local_118);
    *(undefined *)((long)&uStack288 + sVar3 + 7) = 0;
  }
  uStack288 = 0x40592d;
  iVar1 = stat((char *)&local_118,&local_a8);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x40593c;
    exit(1);
  }
  uStack288 = 0x405955;
  local_c = open((char *)&local_118,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x405968;
    exit(1);
  }
  uStack288 = 0x40597c;
  sVar4 = write(local_c,"Bad Sink...",0xb);
  if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x40598c;
    exit(1);
  }
  if (local_c != -1) {
    uStack288 = 0x40599c;
    close(local_c);
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x4059ea;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x4059f9;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x405a14;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x405a33;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x405a46;
    exit(1);
  }
  uStack128 = 0x405a5a;
  sVar3 = write(local_c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x405a6a;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x405a7a;
    close(local_c);
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x405ac8;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x405ad7;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x405af2;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x405b11;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x405b24;
    exit(1);
  }
  uStack128 = 0x405b38;
  sVar3 = write(local_c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x405b48;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x405b58;
    close(local_c);
  }
  return;
}


void CWE367_TOC_TOU__stat_03_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__stat_15_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack288;
  ulong local_118;
  undefined8 local_110 [13];
  stat local_a8;
  int local_c;
  
  local_118 = 0;
  lVar5 = 0xb;
  puVar6 = local_110;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_c = 0xffffffff;
  uStack288 = 0x405bcc;
  pcVar2 = fgets((char *)&local_118,100,stdin);
  if (pcVar2 == (char *)0x0) {
    uStack288 = 0x405bdb;
    printLine("fgets() failed");
    local_118 = local_118 & 0xffffffffffffff00;
  }
  if ((char)local_118 != 0) {
    uStack288 = 0x405bff;
    sVar3 = strlen((char *)&local_118);
    *(undefined *)((long)&uStack288 + sVar3 + 7) = 0;
  }
  uStack288 = 0x405c24;
  iVar1 = stat((char *)&local_118,&local_a8);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x405c33;
    exit(1);
  }
  uStack288 = 0x405c4c;
  local_c = open((char *)&local_118,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x405c5f;
    exit(1);
  }
  uStack288 = 0x405c73;
  sVar4 = write(local_c,"Bad Sink...",0xb);
  if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x405c83;
    exit(1);
  }
  if (local_c != -1) {
    uStack288 = 0x405c93;
    close(local_c);
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x405ce2;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x405cf1;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x405d0c;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x405d2b;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x405d3e;
    exit(1);
  }
  uStack128 = 0x405d52;
  sVar3 = write(local_c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x405d62;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x405d72;
    close(local_c);
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x405dc1;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x405dd0;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x405deb;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x405e0a;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x405e1d;
    exit(1);
  }
  uStack128 = 0x405e31;
  sVar3 = write(local_c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x405e41;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x405e51;
    close(local_c);
  }
  return;
}


void CWE367_TOC_TOU__stat_15_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__access_16_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar5 = 0xb;
  puVar6 = local_70;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x405eba;
  pcVar2 = fgets((char *)&local_78,100,stdin);
  if (pcVar2 == (char *)0x0) {
    uStack128 = 0x405ec9;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x405ee4;
    sVar3 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
  }
  uStack128 = 0x405efe;
  iVar1 = access((char *)&local_78,2);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x405f0d;
    exit(1);
  }
  uStack128 = 0x405f23;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x405f36;
    exit(1);
  }
  uStack128 = 0x405f4a;
  sVar4 = write(local_c,"Bad Sink...",0xb);
  if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x405f5a;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x405f6a;
    close(local_c);
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x405fb9;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x405fc8;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x405fe3;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x406002;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x406015;
    exit(1);
  }
  uStack128 = 0x406029;
  sVar3 = write(local_c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x406039;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x406049;
    close(local_c);
  }
  return;
}


void CWE367_TOC_TOU__access_16_good(void)

{
  good1();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__stat_14_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack288;
  ulong local_118;
  undefined8 local_110 [13];
  stat local_a8;
  int local_c;
  
  if (globalFive == 5) {
    local_118 = 0;
    lVar5 = 0xb;
    puVar6 = local_110;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack288 = 0x4060c3;
    pcVar2 = fgets((char *)&local_118,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack288 = 0x4060d2;
      printLine("fgets() failed");
      local_118 = local_118 & 0xffffffffffffff00;
    }
    if ((char)local_118 != 0) {
      uStack288 = 0x4060f6;
      sVar3 = strlen((char *)&local_118);
      *(undefined *)((long)&uStack288 + sVar3 + 7) = 0;
    }
    uStack288 = 0x40611b;
    iVar1 = stat((char *)&local_118,&local_a8);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x40612a;
      exit(1);
    }
    uStack288 = 0x406143;
    local_c = open((char *)&local_118,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x406156;
      exit(1);
    }
    uStack288 = 0x40616a;
    sVar4 = write(local_c,"Bad Sink...",0xb);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x40617a;
      exit(1);
    }
    if (local_c != -1) {
      uStack288 = 0x40618a;
      close(local_c);
    }
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x4061f2;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x406201;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x40621c;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x40623b;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40624e;
      exit(1);
    }
    uStack128 = 0x406262;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x406272;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x406282;
      close(local_c);
    }
  }
  else {
    uStack128 = 0x4061a9;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (globalFive == 5) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x4062df;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x4062ee;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x406309;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x406328;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40633b;
      exit(1);
    }
    uStack128 = 0x40634f;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40635f;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x40636f;
      close(local_c);
    }
  }
  return;
}


void CWE367_TOC_TOU__stat_14_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__access_10_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (globalTrue != 0) {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x4063e5;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x4063f4;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x40640f;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x406429;
    iVar1 = access((char *)&local_78,2);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x406438;
      exit(1);
    }
    uStack128 = 0x40644e;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x406461;
      exit(1);
    }
    uStack128 = 0x406475;
    sVar4 = write(local_c,"Bad Sink...",0xb);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x406485;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x406495;
      close(local_c);
    }
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (globalFalse == 0) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x4064fc;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x40650b;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x406526;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x406545;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x406558;
      exit(1);
    }
    uStack128 = 0x40656c;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40657c;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x40658c;
      close(local_c);
    }
  }
  else {
    uStack128 = 0x4064b3;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (globalTrue != 0) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x4065e8;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x4065f7;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x406612;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x406631;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x406644;
      exit(1);
    }
    uStack128 = 0x406658;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x406668;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x406678;
      close(local_c);
    }
  }
  return;
}


void CWE367_TOC_TOU__access_10_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__stat_01_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack288;
  ulong local_118;
  undefined8 local_110 [13];
  stat local_a8;
  int local_c;
  
  local_118 = 0;
  lVar5 = 0xb;
  puVar6 = local_110;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_c = 0xffffffff;
  uStack288 = 0x4066ec;
  pcVar2 = fgets((char *)&local_118,100,stdin);
  if (pcVar2 == (char *)0x0) {
    uStack288 = 0x4066fb;
    printLine("fgets() failed");
    local_118 = local_118 & 0xffffffffffffff00;
  }
  if ((char)local_118 != 0) {
    uStack288 = 0x40671f;
    sVar3 = strlen((char *)&local_118);
    *(undefined *)((long)&uStack288 + sVar3 + 7) = 0;
  }
  uStack288 = 0x406744;
  iVar1 = stat((char *)&local_118,&local_a8);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x406753;
    exit(1);
  }
  uStack288 = 0x40676c;
  local_c = open((char *)&local_118,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x40677f;
    exit(1);
  }
  uStack288 = 0x406793;
  sVar4 = write(local_c,"Bad Sink...",0xb);
  if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack288 = 0x4067a3;
    exit(1);
  }
  if (local_c != -1) {
    uStack288 = 0x4067b3;
    close(local_c);
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x406801;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x406810;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x40682b;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x40684a;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40685d;
    exit(1);
  }
  uStack128 = 0x406871;
  sVar3 = write(local_c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x406881;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x406891;
    close(local_c);
  }
  return;
}


void CWE367_TOC_TOU__stat_01_good(void)

{
  good1();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__access_03_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar5 = 0xb;
  puVar6 = local_70;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x4068ef;
  pcVar2 = fgets((char *)&local_78,100,stdin);
  if (pcVar2 == (char *)0x0) {
    uStack128 = 0x4068fe;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x406919;
    sVar3 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
  }
  uStack128 = 0x406933;
  iVar1 = access((char *)&local_78,2);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x406942;
    exit(1);
  }
  uStack128 = 0x406958;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40696b;
    exit(1);
  }
  uStack128 = 0x40697f;
  sVar4 = write(local_c,"Bad Sink...",0xb);
  if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40698f;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x40699f;
    close(local_c);
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x4069ed;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x4069fc;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x406a17;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x406a36;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x406a49;
    exit(1);
  }
  uStack128 = 0x406a5d;
  sVar3 = write(local_c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x406a6d;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x406a7d;
    close(local_c);
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x406acb;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x406ada;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x406af5;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x406b14;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x406b27;
    exit(1);
  }
  uStack128 = 0x406b3b;
  sVar3 = write(local_c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x406b4b;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x406b5b;
    close(local_c);
  }
  return;
}


void CWE367_TOC_TOU__access_03_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__access_15_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar5 = 0xb;
  puVar6 = local_70;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x406bc3;
  pcVar2 = fgets((char *)&local_78,100,stdin);
  if (pcVar2 == (char *)0x0) {
    uStack128 = 0x406bd2;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x406bed;
    sVar3 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
  }
  uStack128 = 0x406c07;
  iVar1 = access((char *)&local_78,2);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x406c16;
    exit(1);
  }
  uStack128 = 0x406c2c;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x406c3f;
    exit(1);
  }
  uStack128 = 0x406c53;
  sVar4 = write(local_c,"Bad Sink...",0xb);
  if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x406c63;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x406c73;
    close(local_c);
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x406cc2;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x406cd1;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x406cec;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x406d0b;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x406d1e;
    exit(1);
  }
  uStack128 = 0x406d32;
  sVar3 = write(local_c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x406d42;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x406d52;
    close(local_c);
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x406da1;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x406db0;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x406dcb;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x406dea;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x406dfd;
    exit(1);
  }
  uStack128 = 0x406e11;
  sVar3 = write(local_c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x406e21;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x406e31;
    close(local_c);
  }
  return;
}


void CWE367_TOC_TOU__access_15_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__stat_09_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack288;
  ulong local_118;
  undefined8 local_110 [13];
  stat local_a8;
  int local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_118 = 0;
    lVar5 = 0xb;
    puVar6 = local_110;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack288 = 0x406eb4;
    pcVar2 = fgets((char *)&local_118,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack288 = 0x406ec3;
      printLine("fgets() failed");
      local_118 = local_118 & 0xffffffffffffff00;
    }
    if ((char)local_118 != 0) {
      uStack288 = 0x406ee7;
      sVar3 = strlen((char *)&local_118);
      *(undefined *)((long)&uStack288 + sVar3 + 7) = 0;
    }
    uStack288 = 0x406f0c;
    iVar1 = stat((char *)&local_118,&local_a8);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x406f1b;
      exit(1);
    }
    uStack288 = 0x406f34;
    local_c = open((char *)&local_118,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x406f47;
      exit(1);
    }
    uStack288 = 0x406f5b;
    sVar4 = write(local_c,"Bad Sink...",0xb);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack288 = 0x406f6b;
      exit(1);
    }
    if (local_c != -1) {
      uStack288 = 0x406f7b;
      close(local_c);
    }
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (GLOBAL_CONST_FALSE == 0) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x406fe2;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x406ff1;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x40700c;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x40702b;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40703e;
      exit(1);
    }
    uStack128 = 0x407052;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x407062;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x407072;
      close(local_c);
    }
  }
  else {
    uStack128 = 0x406f99;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (GLOBAL_CONST_TRUE != 0) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x4070ce;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x4070dd;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x4070f8;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x407117;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40712a;
      exit(1);
    }
    uStack128 = 0x40713e;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40714e;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x40715e;
      close(local_c);
    }
  }
  return;
}


void CWE367_TOC_TOU__stat_09_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__access_05_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (staticTrue != 0) {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x4071d4;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x4071e3;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x4071fe;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x407218;
    iVar1 = access((char *)&local_78,2);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x407227;
      exit(1);
    }
    uStack128 = 0x40723d;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x407250;
      exit(1);
    }
    uStack128 = 0x407264;
    sVar4 = write(local_c,"Bad Sink...",0xb);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x407274;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x407284;
      close(local_c);
    }
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (staticFalse == 0) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x4072eb;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x4072fa;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x407315;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x407334;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x407347;
      exit(1);
    }
    uStack128 = 0x40735b;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40736b;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x40737b;
      close(local_c);
    }
  }
  else {
    uStack128 = 0x4072a2;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  if (staticTrue != 0) {
    local_78 = 0;
    lVar4 = 0xb;
    puVar5 = local_70;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x4073d7;
    pcVar1 = fgets((char *)&local_78,100,stdin);
    if (pcVar1 == (char *)0x0) {
      uStack128 = 0x4073e6;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x407401;
      sVar2 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
    }
    uStack128 = 0x407420;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x407433;
      exit(1);
    }
    uStack128 = 0x407447;
    sVar3 = write(local_c,"Good Sink...",0xc);
    if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x407457;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x407467;
      close(local_c);
    }
  }
  return;
}


void CWE367_TOC_TOU__access_05_good(void)

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


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__access_08_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  bVar7 = 0;
  uStack128 = 0x4074ab;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x4074f7;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x407506;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x407521;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x40753b;
    iVar1 = access((char *)&local_78,2);
    if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40754a;
      exit(1);
    }
    uStack128 = 0x407560;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x407573;
      exit(1);
    }
    uStack128 = 0x407587;
    sVar4 = write(local_c,"Bad Sink...",0xb);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x407597;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x4075a7;
      close(local_c);
    }
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  bVar7 = 0;
  uStack128 = 0x4075bb;
  iVar1 = staticReturnsFalse();
  if (iVar1 == 0) {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x407612;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x407621;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x40763c;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x40765b;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40766e;
      exit(1);
    }
    uStack128 = 0x407682;
    sVar4 = write(local_c,"Good Sink...",0xc);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x407692;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x4076a2;
      close(local_c);
    }
  }
  else {
    uStack128 = 0x4075c9;
    printLine("Benign, fixed string");
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good2(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  bVar7 = 0;
  uStack128 = 0x4076b6;
  iVar1 = staticReturnsTrue();
  if (iVar1 != 0) {
    local_78 = 0;
    lVar5 = 0xb;
    puVar6 = local_70;
    while (lVar5 != 0) {
      lVar5 = lVar5 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * 0x1ffffffffffffffe + 1;
    }
    *(undefined4 *)puVar6 = 0;
    local_c = 0xffffffff;
    uStack128 = 0x407702;
    pcVar2 = fgets((char *)&local_78,100,stdin);
    if (pcVar2 == (char *)0x0) {
      uStack128 = 0x407711;
      printLine("fgets() failed");
      local_78 = local_78 & 0xffffffffffffff00;
    }
    if ((char)local_78 != 0) {
      uStack128 = 0x40772c;
      sVar3 = strlen((char *)&local_78);
      *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
    }
    uStack128 = 0x40774b;
    local_c = open((char *)&local_78,2);
    if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x40775e;
      exit(1);
    }
    uStack128 = 0x407772;
    sVar4 = write(local_c,"Good Sink...",0xc);
    if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      uStack128 = 0x407782;
      exit(1);
    }
    if (local_c != -1) {
      uStack128 = 0x407792;
      close(local_c);
    }
  }
  return;
}


void CWE367_TOC_TOU__access_08_good(void)

{
  good1();
  good2();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__access_01_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar5 = 0xb;
  puVar6 = local_70;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x4077fa;
  pcVar2 = fgets((char *)&local_78,100,stdin);
  if (pcVar2 == (char *)0x0) {
    uStack128 = 0x407809;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x407824;
    sVar3 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
  }
  uStack128 = 0x40783e;
  iVar1 = access((char *)&local_78,2);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40784d;
    exit(1);
  }
  uStack128 = 0x407863;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x407876;
    exit(1);
  }
  uStack128 = 0x40788a;
  sVar4 = write(local_c,"Bad Sink...",0xb);
  if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x40789a;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x4078aa;
    close(local_c);
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x4078f8;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x407907;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x407922;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x407941;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x407954;
    exit(1);
  }
  uStack128 = 0x407968;
  sVar3 = write(local_c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x407978;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x407988;
    close(local_c);
  }
  return;
}


void CWE367_TOC_TOU__access_01_good(void)

{
  good1();
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void CWE367_TOC_TOU__access_18_bad(void)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  ssize_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar5 = 0xb;
  puVar6 = local_70;
  while (lVar5 != 0) {
    lVar5 = lVar5 + -1;
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)puVar6 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x4079e7;
  pcVar2 = fgets((char *)&local_78,100,stdin);
  if (pcVar2 == (char *)0x0) {
    uStack128 = 0x4079f6;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x407a11;
    sVar3 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar3 + 7) = 0;
  }
  uStack128 = 0x407a2b;
  iVar1 = access((char *)&local_78,2);
  if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x407a3a;
    exit(1);
  }
  uStack128 = 0x407a50;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x407a63;
    exit(1);
  }
  uStack128 = 0x407a77;
  sVar4 = write(local_c,"Bad Sink...",0xb);
  if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x407a87;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x407a97;
    close(local_c);
  }
  return;
}


/* WARNING: Could not reconcile some variable overlaps */

void good1(void)

{
  char *pcVar1;
  size_t sVar2;
  ssize_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uStack128;
  ulong local_78;
  undefined8 local_70 [12];
  int local_c;
  
  local_78 = 0;
  lVar4 = 0xb;
  puVar5 = local_70;
  while (lVar4 != 0) {
    lVar4 = lVar4 + -1;
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)puVar5 = 0;
  local_c = 0xffffffff;
  uStack128 = 0x407ae6;
  pcVar1 = fgets((char *)&local_78,100,stdin);
  if (pcVar1 == (char *)0x0) {
    uStack128 = 0x407af5;
    printLine("fgets() failed");
    local_78 = local_78 & 0xffffffffffffff00;
  }
  if ((char)local_78 != 0) {
    uStack128 = 0x407b10;
    sVar2 = strlen((char *)&local_78);
    *(undefined *)((long)&uStack128 + sVar2 + 7) = 0;
  }
  uStack128 = 0x407b2f;
  local_c = open((char *)&local_78,2);
  if (local_c == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x407b42;
    exit(1);
  }
  uStack128 = 0x407b56;
  sVar3 = write(local_c,"Good Sink...",0xc);
  if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
    uStack128 = 0x407b66;
    exit(1);
  }
  if (local_c != -1) {
    uStack128 = 0x407b76;
    close(local_c);
  }
  return;
}


void CWE367_TOC_TOU__access_18_good(void)

{
  good1();
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
  printf((char *)(double)fParm1,&DAT_004096a9);
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
  printf(pcParm1,&DAT_004096c6);
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
    __isoc99_sscanf(lVar1,&DAT_004096d4,&local_14,lVar1);
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
    __isoc99_swscanf(local_10 * 8 + lParm3,&DAT_004096dc,&local_14);
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


int stat(char *__file,stat *__buf)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR___xstat_0060c080)(1,__file,__buf);
  return iVar1;
}


void _fini(void)

{
  return;
}

