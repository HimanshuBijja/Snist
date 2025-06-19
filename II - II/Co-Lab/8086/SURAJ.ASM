Assume CS: code,DS:data
data segment
n1 db 45H
n2 db 22H
sum db ?
data ends
code segment
start: mov Ax,data
      mov DS,AX
      mov AL,N1
      mov BL,N2
      ADD AL,BL
      mov sum,AL
      int 03H
      code ends
      end start
