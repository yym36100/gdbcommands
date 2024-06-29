 /*
	 * gdb commands set an array to a value
	 set {char[307200]}0xD0000000 = {0x0}

	 // this extracts a section of interrest
	 objcopy.exe -O binary -j .framebuffer_n em_fuse.elf out.bin
	 load Debug/out.bin  0xD0000000
	 restore Debug/out.bin binary 0xD0000000
	 V fill in a memory like this
	 call (void)memset(0x20000264, 0xff, 192*4)

	aliexp7tft.data
	 call (void)memset(0xD0000000,0,800*480*4)

	restore aliexp7tft.data.r1 binary 0xD0000000
	restore testimage.data.r1 binary 0xD0000000
testimage.data.r
	 dump binary memory <file_name> <start_address> <end_address>

	 u32 dirty_pix[192];

	 call (void)memset(dirty_pix,0xff,192*4)
	 */
