# NVMeP
command line to patch IONVMeFamily.kext for non Apple pci nvme-ssd(s). Based on Pike R. Alpha patches at https://pikeralpha.wordpress.com/2016/06/27/nvmefamily-kext-bin-patch-data/

Usage:
cd /to/a/folder

NVMeP -i "add internal icon fix".

NVMeP -s [num] "try a specific patch":
	0 for Sierra DP4
	1 for Sierra DP1/3
	2 for El Capitan 10.11.6 (15G31)
	3 for El Capitan 10.11.6 (Beta 4)
	4 for El Capitan 10.11.5 (15F34)

	e.g. NVMeP -s 0

NVMeP -k "/path/to/IONVMEFamily.kext (/S/L/E/IONVMEFamily.kext by defaul)".

NVMeP -h "show this message".

Easy ways w/o -s option:
	NVMeP
	NVMeP -i -k /User/Peter/Desktop/IONVMEFamily.kext
	..will find a compatible patch (if any).
