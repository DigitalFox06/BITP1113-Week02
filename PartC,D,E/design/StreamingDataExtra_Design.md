main

&#x20;   CALL inputBitrate RETURNING BitrateMbps

&#x20;   CALL inputMinutes RETURNING minutes

&#x20;   CALL inputClassesPerWeek RETURNING ClassesPerWeek

&#x20;   CALL computeDataMB with BitrateMbps, minutes and classesperweek RETURNING sizeMB and sizeMBperweek

&#x20;   CALL display with sizeMB and sizeMBperweek

&#x20;

inputBitrate

&#x20;   DISPLAY prompt for the Bitrate in Mbps

&#x20;   READ BitrateMbps

&#x20;   RETURN BitrateMbps

&#x20;

inputMinutes

&#x20;   DISPLAY prompt for the time in minutes

&#x20;   READ minutes

&#x20;   RETURN minutes



inputClassesPerWeek

&#x20;   DISPLAY prompt for classes per week

&#x20;   READ classes per week

&#x20;   RETURN classes per week

&#x20;

compute with BitrateMbps and minutes

&#x20;   COMPUTE (BitrateMbps x 60 x minutes) / 8       (1 byte = 8 bits) (1 minute = 60 seconds)

&#x20;   RETURN sizeMB

&#x20;   RETURN sizeMBperweek

&#x20;

display with seconds

&#x20;   COMPUTE sizeGB as sizeMB x 1024

&#x20;   DISPLAY sizeMB as the size in Megabyte

&#x20;   DISPLAY sizeGB as the size in Gigabyte

&#x20;   DISPLAY sizeMBperweek / 1024.0 as the total data usage per week in Gigabyte

