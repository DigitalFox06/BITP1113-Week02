main

&#x20;   CALL inputBitrate RETURNING BitrateMbps

&#x20;   CALL inputMinutes RETURNING minutes

&#x20;   CALL computeDataMB with BitrateMbps and minutes RETURNING sizeMB

&#x20;   CALL display with sizeMB

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

&#x20;

compute with BitrateMbps and minutes

&#x20;   COMPUTE (BitrateMbps x 60 x minutes) / 8       (1 byte = 8 bits) (1 minute = 60 seconds)

&#x20;   RETURN sizeMB

&#x20;

display with seconds

&#x20;   COMPUTE sizeGB as sizeMB x 1024

&#x20;   DISPLAY sizeMB as the size in Megabyte

&#x20;   DISPLAY sizeGB as the size in Gigabyte

