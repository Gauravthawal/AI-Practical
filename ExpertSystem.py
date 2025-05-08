def classify_document(document):
    document = document.lower()  # Convert to lowercase for case-insensitive matching

    if "stock" in document or "finance" in document or "bank" in document:
        return "Finance"
    if "health" in document or "doctor" in document or "medicine" in document:
        return "Health"
    if "technology" in document or "computer" in document or "software" in document:
        return "Technology"
    return "Unknown Category"

# Main logic
document = input("Enter a brief document summary: ")
category = classify_document(document)
print("Predicted Category:", category)
