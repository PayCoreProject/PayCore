
Debian
====================
This directory contains files used to package paycored/paycore-qt
for Debian-based Linux systems. If you compile paycored/paycore-qt yourself, there are some useful files here.

## paycore: URI support ##


paycore-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install paycore-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your paycoreqt binary to `/usr/bin`
and the `../../share/pixmaps/paycore128.png` to `/usr/share/pixmaps`

paycore-qt.protocol (KDE)

