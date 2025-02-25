//===----------------------------------------------------------------------===//
//                         DuckDB
//
// duckdb_python/import_cache/modules/datetime_module.hpp
//
//
//===----------------------------------------------------------------------===//

#pragma once

#include "duckdb_python/import_cache/python_import_cache_item.hpp"

namespace duckdb {

struct DatetimeCacheItem : public PythonImportCacheItem {
public:
	~DatetimeCacheItem() override {
	}
	virtual void LoadSubtypes(PythonImportCache &cache) override {
		datetime.LoadAttribute("datetime", cache, *this);
		date.LoadAttribute("date", cache, *this);
		time.LoadAttribute("time", cache, *this);
		timedelta.LoadAttribute("timedelta", cache, *this);
	}

public:
	PythonImportCacheItem datetime;
	PythonImportCacheItem date;
	PythonImportCacheItem time;
	PythonImportCacheItem timedelta;
};

} // namespace duckdb
