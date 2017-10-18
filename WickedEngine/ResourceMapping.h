#ifndef _RESOURCEBUFFER_MAPPING_H_
#define _RESOURCEBUFFER_MAPPING_H_

// Slot matchings:
////////////////////////////////////////////////////

// Unordered Access Resources (u slot):

#define UAVSLOT_TILEFRUSTUMS						0
#define UAVSLOT_ENTITYINDEXLIST_OPAQUE				0
#define UAVSLOT_ENTITYINDEXLIST_TRANSPARENT			1
#define UAVSLOT_DEBUGTEXTURE						7
#define UAVSLOT_TILEDDEFERRED_DIFFUSE				0
#define UAVSLOT_TILEDDEFERRED_SPECULAR				2


// Textures (t slot):

// These are reserved slots for the renderer:
#define TEXSLOT_DEPTH				0
#define TEXSLOT_LINEARDEPTH			1

#define TEXSLOT_GBUFFER0			2
#define TEXSLOT_GBUFFER1			3
#define TEXSLOT_GBUFFER2			4
#define TEXSLOT_GBUFFER3			5
#define TEXSLOT_GBUFFER4			6

#define TEXSLOT_ENV_GLOBAL			7
#define TEXSLOT_ENV0				8
#define TEXSLOT_ENV1				9
#define TEXSLOT_ENV2				10
#define TEXSLOT_DECALATLAS			11

#define TEXSLOT_SHADOWARRAY_2D		12
#define TEXSLOT_SHADOWARRAY_CUBE	13

#define TEXSLOT_VOXELRADIANCE		14


// Ondemand textures are 2d textures and declared in shader globals, these can be used independently in any shader:
#define TEXSLOT_ONDEMAND0			15
#define TEXSLOT_ONDEMAND1			16
#define TEXSLOT_ONDEMAND2			17
#define TEXSLOT_ONDEMAND3			18
#define TEXSLOT_ONDEMAND4			19
#define TEXSLOT_ONDEMAND5			20
#define TEXSLOT_ONDEMAND6			21
#define TEXSLOT_ONDEMAND7			22
#define TEXSLOT_ONDEMAND8			23
#define TEXSLOT_ONDEMAND9			24
#define TEXSLOT_ONDEMAND_COUNT	(TEXSLOT_ONDEMAND9 - TEXSLOT_ONDEMAND0 + 1)

// These are reserved for demand of any type of textures in specific shaders:
#define TEXSLOT_UNIQUE0				25
#define TEXSLOT_UNIQUE1				26

#define TEXSLOT_COUNT		TEXSLOT_UNIQUE1

// Structured Buffers (t slot):
#define SBSLOT_TILEFRUSTUMS			25
#define SBSLOT_ENTITYINDEXLIST		25
#define SBSLOT_ENTITYARRAY			26

// Skinning:
#define SKINNINGSLOT_IN_VERTEX_POS	0
#define SKINNINGSLOT_IN_VERTEX_NOR	1
#define SKINNINGSLOT_IN_VERTEX_BON	2
#define SKINNINGSLOT_IN_BONEBUFFER	3

#define SKINNINGSLOT_OUT_VERTEX_POS	0
#define SKINNINGSLOT_OUT_VERTEX_NOR	1
#define SKINNINGSLOT_OUT_VERTEX_PRE	2


#endif // _RESOURCEBUFFER_MAPPING_H_
