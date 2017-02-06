IFNDEF DATETIME_INC
DATETIME_INC equ <1>

PROTO64 external,DaylightSavingTimeStartDateTime, dwYear:QWORD, pdt:PTR DATETIME

ELSE
echo -----------------------------------------
echo WARNING Duplicate include file DateTime.inc
echo -----------------------------------------
ENDIF

