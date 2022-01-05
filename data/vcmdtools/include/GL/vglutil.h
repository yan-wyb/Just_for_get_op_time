/*
 * shader.h
 *
 *  Created on: 2019-2-22
 *      Author: cn0754
 */
#ifdef __cplusplus
extern "C" {
#endif

#ifndef VGLUTIL_H_
#define VGLUTIL_H_

/*
 *  dump mesh data.
 */
int dumpMesh(const char *file, int numFaces, int numIndices, void* indices, int numVertices, void* vertices, int numTexCoords, void* texCoords, int numNormals, void* normals);

int dumpTextureCubeMapFigure(const char* file, int target, int level, int internalformat, int width, int height, int border, int format, int type, \
        const void *cube_map_px, const void *cube_map_nx, const void *cube_map_py, const void *cube_map_ny, const void *cube_map_pz, const void *cube_map_nz);

int dumpTexture2DFigure(const char* file, int target, int level, int internalformat, int width, int height, int border, int format, int type,	const void *data);

#endif /* VGLUTIL_H_ */

#ifdef __cplusplus
}
#endif
