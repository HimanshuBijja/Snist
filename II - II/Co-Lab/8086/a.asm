assume cs:code,ds:data
data segment
arr db 69h,04h,55h,77h,01h,56h
count dw 0006h
data ends
code segment
start: mov ax,data
         mov ds,ax
         mov dx,count
dec dx
nxtiter:mov cx,dx
mov si,0
nxtcmp:mov al,arr[si]
cmp al,arr[si+1]
jc noswap
xchg al,arr[si+1]
mov arr[si],al
noswap:inc si
loop nxtcmp
dec dx
jnz nxtiter
int 3h
code ends 
end start
