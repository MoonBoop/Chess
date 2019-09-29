// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHESS_ChessGameModeBase_generated_h
#error "ChessGameModeBase.generated.h already included, missing '#pragma once' in ChessGameModeBase.h"
#endif
#define CHESS_ChessGameModeBase_generated_h

#define Chess_Source_Chess_ChessGameModeBase_h_15_RPC_WRAPPERS
#define Chess_Source_Chess_ChessGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Chess_Source_Chess_ChessGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChessGameModeBase(); \
	friend struct Z_Construct_UClass_AChessGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AChessGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Chess"), NO_API) \
	DECLARE_SERIALIZER(AChessGameModeBase)


#define Chess_Source_Chess_ChessGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAChessGameModeBase(); \
	friend struct Z_Construct_UClass_AChessGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AChessGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Chess"), NO_API) \
	DECLARE_SERIALIZER(AChessGameModeBase)


#define Chess_Source_Chess_ChessGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChessGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChessGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChessGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChessGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChessGameModeBase(AChessGameModeBase&&); \
	NO_API AChessGameModeBase(const AChessGameModeBase&); \
public:


#define Chess_Source_Chess_ChessGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChessGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChessGameModeBase(AChessGameModeBase&&); \
	NO_API AChessGameModeBase(const AChessGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChessGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChessGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChessGameModeBase)


#define Chess_Source_Chess_ChessGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Chess_Source_Chess_ChessGameModeBase_h_12_PROLOG
#define Chess_Source_Chess_ChessGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chess_Source_Chess_ChessGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Chess_Source_Chess_ChessGameModeBase_h_15_RPC_WRAPPERS \
	Chess_Source_Chess_ChessGameModeBase_h_15_INCLASS \
	Chess_Source_Chess_ChessGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Chess_Source_Chess_ChessGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Chess_Source_Chess_ChessGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Chess_Source_Chess_ChessGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Chess_Source_Chess_ChessGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Chess_Source_Chess_ChessGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHESS_API UClass* StaticClass<class AChessGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Chess_Source_Chess_ChessGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
