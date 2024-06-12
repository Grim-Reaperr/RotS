// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadlocalTXT/Public/ReadlocalTXTBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadlocalTXTBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	READLOCALTXT_API UClass* Z_Construct_UClass_UReadlocalTXTBPLibrary();
	READLOCALTXT_API UClass* Z_Construct_UClass_UReadlocalTXTBPLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ReadlocalTXT();
// End Cross Module References
	DEFINE_FUNCTION(UReadlocalTXTBPLibrary::execRemoveTxt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UReadlocalTXTBPLibrary::RemoveTxt(Z_Param_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadlocalTXTBPLibrary::execWriteTxt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_data);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UReadlocalTXTBPLibrary::WriteTxt(Z_Param_data,Z_Param_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadlocalTXTBPLibrary::execReadTxt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UReadlocalTXTBPLibrary::ReadTxt(Z_Param_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadlocalTXTBPLibrary::execisvalidTxt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UReadlocalTXTBPLibrary::isvalidTxt(Z_Param_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadlocalTXTBPLibrary::execCreateTxt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		UReadlocalTXTBPLibrary::CreateTxt(Z_Param_URL);
		P_NATIVE_END;
	}
	void UReadlocalTXTBPLibrary::StaticRegisterNativesUReadlocalTXTBPLibrary()
	{
		UClass* Class = UReadlocalTXTBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTxt", &UReadlocalTXTBPLibrary::execCreateTxt },
			{ "isvalidTxt", &UReadlocalTXTBPLibrary::execisvalidTxt },
			{ "ReadTxt", &UReadlocalTXTBPLibrary::execReadTxt },
			{ "RemoveTxt", &UReadlocalTXTBPLibrary::execRemoveTxt },
			{ "WriteTxt", &UReadlocalTXTBPLibrary::execWriteTxt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics
	{
		struct ReadlocalTXTBPLibrary_eventCreateTxt_Parms
		{
			FString URL;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadlocalTXTBPLibrary_eventCreateTxt_Parms, URL), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::Function_MetaDataParams[] = {
		{ "Category", "WPP_ReadLocal" },
		{ "Comment", "//CreateTxt\n" },
		{ "ModuleRelativePath", "Public/ReadlocalTXTBPLibrary.h" },
		{ "ToolTip", "CreateTxt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadlocalTXTBPLibrary, nullptr, "CreateTxt", nullptr, nullptr, Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::ReadlocalTXTBPLibrary_eventCreateTxt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::ReadlocalTXTBPLibrary_eventCreateTxt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadlocalTXTBPLibrary_isvalidTxt_Statics
	{
		struct ReadlocalTXTBPLibrary_eventisvalidTxt_Parms
		{
			FString URL;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_isvalidTxt_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadlocalTXTBPLibrary_eventisvalidTxt_Parms, URL), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UReadlocalTXTBPLibrary_isvalidTxt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReadlocalTXTBPLibrary_eventisvalidTxt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_isvalidTxt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReadlocalTXTBPLibrary_eventisvalidTxt_Parms), &Z_Construct_UFunction_UReadlocalTXTBPLibrary_isvalidTxt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadlocalTXTBPLibrary_isvalidTxt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadlocalTXTBPLibrary_isvalidTxt_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadlocalTXTBPLibrary_isvalidTxt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadlocalTXTBPLibrary_isvalidTxt_Statics::Function_MetaDataParams[] = {
		{ "Category", "WPP_ReadLocal" },
		{ "Comment", "//isvalidTxt\n" },
		{ "ModuleRelativePath", "Public/ReadlocalTXTBPLibrary.h" },
		{ "ToolTip", "isvalidTxt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_isvalidTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadlocalTXTBPLibrary, nullptr, "isvalidTxt", nullptr, nullptr, Z_Construct_UFunction_UReadlocalTXTBPLibrary_isvalidTxt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_isvalidTxt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadlocalTXTBPLibrary_isvalidTxt_Statics::ReadlocalTXTBPLibrary_eventisvalidTxt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_isvalidTxt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadlocalTXTBPLibrary_isvalidTxt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_isvalidTxt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReadlocalTXTBPLibrary_isvalidTxt_Statics::ReadlocalTXTBPLibrary_eventisvalidTxt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReadlocalTXTBPLibrary_isvalidTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadlocalTXTBPLibrary_isvalidTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics
	{
		struct ReadlocalTXTBPLibrary_eventReadTxt_Parms
		{
			FString URL;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadlocalTXTBPLibrary_eventReadTxt_Parms, URL), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadlocalTXTBPLibrary_eventReadTxt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::Function_MetaDataParams[] = {
		{ "Category", "WPP_ReadLocal" },
		{ "Comment", "//ReadTxt\n" },
		{ "ModuleRelativePath", "Public/ReadlocalTXTBPLibrary.h" },
		{ "ToolTip", "ReadTxt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadlocalTXTBPLibrary, nullptr, "ReadTxt", nullptr, nullptr, Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::ReadlocalTXTBPLibrary_eventReadTxt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::ReadlocalTXTBPLibrary_eventReadTxt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics
	{
		struct ReadlocalTXTBPLibrary_eventRemoveTxt_Parms
		{
			FString URL;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadlocalTXTBPLibrary_eventRemoveTxt_Parms, URL), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReadlocalTXTBPLibrary_eventRemoveTxt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReadlocalTXTBPLibrary_eventRemoveTxt_Parms), &Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::Function_MetaDataParams[] = {
		{ "Category", "WPP_ReadLocal" },
		{ "Comment", "//RemoveTxt\n" },
		{ "ModuleRelativePath", "Public/ReadlocalTXTBPLibrary.h" },
		{ "ToolTip", "RemoveTxt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadlocalTXTBPLibrary, nullptr, "RemoveTxt", nullptr, nullptr, Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::ReadlocalTXTBPLibrary_eventRemoveTxt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::ReadlocalTXTBPLibrary_eventRemoveTxt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics
	{
		struct ReadlocalTXTBPLibrary_eventWriteTxt_Parms
		{
			FString data;
			FString URL;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_data;
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadlocalTXTBPLibrary_eventWriteTxt_Parms, data), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ReadlocalTXTBPLibrary_eventWriteTxt_Parms, URL), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReadlocalTXTBPLibrary_eventWriteTxt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ReadlocalTXTBPLibrary_eventWriteTxt_Parms), &Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::NewProp_data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::Function_MetaDataParams[] = {
		{ "Category", "WPP_ReadLocal" },
		{ "Comment", "//WriteTxt\n" },
		{ "ModuleRelativePath", "Public/ReadlocalTXTBPLibrary.h" },
		{ "ToolTip", "WriteTxt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadlocalTXTBPLibrary, nullptr, "WriteTxt", nullptr, nullptr, Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::ReadlocalTXTBPLibrary_eventWriteTxt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::ReadlocalTXTBPLibrary_eventWriteTxt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadlocalTXTBPLibrary);
	UClass* Z_Construct_UClass_UReadlocalTXTBPLibrary_NoRegister()
	{
		return UReadlocalTXTBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UReadlocalTXTBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadlocalTXTBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadlocalTXT,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadlocalTXTBPLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UReadlocalTXTBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadlocalTXTBPLibrary_CreateTxt, "CreateTxt" }, // 2005665093
		{ &Z_Construct_UFunction_UReadlocalTXTBPLibrary_isvalidTxt, "isvalidTxt" }, // 2779411966
		{ &Z_Construct_UFunction_UReadlocalTXTBPLibrary_ReadTxt, "ReadTxt" }, // 3676943566
		{ &Z_Construct_UFunction_UReadlocalTXTBPLibrary_RemoveTxt, "RemoveTxt" }, // 4204310485
		{ &Z_Construct_UFunction_UReadlocalTXTBPLibrary_WriteTxt, "WriteTxt" }, // 376420580
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReadlocalTXTBPLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadlocalTXTBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReadlocalTXTBPLibrary.h" },
		{ "ModuleRelativePath", "Public/ReadlocalTXTBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadlocalTXTBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadlocalTXTBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadlocalTXTBPLibrary_Statics::ClassParams = {
		&UReadlocalTXTBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReadlocalTXTBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UReadlocalTXTBPLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UReadlocalTXTBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UReadlocalTXTBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadlocalTXTBPLibrary.OuterSingleton, Z_Construct_UClass_UReadlocalTXTBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadlocalTXTBPLibrary.OuterSingleton;
	}
	template<> READLOCALTXT_API UClass* StaticClass<UReadlocalTXTBPLibrary>()
	{
		return UReadlocalTXTBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadlocalTXTBPLibrary);
	UReadlocalTXTBPLibrary::~UReadlocalTXTBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ReadlocalTXT_Source_ReadlocalTXT_Public_ReadlocalTXTBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ReadlocalTXT_Source_ReadlocalTXT_Public_ReadlocalTXTBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadlocalTXTBPLibrary, UReadlocalTXTBPLibrary::StaticClass, TEXT("UReadlocalTXTBPLibrary"), &Z_Registration_Info_UClass_UReadlocalTXTBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadlocalTXTBPLibrary), 3804250351U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ReadlocalTXT_Source_ReadlocalTXT_Public_ReadlocalTXTBPLibrary_h_1004173545(TEXT("/Script/ReadlocalTXT"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ReadlocalTXT_Source_ReadlocalTXT_Public_ReadlocalTXTBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ReadlocalTXT_Source_ReadlocalTXT_Public_ReadlocalTXTBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
