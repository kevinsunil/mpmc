MAIN : MOV P2,#OCH
       ACALL DELAY
       MOV P2,#06H
       ACALL DELAY
       MOV P2,#03H
       ACALL DELAY
       MOV P2,#09H
       ACALL DELAY
       SJMP MAIN
       
DELAY: MOV R0,#07
       HERE3:MOV R1,#255
       HERE2:MOV R2,#255
       HERE1:DJNZ R2,HERE1
       DJNZ R1,HERE2
       DJNZ R0,HERE3
       
       RET
       
END
