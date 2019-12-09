// Copyright 2016-2019 Chris Conway (Koderz). All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RuntimeMeshProvider.h"
#include "RuntimeMeshBlueprintFunctions.generated.h"

/**
 * 
 */
UCLASS()
class RUNTIMEMESHCOMPONENT_API URuntimeMeshBlueprintFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	//static URuntimeMeshProvider* ConstructRuntimeMeshProvider(TSubclassOf<URuntimeMeshProvider> Class);



	// MeshData
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|MeshData")
	static void GetPositionStream(UPARAM(ref) FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData, FRuntimeMeshVertexPositionStream& OutPositionStream);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|MeshData")
	static void GetTangentStream(UPARAM(ref) FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData, FRuntimeMeshVertexTangentStream& OutTangentStream);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|MeshData")
	static void GetTexCoordStream(UPARAM(ref) FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData, FRuntimeMeshVertexTexCoordStream& OutTexCoordStream);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|MeshData")
	static void GetColorStream(UPARAM(ref) FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData, FRuntimeMeshVertexColorStream& OutColorStream);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|MeshData")
	static void GetTriangleStream(UPARAM(ref) FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData, FRuntimeMeshTriangleStream& OutTriangleStream);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|MeshData")
	static void GetAdjacencyTriangleStream(UPARAM(ref) FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData, FRuntimeMeshTriangleStream& OutAdjacencyTriangleStream);


	// Positions
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Positions")
	static void SetNumPositions(UPARAM(ref) FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32 NewNum, bool bAllowShrinking = true);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Positions")
	static void NumPositions(UPARAM(ref) FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32& OutNumPositions);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Positions")
	static void EmptyPositions(UPARAM(ref) FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32 Slack = 0);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Positions")
	static void AddPosition(UPARAM(ref) FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, FVector InPosition, int32& OutIndex);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Positions")
	static void AppendPositions(UPARAM(ref) FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, const FRuntimeMeshVertexPositionStream& InOther);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Positions")
	static void GetPosition(UPARAM(ref) FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32 Index, FVector& OutPosition);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Positions")
	static void SetPosition(UPARAM(ref) FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32 Index, FVector NewPosition);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Positions")
	static void GetBounds(UPARAM(ref) FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, FBox& OutBounds);


	// Tangents
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Tangents")
	static void SetNumTangents(UPARAM(ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 NewNum, bool bAllowShrinking = true);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Tangents")
	static void NumTangents(UPARAM(ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32& OutNumTangents);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Tangents")
	static void EmptyTangents(UPARAM(ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Slack = 0);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Tangents")
	static void AddNormalAndTangent(UPARAM(ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, const FVector& InNormal, const FVector& InTangent, int32& OutIndex);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Tangents")
	static void AddTangents(UPARAM(ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, const FVector& InTangentX, const FVector& InTangentY, const FVector& InTangentZ, int32& OutIndex);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Tangents")
	static void AppendTangents(UPARAM(ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, const FRuntimeMeshVertexTangentStream& InOther);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Tangents")
	static void GetNormal(UPARAM(ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector& OutNormal);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Tangents")
	static void SetNormal(UPARAM(ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector NewNormal);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Tangents")
	static void GetTangent(UPARAM(ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector& OutTangent);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Tangents")
	static void SetTangent(UPARAM(ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector NewTangent);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Tangents")
	static void GetTangents(UPARAM(ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector& OutTangentX, FVector& OutTangentY, FVector& OutTangentZ);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Tangents")
	static void SetTangents(UPARAM(ref) FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector InTangentX, FVector InTangentY, FVector InTangentZ);


	// Texture Coordinates
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|TextureCoordinates")
	static void SetNumTexCoords(UPARAM(ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 NewNum, bool bAllowShrinking = true);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|TextureCoordinates")
	static void NumTexCoords(UPARAM(ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32& OutNumTexCoords);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|TextureCoordinates")
	static void NumTexCoordChannels(UPARAM(ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32& OutNumTexCoordChannels);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|TextureCoordinates")
	static void EmptyTexCoords(UPARAM(ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Slack = 0);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|TextureCoordinates")
	static void AddTexCoord(UPARAM(ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, const FVector2D& InTexCoord, int32& OutIndex);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|TextureCoordinates")
	static void AppendTexCoords(UPARAM(ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, const FRuntimeMeshVertexTexCoordStream& InOther);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|TextureCoordinates")
	static void GetTexCoord(UPARAM(ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Index, FVector2D& OutTexCoord);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|TextureCoordinates")
	static void SetTexCoord(UPARAM(ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Index, const FVector2D& NewTexCoord, int32 ChannelId = 0);


	// Colors
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Colors")
	static void SetNumColors(UPARAM(ref) FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32 NewNum, bool bAllowShrinking = true);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Colors")
	static void NumColors(UPARAM(ref) FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32& OutNumColors);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Colors")
	static void EmptyColors(UPARAM(ref) FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32 Slack = 0);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Colors")
	static void AddColor(UPARAM(ref) FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, const FColor& InColor, int32& OutIndex);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Colors")
	static void AppendColors(UPARAM(ref) FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, const FRuntimeMeshVertexColorStream& InOther);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Colors")
	static void GetColor(UPARAM(ref) FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32 Index, FColor& OutColor);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Colors")
	static void SetColor(UPARAM(ref) FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32 Index, const FColor& NewColor);


	// Triangles
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Triangles")
	static void SetNumTriangles(UPARAM(ref) FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 NewNum, bool bAllowShrinking = true);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Triangles")
	static void NumIndices(UPARAM(ref) FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32& OutNumIndices);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Triangles")
	static void NumTriangles(UPARAM(ref) FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32& OutNumTriangles);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Triangles")
	static void EmptyTriangles(UPARAM(ref) FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 Slack = 0);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Triangles")
	static void AddIndex(UPARAM(ref) FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 NewIndex, int32& OutIndex);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Triangles")
	static void AddTriangle(UPARAM(ref) FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 NewIndexA, int32 NewIndexB, int32 NewIndexC);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Triangles")
	static void AppendTriangles(UPARAM(ref) FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, const FRuntimeMeshTriangleStream& InOther);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Triangles")
	static void GetVertexIndex(UPARAM(ref) FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 Index, int32& OutIndex);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Triangles")
	static void SetVertexIndex(UPARAM(ref) FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 Index, int32 NewIndex);


	// CollisionData
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|CollisionData")
	static void GetCollisionVertexStream(UPARAM(ref) FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData, FRuntimeMeshCollisionVertexStream& OutPositionStream);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|CollisionData")
	static void GetCollisionTriangleStream(UPARAM(ref) FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData, FRuntimeMeshCollisionTriangleStream& OutTriangleStream);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|CollisionData")
	static void GetCollisionTexCoordStream(UPARAM(ref) FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData, FRuntimeMeshCollisionTexCoordStream& OutTexCoordStream);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|CollisionData")
	static void GetCollisionMaterialIndexStream(UPARAM(ref) FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData, FRuntimeMeshCollisionMaterialIndexStream& OutMaterialIndexStream);


	// Vertices 
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|Vertices")
	static void SetNumCollisionVertices(UPARAM(ref) FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32 NewNum, bool bAllowShrinking = true);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|Vertices")
	static void NumCollisionVertices(UPARAM(ref) FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32& OutNumVertices);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|Vertices")
	static void EmptyCollisionVertices(UPARAM(ref) FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32 Slack = 0);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|Vertices")
	static void AddCollisionVertex(UPARAM(ref) FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, FVector InVertex, int32& OutIndex);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|Vertices")
	static void GetCollisionVertex(UPARAM(ref) FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32 Index, FVector& OutVertex);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|Vertices")
	static void SetCollisionVertex(UPARAM(ref) FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32 Index, FVector NewVertex);


	// Triangles
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|Triangles")
	static void SetNumCollisionTriangles(UPARAM(ref) FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32 NewNum, bool bAllowShrinking = true);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|Triangles")
	static void NumCollisionTriangles(UPARAM(ref) FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32& OutNumTriangles);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|Triangles")
	static void EmptyCollisionTriangles(UPARAM(ref) FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32 Slack = 0);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|Triangles")
	static void AddCollisionTriangle(UPARAM(ref) FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32 NewIndexA, int32 NewIndexB, int32 NewIndexC, int32& OutTriangleIndex);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|Triangles")
	static void GetCollisionTriangle(UPARAM(ref) FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32 Index, int32& OutIndexA, int32& OutIndexB, int32& OutIndexC);


	// Texture Coordinates
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|TextureCoordinates")
	static void SetNumCollisionTexCoords(UPARAM(ref) FRuntimeMeshCollisionTexCoordStream& Stream, FRuntimeMeshCollisionTexCoordStream& OutStream, int32 NewNumChannels, int32 NewNumTexCoords, bool bAllowShrinking = true);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|TextureCoordinates")
	static void NumCollisionTexCoords(UPARAM(ref) FRuntimeMeshCollisionTexCoordStream& Stream, FRuntimeMeshCollisionTexCoordStream& OutStream, int32 ChannelId, int32& OutNumTexCoords);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|TextureCoordinates")
	static void NumCollisionTexCoordChannels(UPARAM(ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32& OutNumTexCoordChannels);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|TextureCoordinates")
	static void EmptyCollisionTexCoords(UPARAM(ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Slack = 0);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|TextureCoordinates")
	static void AddCollisionTexCoord(UPARAM(ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, const FVector2D& InTexCoord, int32& OutIndex);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|TextureCoordinates")
	static void GetCollisionTexCoord(UPARAM(ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Index, FVector2D& OutTexCoord, int32 ChannelId = 0);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|TextureCoordinates")
	static void SetCollisionTexCoord(UPARAM(ref) FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Index, const FVector2D& NewTexCoord, int32 ChannelId = 0);


	// Material Indices
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Rendering|Triangles")
	static void SetNumCollisionMaterialIndices(UPARAM(ref) FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 NewNum, bool bAllowShrinking = true);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|MaterialIndices")
	static void NumCollisionMaterialIndices(UPARAM(ref) FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32& OutNumIndices);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|MaterialIndices")
	static void EmptyCollisionMaterialIndices(UPARAM(ref) FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 Slack = 0);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|MaterialIndices")
	static void AddCollisionMaterialIndex(UPARAM(ref) FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 NewIndex, int32& OutIndex);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|MaterialIndices")
	static void GetCollisionMaterialIndex(UPARAM(ref) FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 Index, int32& OutIndex);
	UFUNCTION(BlueprintCallable, Category = "RuntimeMesh|Collision|MaterialIndices")
	static void SeCollisionMaterialIndex(UPARAM(ref) FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 Index, int32 NewIndex);

};