segment .text

global _randomGenerator
global _greaterThan
global _lessThan

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

_greaterThan:
    mov     ecx,esi
    mov     ebx,edi
    cmp     ecx,ebx
    jg      _isGreater
    mov     eax,0
    ret

_isGreater:
    mov     eax,1
    ret

_lessThan:
    mov     ecx,esi
    mov     ebx,edi
    cmp     ecx,ebx
    jl      _isLess
    mov     eax,0
    ret

_isLess:
    mov     eax,1
    ret
