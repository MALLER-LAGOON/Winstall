winstall: winstall-main.c dev/winstall-messages.c dev/winstall-functions.c
	cc winstall-main.c -o winstall
	@echo ➼ winstall successfully compiled

#install
install:
	cp winstall /usr/bin
	@echo ➼ winstall successfully installed

#uninstall
uninstall:
	rm /usr/bin/winstall
	@echo ➼ winstall successfully uninstalled

#clean
clean:
	rm winstall
	@echo ➼ winstall cleaned

#all
all: winstall-main.c dev/winstall-messages.c dev/winstall-functions.c
	cc winstall-main.c -o winstall
	@echo ➼ winstall successfully compiled	
	cp winstall /usr/bin
	@echo ➼ winstall successfully installed
	rm winstall
	@echo ➼ winstall cleaned
