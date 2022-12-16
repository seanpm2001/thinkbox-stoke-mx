// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0
// C++ Mesh File for 3ds Max, created by SaveMeshToCpp Macroscript
// Built from the object Circle002

#include "stdafx.h"
#include <mesh.h>

#pragma warning( disable : 4305 )

// Anonymous namespace, to avoid name collisions
namespace {

// 98 vertices
float verts[] = { 0.5,        0.48,        0.0, 0.5,         0.5,         0.0, 0.48,        0.5,        0.0,
                  0.48,       -0.5,        0.0, 0.5,         -0.5,        0.0, 0.5,         -0.48,      0.0,
                  -0.5,       -0.5,        0.0, -0.48,       -0.5,        0.0, -0.5,        -0.48,      0.0,
                  -0.48,      0.5,         0.0, -0.5,        0.5,         0.0, -0.5,        0.48,       0.0,
                  0.0,        -0.318076,   0.0, 0.353091,    -0.115234,   0.0, 0.353075,    0.294114,   0.0,
                  0.0,        0.0879632,   0.0, 0.17025,     0.164252,    0.0, 0.333077,    0.259285,   0.0,
                  0.333091,   -0.103646,   0.0, 0.0192683,   -0.283528,   0.0, 0.0198445,   0.0764682,  0.0,
                  0.0769711,  0.10981,     0.0, 0.0874078,   0.0712759,   0.0, 0.0874078,   -0.0934007, 0.0,
                  0.134458,   -0.140451,   0.0, 0.147528,    -0.138709,   0.0, 0.168439,    -0.12651,   0.0,
                  0.205034,   -0.0934007,  0.0, 0.227688,    -0.0324094,  0.0, 0.213747,    0.0494933,  0.0,
                  0.181509,   0.141852,    0.0, -0.354015,   -0.114879,   0.0, 0.0,         -0.318076,  0.0,
                  0.0,        0.0879632,   0.0, -0.354031,   0.294469,    0.0, -0.0885699,  0.11641,    0.0,
                  -0.020732,  0.0764884,   0.0, -0.0207318,  -0.28353,    0.0, -0.334016,   -0.103311,  0.0,
                  -0.33403,   0.259642,    0.0, -0.161694,   0.15908,     0.0, -0.17137,    0.141852,   0.0,
                  -0.203745,  0.0634342,   0.0, -0.217617,   -0.025439,   0.0, -0.194895,   -0.0934007, 0.0,
                  -0.1583,    -0.12651,    0.0, -0.137389,   -0.138709,   0.0, -0.124319,   -0.140451,  0.0,
                  -0.0424412, -0.0934007,  0.0, -0.0424412,  -0.0463502,  0.0, -0.0740179,  -0.0463502, 0.0,
                  -0.0740179, 0.000700179, 0.0, -0.100794,   0.000700179, 0.0, -0.100794,   0.0712759,  0.0,
                  0.0,        0.0879632,   0.0, 0.353075,    0.294114,    0.0, 0.0,         0.497311,   0.0,
                  -0.354031,  0.294469,    0.0, 0.0,         0.11112,     0.0, -0.06036,    0.146326,   0.0,
                  -0.0572634, 0.149422,    0.0, -0.00669318, 0.165377,    0.0, 0.0407805,   0.152519,   0.0,
                  0.0518842,  0.141415,    0.0, -0.314084,   0.294314,    0.0, 0.0,         0.474248,   0.0,
                  0.313184,   0.293989,    0.0, 0.152713,    0.20029,     0.0, 0.135986,    0.244307,   0.0,
                  0.134458,   0.283003,    0.0, 0.143386,    0.307758,    0.0, 0.151011,    0.321627,   0.0,
                  0.157983,   0.330054,    0.0, 0.143957,    0.324582,    0.0, 0.128011,    0.315962,   0.0,
                  0.108229,   0.301046,    0.0, 0.0868023,   0.274878,    0.0, 0.0704151,   0.241758,   0.0,
                  0.0638826,  0.212427,    0.0, 0.0528977,   0.224659,    0.0, 0.0437161,   0.245153,   0.0,
                  0.0403573,  0.283003,    0.0, 0.0443383,   0.324477,    0.0, 0.0529522,   0.353823,   0.0,
                  0.0638826,  0.377104,    0.0, 0.0280461,   0.357076,    0.0, -0.00443819, 0.334425,   0.0,
                  -0.0302184, 0.306528,    0.0, -0.0463411,  0.281332,    0.0, -0.0568719,  0.257674,   0.0,
                  -0.0689874, 0.219273,    0.0, -0.0828765,  0.260039,    0.0, -0.111723,   0.288571,   0.0,
                  -0.148047,  0.310985,    0.0, -0.134427,   0.273698,    0.0, -0.12827,    0.237375,   0.0,
                  -0.137039,  0.20298,     0.0, -0.142086,   0.193994,    0.0 };

// 92 faces
int faces[] = {
    1,  2,  0,  1,  7,  5,  3,  4,  1,  7,  6,  7,  8,  1,  7,  11, 9,  10, 1,  7,  18, 12, 13, 1,  2,  12, 18, 19, 1,
    2,  15, 12, 19, 1,  1,  15, 19, 20, 1,  2,  18, 13, 14, 1,  2,  17, 18, 14, 1,  1,  17, 14, 15, 1,  2,  16, 17, 15,
    1,  1,  30, 16, 15, 1,  1,  15, 20, 21, 1,  2,  30, 15, 21, 1,  0,  30, 21, 22, 1,  2,  29, 30, 22, 1,  1,  29, 22,
    23, 1,  2,  28, 29, 23, 1,  1,  27, 28, 23, 1,  1,  26, 27, 23, 1,  1,  26, 23, 24, 1,  2,  25, 26, 24, 1,  5,  37,
    31, 32, 1,  2,  31, 37, 38, 1,  2,  37, 32, 33, 1,  2,  36, 37, 33, 1,  1,  36, 33, 34, 1,  2,  35, 36, 34, 1,  1,
    34, 31, 38, 1,  1,  34, 38, 39, 1,  2,  50, 51, 52, 1,  3,  48, 49, 50, 1,  3,  47, 48, 50, 1,  1,  46, 47, 50, 1,
    1,  45, 46, 50, 1,  1,  44, 45, 50, 1,  1,  44, 50, 52, 1,  0,  43, 44, 52, 1,  1,  42, 43, 52, 1,  1,  42, 52, 53,
    1,  2,  41, 42, 53, 1,  1,  41, 53, 35, 1,  2,  40, 41, 35, 1,  1,  40, 35, 34, 1,  0,  39, 40, 34, 1,  1,  81, 59,
    60, 1,  2,  71, 72, 73, 1,  3,  83, 84, 85, 1,  3,  81, 60, 61, 1,  2,  80, 81, 61, 1,  1,  92, 93, 94, 1,  3,  79,
    80, 61, 1,  1,  58, 54, 55, 1,  2,  63, 58, 55, 1,  1,  57, 54, 58, 1,  1,  57, 58, 59, 1,  2,  79, 61, 62, 1,  2,
    78, 79, 62, 1,  1,  82, 83, 85, 1,  1,  82, 85, 86, 1,  2,  70, 71, 73, 1,  1,  70, 73, 74, 1,  2,  81, 82, 86, 1,
    1,  81, 86, 87, 1,  2,  59, 81, 87, 1,  0,  59, 87, 88, 1,  2,  59, 88, 89, 1,  2,  59, 89, 90, 1,  2,  69, 70, 74,
    1,  1,  69, 74, 75, 1,  2,  69, 75, 76, 1,  2,  68, 69, 76, 1,  1,  68, 76, 77, 1,  2,  91, 92, 94, 1,  1,  91, 94,
    95, 1,  2,  90, 91, 95, 1,  1,  90, 95, 96, 1,  2,  59, 90, 96, 1,  0,  59, 96, 97, 1,  2,  57, 59, 97, 1,  0,  57,
    97, 64, 1,  2,  56, 57, 64, 1,  1,  56, 64, 65, 1,  2,  55, 56, 65, 1,  1,  55, 65, 66, 1,  2,  63, 55, 66, 1,  0,
    63, 66, 67, 1,  2,  63, 67, 68, 1,  2,  63, 68, 77, 1,  0,  63, 77, 78, 1,  2,  63, 78, 62, 1,  4 };

} // anonymous namespace

void BuildMesh_EmberIcon( Mesh& outMesh ) {
    int vertCount = sizeof( verts ) / sizeof( verts[0] ) / 3;
    int faceCount = sizeof( faces ) / sizeof( faces[0] ) / 5;

    outMesh.freeAllVData();
    outMesh.FreeAll();

    outMesh.setNumVerts( vertCount );
    outMesh.setNumFaces( faceCount );

    for( int i = 0; i < vertCount; ++i )
        outMesh.setVert( i, &verts[i * 3] );

    for( int i = 0; i < faceCount; ++i )
        memcpy( &outMesh.faces[i], &faces[i * 5], sizeof( Face ) );

    outMesh.InvalidateGeomCache();
    outMesh.InvalidateTopologyCache();
    outMesh.buildBoundingBox();
}
