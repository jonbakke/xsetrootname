xsetrootname: xsetrootname.c
	cc xsetrootname.c -lX11 -o xsetrootname
install: xsetrootname
	cp xsetrootname "${HOME}/bin/"
