﻿/*
	Copyright (c) 2017 TOSHIBA Digital Solutions Corporation

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU Affero General Public License as
	published by the Free Software Foundation, either version 3 of the
	License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU Affero General Public License for more details.

	You should have received a copy of the GNU Affero General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef SQL_OPERATOR_TYPE_H_
#define SQL_OPERATOR_TYPE_H_

struct SQLOpTypes {
	enum Type {

		OP_SCAN,
		OP_SCAN_SEMI_FILTERING,
		OP_SCAN_UNIQUE,
		OP_SCAN_NO_INDEXED,
		OP_SCAN_CONTAINER_FULL,
		OP_SCAN_CONTAINER_RANGE,
		OP_SCAN_CONTAINER_INDEX,
		OP_SCAN_CONTAINER_META,
		OP_SCAN_CONTAINER_VISITED,
		OP_SELECT,
		OP_SELECT_NONE,
		OP_SELECT_PIPE,
		OP_LIMIT,


		OP_SORT,
		OP_SORT_NWAY,
		OP_WINDOW,
		OP_WINDOW_PARTITION,
		OP_WINDOW_RANK_PARTITION,
		OP_WINDOW_FRAME_PARTITION,
		OP_WINDOW_MERGE,


		OP_JOIN,
		OP_JOIN_OUTER,
		OP_JOIN_GRACE_HASH,
		OP_JOIN_SORTED,
		OP_JOIN_NESTED,
		OP_JOIN_COMP_MERGE,
		OP_JOIN_HASH,
		OP_JOIN_OUTER_NESTED,
		OP_JOIN_OUTER_COMP_MERGE,
		OP_JOIN_OUTER_HASH,


		OP_GROUP,
		OP_GROUP_DISTINCT,
		OP_GROUP_DISTINCT_MERGE,
		OP_GROUP_BUCKET_HASH,
		OP_GROUP_RANGE,
		OP_GROUP_RANGE_MERGE,
		OP_UNION,
		OP_UNION_ALL,
		OP_UNION_SORTED,
		OP_UNION_DISTINCT_MERGE,
		OP_UNION_DISTINCT_HASH,
		OP_UNION_INTERSECT_MERGE,
		OP_UNION_INTERSECT_HASH,
		OP_UNION_EXCEPT_MERGE,
		OP_UNION_EXCEPT_HASH,
		OP_UNION_COMPENSATE_MERGE,


		OP_PARENT_INPUT,
		OP_PARENT_OUTPUT,

		END_OP
	};

	enum ProjectionType {
		START_PROJ,


		PROJ_OUTPUT,
		PROJ_AGGR_PIPE,
		PROJ_AGGR_OUTPUT,
		PROJ_MULTI_OUTPUT,
		PROJ_FILTER,


		PROJ_PIPE_FINISH,
		PROJ_MULTI_STAGE,
		PROJ_KEY_FILTER,


		PROJ_LIMIT,
		PROJ_SUB_LIMIT,

		END_PROJ
	};

	enum ConfigType {
		CONF_SORT_PARTIAL_UNIT,
		CONF_SORT_MERGE_UNIT,
		CONF_SORT_ORDERED_UNIQUE,

		CONF_INTERRUPTION_PROJECTION_COUNT,
		CONF_INTERRUPTION_SCAN_COUNT,
		CONF_SCAN_COUNT_BASED,

		CONF_WORK_MEMORY_LIMIT,

		CONF_INDEX_LIMIT,
		CONF_GRACE_HASH_LIMIT,
		CONF_UNION_HASH_LIMIT,
		CONF_LIMIT_INHERITANCE,

		END_CONF
	};

	enum OpCodeKey {
		CODE_TYPE,
		CODE_CONFIG,

		CODE_CONTAINER_LOCATION,

		CODE_KEY_COLUMNS,
		CODE_MIDDLE_KEY_COLUMNS,

		CODE_JOIN_PREDICATE,
		CODE_FILTER_PREDICATE,
		CODE_INDEX_CONDITIONS,

		CODE_PIPE_PROJECTION,
		CODE_MIDDLE_PROJECTION,
		CODE_FINISH_PROJECTION,

		CODE_AGGREGATION_PHASE,
		CODE_JOIN_TYPE,
		CODE_UNION_TYPE,

		CODE_LIMIT,
		CODE_OFFSET,
		CODE_SUB_LIMIT,
		CODE_SUB_OFFSET
	};

	enum Optimization {
		OPT_VALUE_COMP_NO_NULL,
		OPT_VALUE_COMP_NO_SWITCH,
		OPT_EXPR_COMP_CONST,
		OPT_EXPR_COMP_COLUMNS,
		OPT_EXPR_COND_IN_LIST,
		OPT_EXPR_OUT_NO_NULL,
		OPT_OP_COMP_CONST,

		END_OPT
	};
};

#endif
