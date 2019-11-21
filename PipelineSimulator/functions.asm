segment .text

global _randomGenerator

_randomGenerator:
    rdtsc
    xor     edx,edx
    xor     ecx,ecx
    mov     ecx,esi
    sub     ecx,edi
    add     ecx,1
    div     ecx
    mov     eax,edx
    add     eax,edi
    ret