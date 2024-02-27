
Debian
====================
This directory contains files used to package PIGGIEd/PIGGIE-qt
for Debian-based Linux systems. If you compile PIGGIEd/PIGGIE-qt yourself, there are some useful files here.

## pivx: URI support ##


PIGGIE-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install PIGGIE-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your PIGGIE-qt binary to `/usr/bin`
and the `../../share/pixmaps/pivx128.png` to `/usr/share/pixmaps`

PIGGIE-qt.protocol (KDE)

