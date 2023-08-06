#include <X11/Xlib.h>
int main(int argc, char *argv[]) {
	Display *dpy = XOpenDisplay(NULL);
	if (!dpy)
		return 1;
	Window root = RootWindow(dpy, DefaultScreen(dpy));
	XStoreName(dpy, root, 1 < argc ? argv[1] : NULL);
	XClearWindow(dpy, root);
	XCloseDisplay(dpy);
}
