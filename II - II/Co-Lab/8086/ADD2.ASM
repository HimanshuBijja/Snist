assume cs:code,ds:data
data segment
num1 db 05H
num2 db 02H
res db ?
data ends
code segment
start: MOV AX, data
       MOV DS,AX
       MOV AX,0000H
       MOV AL,num1
       MOV BL,num2
       ADD AL,BL
       MOV res,AL
       INT 3H
 code ends
          end start
