// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBPEditorOutputBranch : uint8;
#ifdef ELGEDITORSCRIPTING_ElgEditorBP_Editor_generated_h
#error "ElgEditorBP_Editor.generated.h already included, missing '#pragma once' in ElgEditorBP_Editor.h"
#endif
#define ELGEDITORSCRIPTING_ElgEditorBP_Editor_generated_h

#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Editor_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReceivedUserCancelBranch) \
	{ \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Editor::ReceivedUserCancelBranch((EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReceivedUserCancel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_Editor::ReceivedUserCancel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateProgress) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Numerator); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Denominator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Editor::UpdateProgress(Z_Param_Numerator,Z_Param_Denominator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStatusUpdate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Numerator); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Denominator); \
		P_GET_PROPERTY(UTextProperty,Z_Param_StatusText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Editor::StatusUpdate(Z_Param_Numerator,Z_Param_Denominator,Z_Param_StatusText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndSlowTask) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Editor::EndSlowTask(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginSlowTask) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_Task); \
		P_GET_UBOOL(Z_Param_ShowProgressDialog); \
		P_GET_UBOOL(Z_Param_bShowCancelButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Editor::BeginSlowTask(Z_Param_Task,Z_Param_ShowProgressDialog,Z_Param_bShowCancelButton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsProcessRunningBranch) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ProcessId); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Editor::IsProcessRunningBranch(Z_Param_ProcessId,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsProcessRunning) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ProcessId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_Editor::IsProcessRunning(Z_Param_ProcessId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchProject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_GameOrProjectFileName); \
		P_GET_UBOOL(Z_Param_bShowWarning); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Editor::SwitchProject(Z_Param_GameOrProjectFileName,Z_Param_bShowWarning); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestartEditor) \
	{ \
		P_GET_UBOOL(Z_Param_bShowWarning); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Editor::RestartEditor(Z_Param_bShowWarning); \
		P_NATIVE_END; \
	}


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Editor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReceivedUserCancelBranch) \
	{ \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Editor::ReceivedUserCancelBranch((EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReceivedUserCancel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_Editor::ReceivedUserCancel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateProgress) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Numerator); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Denominator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Editor::UpdateProgress(Z_Param_Numerator,Z_Param_Denominator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStatusUpdate) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Numerator); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Denominator); \
		P_GET_PROPERTY(UTextProperty,Z_Param_StatusText); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Editor::StatusUpdate(Z_Param_Numerator,Z_Param_Denominator,Z_Param_StatusText); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndSlowTask) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Editor::EndSlowTask(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginSlowTask) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_Task); \
		P_GET_UBOOL(Z_Param_ShowProgressDialog); \
		P_GET_UBOOL(Z_Param_bShowCancelButton); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Editor::BeginSlowTask(Z_Param_Task,Z_Param_ShowProgressDialog,Z_Param_bShowCancelButton); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsProcessRunningBranch) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ProcessId); \
		P_GET_ENUM_REF(EBPEditorOutputBranch,Z_Param_Out_Branches); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Editor::IsProcessRunningBranch(Z_Param_ProcessId,(EBPEditorOutputBranch&)(Z_Param_Out_Branches)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsProcessRunning) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ProcessId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UElgEditorBP_Editor::IsProcessRunning(Z_Param_ProcessId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSwitchProject) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_GameOrProjectFileName); \
		P_GET_UBOOL(Z_Param_bShowWarning); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Editor::SwitchProject(Z_Param_GameOrProjectFileName,Z_Param_bShowWarning); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRestartEditor) \
	{ \
		P_GET_UBOOL(Z_Param_bShowWarning); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UElgEditorBP_Editor::RestartEditor(Z_Param_bShowWarning); \
		P_NATIVE_END; \
	}


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Editor_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElgEditorBP_Editor(); \
	friend struct Z_Construct_UClass_UElgEditorBP_Editor_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_Editor, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_Editor)


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Editor_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUElgEditorBP_Editor(); \
	friend struct Z_Construct_UClass_UElgEditorBP_Editor_Statics; \
public: \
	DECLARE_CLASS(UElgEditorBP_Editor, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ElgEditorScripting"), NO_API) \
	DECLARE_SERIALIZER(UElgEditorBP_Editor)


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Editor_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_Editor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_Editor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_Editor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_Editor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_Editor(UElgEditorBP_Editor&&); \
	NO_API UElgEditorBP_Editor(const UElgEditorBP_Editor&); \
public:


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Editor_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElgEditorBP_Editor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UElgEditorBP_Editor(UElgEditorBP_Editor&&); \
	NO_API UElgEditorBP_Editor(const UElgEditorBP_Editor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElgEditorBP_Editor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElgEditorBP_Editor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElgEditorBP_Editor)


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Editor_h_18_PRIVATE_PROPERTY_OFFSET
#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Editor_h_15_PROLOG
#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Editor_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Editor_h_18_PRIVATE_PROPERTY_OFFSET \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Editor_h_18_RPC_WRAPPERS \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Editor_h_18_INCLASS \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Editor_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Editor_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Editor_h_18_PRIVATE_PROPERTY_OFFSET \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Editor_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Editor_h_18_INCLASS_NO_PURE_DECLS \
	D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Editor_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ELGEDITORSCRIPTING_API UClass* StaticClass<class UElgEditorBP_Editor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID D____github___Plugin_ElgEditorScripting_HostProject_Plugins_ElgEditorScripting_Source_ElgEditorScripting_Public_Blueprints_ElgEditorBP_Editor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
