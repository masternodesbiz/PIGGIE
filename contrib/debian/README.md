
Debian
====================
This directory contains files used to package piggied/piggie-qt
for Debian-based Linux systems. If you compile piggied/piggie-qt yourself, there are some useful files here.

## piggie: URI support ##


piggie-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install piggie-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your piggie-qt binary to `/usr/bin`
and the `../../share/pixmaps/piggie128.png` to `/usr/share/pixmaps`

piggie-qt.protocol (KDE)

