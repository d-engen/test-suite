/**
 * @brief Machine learning types.
 */
#pragma once

#include "container/vector.h"

namespace ml
{
/** One-dimensional vector. */
using Matrix1d = container::Vector<double>;

/** Two-dimensional vector. */
using Matrix2d = container::Vector<double>;

} // namespace ml