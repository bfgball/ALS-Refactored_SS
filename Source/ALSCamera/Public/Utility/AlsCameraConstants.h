#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "AlsCameraConstants.generated.h"

UCLASS(Meta = (BlueprintThreadSafe))
class ALSCAMERA_API UAlsCameraConstants : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// Animation Curves

	UFUNCTION(BlueprintPure, Category = "ALS|Als Camera Constants|Animation Curves")
	static const FName& CameraOffsetXCurveName();

	UFUNCTION(BlueprintPure, Category = "ALS|Als Camera Constants|Animation Curves")
	static const FName& CameraOffsetYCurveName();

	UFUNCTION(BlueprintPure, Category = "ALS|Als Camera Constants|Animation Curves")
	static const FName& CameraOffsetZCurveName();

	UFUNCTION(BlueprintPure, Category = "ALS|Als Camera Constants|Animation Curves")
	static const FName& PivotOffsetXCurveName();

	UFUNCTION(BlueprintPure, Category = "ALS|Als Camera Constants|Animation Curves")
	static const FName& PivotOffsetYCurveName();

	UFUNCTION(BlueprintPure, Category = "ALS|Als Camera Constants|Animation Curves")
	static const FName& PivotOffsetZCurveName();

	UFUNCTION(BlueprintPure, Category = "ALS|Als Camera Constants|Animation Curves")
	static const FName& LocationLagXCurveName();

	UFUNCTION(BlueprintPure, Category = "ALS|Als Camera Constants|Animation Curves")
	static const FName& LocationLagYCurveName();

	UFUNCTION(BlueprintPure, Category = "ALS|Als Camera Constants|Animation Curves")
	static const FName& LocationLagZCurveName();

	UFUNCTION(BlueprintPure, Category = "ALS|Als Camera Constants|Animation Curves")
	static const FName& RotationLagCurveName();

	UFUNCTION(BlueprintPure, Category = "ALS|Als Camera Constants|Animation Curves")
	static const FName& FirstPersonOverrideCurveName();

	UFUNCTION(BlueprintPure, Category = "ALS|Als Camera Constants|Animation Curves")
	static const FName& TraceOverrideCurveName();

	// Debug

	UFUNCTION(BlueprintPure, Category = "ALS|Als Camera Constants")
	static const FName& CameraCurvesDisplayName();

	UFUNCTION(BlueprintPure, Category = "ALS|Als Constants")
	static const FName& CameraShapesDisplayName();

	UFUNCTION(BlueprintPure, Category = "ALS|Als Constants")
	static const FName& CameraTracesDisplayName();
};

inline const FName& UAlsCameraConstants::CameraOffsetXCurveName()
{
	static const FName Name{TEXTVIEW("CameraOffsetX")};
	return Name;
}

inline const FName& UAlsCameraConstants::CameraOffsetYCurveName()
{
	static const FName Name{TEXTVIEW("CameraOffsetY")};
	return Name;
}

inline const FName& UAlsCameraConstants::CameraOffsetZCurveName()
{
	static const FName Name{TEXTVIEW("CameraOffsetZ")};
	return Name;
}

inline const FName& UAlsCameraConstants::PivotOffsetXCurveName()
{
	static const FName Name{TEXTVIEW("PivotOffsetX")};
	return Name;
}

inline const FName& UAlsCameraConstants::PivotOffsetYCurveName()
{
	static const FName Name{TEXTVIEW("PivotOffsetY")};
	return Name;
}

inline const FName& UAlsCameraConstants::PivotOffsetZCurveName()
{
	static const FName Name{TEXTVIEW("PivotOffsetZ")};
	return Name;
}

inline const FName& UAlsCameraConstants::LocationLagXCurveName()
{
	static const FName Name{TEXTVIEW("LocationLagX")};
	return Name;
}

inline const FName& UAlsCameraConstants::LocationLagYCurveName()
{
	static const FName Name{TEXTVIEW("LocationLagY")};
	return Name;
}

inline const FName& UAlsCameraConstants::LocationLagZCurveName()
{
	static const FName Name{TEXTVIEW("LocationLagZ")};
	return Name;
}

inline const FName& UAlsCameraConstants::RotationLagCurveName()
{
	static const FName Name{TEXTVIEW("RotationLag")};
	return Name;
}

inline const FName& UAlsCameraConstants::FirstPersonOverrideCurveName()
{
	static const FName Name{TEXTVIEW("FirstPersonOverride")};
	return Name;
}

inline const FName& UAlsCameraConstants::TraceOverrideCurveName()
{
	static const FName Name{TEXTVIEW("TraceOverride")};
	return Name;
}

inline const FName& UAlsCameraConstants::CameraCurvesDisplayName()
{
	static const FName Name{TEXTVIEW("ALS.CameraCurves")};
	return Name;
}

inline const FName& UAlsCameraConstants::CameraShapesDisplayName()
{
	static const FName Name{TEXTVIEW("ALS.CameraShapes")};
	return Name;
}

inline const FName& UAlsCameraConstants::CameraTracesDisplayName()
{
	static const FName Name{TEXTVIEW("ALS.CameraTraces")};
	return Name;
}
