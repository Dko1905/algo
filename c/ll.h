#ifndef LL_H
#define LL_H

/* Generic linked list in C. */
#define LINKED_LIST(name, type) \
	struct name##_Node { \
		struct name##_Node *next; \
		type data; \
	}; \
	struct name { \
		struct name##_Node *head; \
		size_t len; \
	};

#define DOUBLY_LINKED_LIST(name, type) \
	struct name##_Node { \
		struct name##_Node *prev, *next; \
		type data; \
	}; \
	struct name { \
		struct name##_Node *head, *tail; \
		size_t len; \
	};

#endif /* LL_H */
