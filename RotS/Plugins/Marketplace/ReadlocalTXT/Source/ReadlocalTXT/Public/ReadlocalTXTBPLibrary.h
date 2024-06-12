// Copyright 2022 "wangpangpang".All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "ReadlocalTXTBPLibrary.generated.h"


UCLASS()
class UReadlocalTXTBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
	//-----------------------------------------------------------------------------------------------------
	
	//                 ↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓      WPP_ReadLocal_TXT     ↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓
	
	//-------------------------------------------------------------------------------------------------------

	//CreateTxt
	UFUNCTION(BlueprintCallable,  Category = "WPP_ReadLocal")
	static void CreateTxt(FString URL);

	//isvalidTxt
	UFUNCTION(BlueprintCallable,BlueprintPure,Category="WPP_ReadLocal")
	static bool isvalidTxt(FString URL);

	
	//ReadTxt
	UFUNCTION(BlueprintCallable,Category="WPP_ReadLocal")
	static FString ReadTxt(FString URL);
	
	//WriteTxt
	UFUNCTION(BlueprintCallable,Category="WPP_ReadLocal")
	static bool WriteTxt(FString data,FString URL);


	//RemoveTxt
	UFUNCTION(BlueprintCallable,Category="WPP_ReadLocal")
	static bool RemoveTxt(FString URL);

	//-----------------------------------------------------------------------------------------------------
	
	//                       ↑↑↑↑↑↑↑↑↑↑↑    WPP_ReadLocal_TXT     ↑↑↑↑↑↑↑↑↑↑↑↑↑↑↑

	//-----------------------------------------------------------------------------------------------------





};
