//////////////////////////////////////////////////////////////////////////////
//
// Copyright 2022 Autodesk, Inc. All rights reserved.
//
// Use of this software is subject to the terms of the Autodesk license
// agreement provided at the time of installation or download, or which
// otherwise accompanies this software.
//
//////////////////////////////////////////////////////////////////////////////

#pragma once
#include "BossPositionDefinition.h"

// THIS CLASS WILL BE VISIBLE TO AN API CLIENT.
// THIS HEADER FILE WILL BE GENERATED FROM NIDL.
#include "../../Core/OSMacros.h"

#ifdef FUSIONXINTERFACE_EXPORTS
# ifdef __COMPILING_ADSK_FUSION_SKETCHPOINTSBOSSPOSITIONDEFINITION_CPP__
# define ADSK_FUSION_SKETCHPOINTSBOSSPOSITIONDEFINITION_API XI_EXPORT
# else
# define ADSK_FUSION_SKETCHPOINTSBOSSPOSITIONDEFINITION_API
# endif
#else
# define ADSK_FUSION_SKETCHPOINTSBOSSPOSITIONDEFINITION_API XI_IMPORT
#endif

namespace adsk { namespace core {
    class ObjectCollection;
}}

namespace adsk { namespace fusion {

/// Provides positioning information for a boss feature that is positioned by a sketch point(s).
class SketchPointsBossPositionDefinition : public BossPositionDefinition {
public:

    /// Returns the sketch points that defines the position of the boss feature.
    core::Ptr<core::ObjectCollection> sketchPoints() const;

    ADSK_FUSION_SKETCHPOINTSBOSSPOSITIONDEFINITION_API static const char* classType();
    ADSK_FUSION_SKETCHPOINTSBOSSPOSITIONDEFINITION_API const char* objectType() const override;
    ADSK_FUSION_SKETCHPOINTSBOSSPOSITIONDEFINITION_API void* queryInterface(const char* id) const override;
    ADSK_FUSION_SKETCHPOINTSBOSSPOSITIONDEFINITION_API static const char* interfaceId() { return classType(); }

private:

    // Raw interface
    virtual core::ObjectCollection* sketchPoints_raw() const = 0;
};

// Inline wrappers

inline core::Ptr<core::ObjectCollection> SketchPointsBossPositionDefinition::sketchPoints() const
{
    core::Ptr<core::ObjectCollection> res = sketchPoints_raw();
    return res;
}
}// namespace fusion
}// namespace adsk

#undef ADSK_FUSION_SKETCHPOINTSBOSSPOSITIONDEFINITION_API