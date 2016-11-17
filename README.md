#NVMeP
command line to patch IONVMeFamily.kext for non Apple pci nvme-ssd(s). Based on Pike R. Alpha patches at https://pikeralpha.wordpress.com/2016/06/27/nvmefamily-kext-bin-patch-data/

##Usage
Usage:
``` bash
cd /to/a/folder

NVMeP -i "add internal icon fix".
NVMeP -a "leave Apple Class code" (default is 01080200 as per specification).

NVMeP -s [num] "try a specific patch":
	0 for Sierra 10.12.1 and later
	1 for Sierra DP4 and later
	2 for Sierra DP1/3
	3 for El Capitan 10.11.6 (15G31)
	4 for El Capitan 10.11.6 (Beta 4)
	5 for El Capitan 10.11.5 (15F34)/10.11.6 (15G1004)

	e.g. NVMeP -s 0

NVMeP -p [num] "set IOProbeScore key with the given integer".

NVMeP -k "/path/to/IONVMEFamily.kext (/S/L/E/IONVMEFamily.kext by default)".

NVMeP -h "show this message".

Easy ways w/o -s option:
	NVMeP
	NVMeP -k /User/Peter/Desktop/IONVMEFamily.kext
	..will find a compatible patch (if any).
```

##WARNING
NVMeP try to produce a patched IONVMEFamily.kext (IONVMEFamilyBorg.kext):
this is an extreme hack and the use of the patched kext or the use of the
configSample.plist can potentially cause the corruption of the filesystem
or make your computer unbootable.
I'm not responsible for any kind of damages or loss of datas that may occur,
and by pressing "Y" (or "y") you assume all risks.
Also there's no guarantee it will work.
