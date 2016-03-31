# Do recursive builds
all:
	$(MAKE)	-f Mhex2perl
	$(MAKE) -f Mhex2data
	$(MAKE) -f Mhex2bin
	$(MAKE) -f  Mdata2hex

