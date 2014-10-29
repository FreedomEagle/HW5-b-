geom: geom.c area.c perimeter.c geom.h
	clang -o geom geom.c area.c perimeter.c -lm
